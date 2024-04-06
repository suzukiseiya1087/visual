/**
 * @file   GameLibMath.h
 *
 * @brief  DxLibの数学関連への追加機能のヘッダファイル
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// 多重インクルードの防止 =====================================================
#pragma once




// ヘッダファイルの読み込み ===================================================
#include <cmath>
#include <limits>




// 型の定義 ===================================================================
namespace GameLib
{
	/**
	 * @brief ベクトル(2次元)
	 */
	struct Vector2D
	{
		float x;    ///< X成分
		float y;    ///< Y成分
	};


	/**
	 * @brief サイズ(2次元)
	 */
	struct Size2D
	{
		float width;     ///< 幅
		float height;    ///< 高さ
	};


	/**
	 * @brief 矩形(2次元)
	 */
	struct Rect2D
	{
		float x;         ///< 左上頂点のX座標
		float y;         ///< 左上頂点のY座標
		float width;     ///< 幅
		float height;    ///< 高さ
	};


	/**
	 * @brief 範囲(2次元)
	 */
	struct Bounds2D
	{
		float left;      ///< 左端
		float top;       ///< 上端
		float right;     ///< 右端
		float bottom;    ///< 下端
	};


	// <基本形状> ----------------------------------------------------------
	/**
	 * @brief 点(2次元)
	 */
	using Point2D = Vector2D;


	/**
	 * @brief 直線(2次元)
	 */
	struct Line2D
	{
		Point2D  p;    ///< 直線の通る点
		Vector2D v;    ///< 方向ベクトル
	};


	/**
	 * @brief 線分(2次元)
	 */
	struct Segment2D
	{
		Point2D start;    ///< 始点
		Point2D end;      ///< 終点
	};


	/**
	 * @brief 円(2次元)
	 */
	struct Circle2D
	{
		Point2D center;    ///< 中心座標
		float   radius;    ///< 半径
	};


	/**
	 * @brief 三角形(2次元)
	 */
	struct Triangle2D
	{
		Point2D vertices[3];    ///< 3頂点
	};


	/**
	 * @brief 箱形(2次元)
	 */
	struct Box2D
	{
		Point2D center;    ///< 中心座標
		Size2D  size;      ///< サイズ
	};


	/**
	 * @brief カプセル(2次元)
	 */
	struct Capsule2D
	{
		Segment2D segment;    ///< 線分
		float     radius;     ///< 半径
	};

} // namespace GameLib




// 関数の定義 =================================================================
namespace GameLib
{
/// @name 角度関連
/// @{
	/**
	 * @brief [度] から [ラジアン] への単位変換
	 *
	 * @param[in] degrees 角度[度]
	 *
	 * @return 変換後の角度[ラジアン]
	 */
	inline float ToRadians(float degrees)
	{
		return degrees * DX_PI_F / 180.0f;
	}


	/**
	 * @brief [ラジアン] から [度] への単位変換
	 *
	 * @param[in] radians 角度[ラジアン]
	 *
	 * @return 変換後の角度[度]
	 */
	inline float ToDegrees(float radians)
	{
		return radians * 180.0f / DX_PI_F;
	}
/// @}


/// @name 数値関連
/// @{
	/**
	 * @brief 浮動小数点数型の誤差を考慮に入れた比較
	 *
	 * @param[in] a       比較対象
	 * @param[in] b       比較対象
	 * @param[in] epsilon 許容誤差 (デフォルト値 : std::numeric_limits<float>::epsilon())
	 *
	 * @return 変換後の角度[度]
	 */
	inline bool ApproxEquals(float a, float b, float epsilon = std::numeric_limits<float>::epsilon())
	{
		return std::abs(a - b) <= epsilon;
	}
/// @}

} // namespace GameLib