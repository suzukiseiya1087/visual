/**
 * @file   DxLibExtension.cpp
 *
 * @brief  DxLibへの追加機能のソースファイル
 *
 * @author S.Takaki
 *
 * @date   2023/04/11
 */

// ヘッダファイルの読み込み ================================================
#include <cmath>
#include <cstdio>
#include <functional>
#include <sstream>

#include <DxLib.h>

#include "Library/GameLibErrorHandling.h"




// 定数の定義 ==============================================================
namespace DxLib
{
	static const int   NUM_CAPSULE_DIVISION = 16;                                ///< カプセル描画における半円の分割数
	static const float ANGULAR_DISPLACEMENT = DX_PI_F / NUM_CAPSULE_DIVISION;    ///< カプセル描画時の角変位

} // namespace GameLib



// 関数の定義 ==============================================================
namespace DxLib
{
	/**
	 * @brief 破線の描画処理の実装
	 *
	 * @param[in] x1        描画する線の起点座標(X座標)
	 * @param[in] y1        描画する線の起点座標(Y座標)
	 * @param[in] x2        描画する線の終点座標(X座標)
	 * @param[in] y2        描画する線の終点座標(Y座標)
	 * @param[in] color     描く線の色
	 * @param[in] length    破線の長さおよび間隔の幅
	 * @param[in] thickness 線の太さ
	 * @param[in] drawLine  描画時に呼び出す関数
	 *
	 * @retval  0 成功
	 * @retval -1 エラー発生
	 */
	template <typename T, typename F>
	int DrawDashedLineImpl(T x1, T y1, T x2, T y2, unsigned int color, T length, T thickness, F drawLine)
	{
		float vx = static_cast<float>(x2 - x1);
		float vy = static_cast<float>(y2 - y1);

		float angle = atan2(vy, vx);
		float dx = static_cast<float>(length) * cos(angle);
		float dy = static_cast<float>(length) * sin(angle);

		int count = static_cast<int>(sqrt(vx * vx + vy * vy) / length);

		float x = static_cast<float>(x1);
		float y = static_cast<float>(y1);

		for (int i = 0; i < count; i += 2)
		{
			if (drawLine(static_cast<T>(x), static_cast<T>(y), static_cast<T>(x + dx), static_cast<T>(y + dy), color, thickness) == -1)
			{
				return -1;
			}
			x += dx * 2;
			y += dy * 2;
		}

		if (count % 2 == 0)
		{
			if (drawLine(static_cast<T>(x), static_cast<T>(y), x2, y2, color, thickness) == -1)
			{
				return -1;
			}
		}

		return 0;
	}


	//-----------------------------------------------------------------
	// 破線を描画
	//-----------------------------------------------------------------
	int DrawDashedLine(int x1, int y1, int x2, int y2, unsigned int color, int length, int thickness)
	{
		return DrawDashedLineImpl(x1, y1, x2, y2, color, length, thickness, DrawLine);
	}


	//-----------------------------------------------------------------
	// 破線を描画(アンチエイリアス効果付き)
	//-----------------------------------------------------------------
	int DrawDashedLineAA(float x1, float y1, float x2, float y2, unsigned int color, float length, float thickness)
	{
		return DrawDashedLineImpl(x1, y1, x2, y2, color, length, thickness, DrawLineAA);
	}


	/**
	 * @brief  カプセルの描画処理の実装
	 *
	 * @param[in] x1        一方の円の中心座標(X座標)
	 * @param[in] y1        一方の円の中心座標(Y座標)
	 * @param[in] x2        もう一方の円の中心座標(X座標)
	 * @param[in] y2        もう一方の円の中心座標(Y座標)
	 * @param[in] color     描く線の色
	 * @param[in] thickness 線の太さ
	 * @param[in] drawLine  描画時に呼び出す関数
	 *
	 * @retval  0 成功
	 * @retval -1 エラー発生
	 */
	template <typename T, typename F>
	int DrawCapsuleImpl(T x1, T y1, T x2, T y2, T r, unsigned int color, T thickness, F drawLine)
	{
		float vx = static_cast<float>(x2 - x1);
		float vy = static_cast<float>(y2 - y1);

		float angle = atan2(vy, vx) + (DX_PI_F / 2);

		float dx[NUM_CAPSULE_DIVISION + 1];
		float dy[NUM_CAPSULE_DIVISION + 1];

		for (int i = 0; i < NUM_CAPSULE_DIVISION + 1; i++)
		{
			dx[i] = static_cast<float>(r) * cos(angle);
			dy[i] = static_cast<float>(r) * sin(angle);
			angle += ANGULAR_DISPLACEMENT;
		}


		if (drawLine(static_cast<T>(x1 + dx[0]), static_cast<T>(y1 + dy[0]), static_cast<T>(x2 - dx[NUM_CAPSULE_DIVISION]), static_cast<T>(y2 - dy[NUM_CAPSULE_DIVISION]), color, thickness))
		{
			return -1;
		}

		if (drawLine(static_cast<T>(x1 + dx[NUM_CAPSULE_DIVISION]), static_cast<T>(y1 + dy[NUM_CAPSULE_DIVISION]), static_cast<T>(x2 - dx[0]), static_cast<T>(y2 - dy[0]), color, thickness))
		{
			return -1;
		}


		for (int i = 0; i < NUM_CAPSULE_DIVISION; i++)
		{
			if (drawLine(static_cast<T>(x1 + dx[i]), static_cast<T>(y1 + dy[i]), static_cast<T>(x1 + dx[i + 1]), static_cast<T>(y1 + dy[i + 1]), color, thickness))
			{
				return -1;
			}
		}

		for (int i = 0; i < NUM_CAPSULE_DIVISION; i++)
		{
			if (drawLine(static_cast<T>(x2 - dx[i]), static_cast<T>(y2 - dy[i]), static_cast<T>(x2 - dx[i + 1]), static_cast<T>(y2 - dy[i + 1]), color,thickness))
			{
				return -1;
			}
		}


		return 0;
	}


	//-----------------------------------------------------------------
	// カプセルを描画
	//-----------------------------------------------------------------
	int DrawCapsule(int x1, int y1, int x2, int y2, int r, unsigned int color, int thickness)
	{
		return DrawCapsuleImpl(x1, y1, x2, y2, r, color, thickness, DrawLine);
	}


	//-----------------------------------------------------------------
	// カプセルを描画(アンチエイリアス効果付き)
	//-----------------------------------------------------------------
	int DrawCapsuleAA(float x1, float y1, float x2, float y2, float r, unsigned int color, float thickness)
	{
		return DrawCapsuleImpl(x1, y1, x2, y2, r, color, thickness, DrawLineAA);
	}


	//-----------------------------------------------------------------
	// 画像ファイルのメモリへの読みこみ(エラー処理付き)
	//-----------------------------------------------------------------
	int LoadGraphWithErrorHandling(const char* filename)
	{
		int graphHandle = LoadGraph(filename);

		if (graphHandle == -1)
		{
			GameLib::ShowErrorMessage("以下のファイルが見つかりません。\n\"%s\"", filename);
		}

		return graphHandle;
	}

} // namespace GameLib