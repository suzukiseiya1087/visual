/**
 * @file   DxLibExtension.h
 *
 * @brief  DxLibへの追加機能のヘッダファイル
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// 多重インクルードの防止 =====================================================
#pragma once




// 型の定義 ===================================================================
namespace DxLib
{
/// @name ハンドル
/// @{
	using HFONT  = int;    ///< フォントハンドル
	using HGRAPH = int;    ///< グラフィックハンドル
	using HMODEL = int;    ///< モデルハンドル
	using HMOVIE = int;    ///< ムービーグラフィックハンドル
	using HNET   = int;    ///< ネットワークハンドル
	using HSOUND = int;    ///< サウンドハンドル
/// @}


/// @name 色
/// @{
	using ColorCode = unsigned int;    ///< 色コード
/// @}

} // namespace DxLib




// 定数の定義 =================================================================
namespace DxLib
{
	namespace Colors
	{
	/// @name 標準カラー(16色)
	/// @{
		static const ColorCode BLACK   = 0xFF000000;    ///< 黒
		static const ColorCode BLUE    = 0xFF0000FF;    ///< 青
		static const ColorCode CYAN    = 0xFF00FFFF;    ///< シアン
		static const ColorCode GRAY    = 0xFF808080;    ///< 灰色
		static const ColorCode GREEN   = 0xFF008000;    ///< 緑色
		static const ColorCode LIME    = 0xFF00FF00;    ///< ライム
		static const ColorCode MAGENTA = 0xFFFF00FF;    ///< マゼンタ
		static const ColorCode MAROON  = 0xFF800000;    ///< マルーン
		static const ColorCode NAVY    = 0xFF000080;    ///< ネイビー
		static const ColorCode OLIVE   = 0xFF808000;    ///< オリーブ
		static const ColorCode PURPLE  = 0xFF800080;    ///< 紫
		static const ColorCode RED     = 0xFFFF0000;    ///< 赤
		static const ColorCode SILVER  = 0xFFC0C0C0;    ///< 銀色
		static const ColorCode TEAL    = 0xFF008080;    ///< ティール
		static const ColorCode WHITE   = 0xFFFFFFFF;    ///< 白
		static const ColorCode YELLOW  = 0xFFFFFF00;    ///< 黄色
	/// @}

	} // namespace Colors

} // namespace DxLib




// 関数の宣言 =================================================================
namespace DxLib
{
/// @name 図形描画関連
/// @{
	/**
	 * @brief 破線を描画
	 *
	 * @param[in] x1        描画する線の起点座標(X座標)
	 * @param[in] y1        描画する線の起点座標(Y座標)
	 * @param[in] x2        描画する線の終点座標(X座標)
	 * @param[in] y2        描画する線の終点座標(Y座標)
	 * @param[in] color     描く線の色
	 * @param[in] length    破線の長さおよび間隔の幅
	 * @param[in] thickness 線の太さ
	 *
	 * @retval  0 成功
	 * @retval -1 エラー発生
	 */
	int DrawDashedLine(int x1, int y1, int x2, int y2, unsigned int color, int length, int thickness = 1);


	/**
	 * @brief 破線を描画(アンチエイリアス効果付き)
	 *
	 * @param[in] x1        描画する線の起点座標(X座標)
	 * @param[in] y1        描画する線の起点座標(Y座標)
	 * @param[in] x2        描画する線の終点座標(X座標)
	 * @param[in] y2        描画する線の終点座標(Y座標)
	 * @param[in] color     描く線の色
	 * @param[in] length    破線の長さおよび間隔の幅
	 * @param[in] thickness 線の太さ
	 *
	 * @retval  0 成功
	 * @retval -1 エラー発生
	 */
	int DrawDashedLineAA(float x1, float y1, float x2, float y2, unsigned int color, float length, float thickness = 1.0f);


	/**
	 * @brief カプセルを描画
	 *
	 * @param[in] x1        一方の円の中心座標(X座標)
	 * @param[in] y1        一方の円の中心座標(Y座標)
	 * @param[in] x2        もう一方の円の中心座標(X座標)
	 * @param[in] y2        もう一方の円の中心座標(Y座標)
	 * @param[in] color     描く線の色
	 * @param[in] thickness 線の太さ
	 *
	 * @retval  0 成功
	 * @retval -1 エラー発生
	 */
	int DrawCapsule(int x1, int y1, int x2, int y2, int r, unsigned int color, int thickness = 1);


	/**
	 * @brief カプセルを描画(アンチエイリアス効果付き)
	 *
	 * @param[in] x1        一方の円の中心座標(X座標)
	 * @param[in] y1        一方の円の中心座標(Y座標)
	 * @param[in] x2        もう一方の円の中心座標(X座標)
	 * @param[in] y2        もう一方の円の中心座標(Y座標)
	 * @param[in] color     描く線の色
	 * @param[in] thickness 線の太さ
	 *
	 * @retval  0 成功
	 * @retval -1 エラー発生
	 */
	int DrawCapsuleAA(float x1, float y1, float x2, float y2, float r, unsigned int color, float thickness = 1.0f);
/// @}


/// @name グラフィックデータ制御関連
/// @{
	/**
	 * @brief 画像ファイルのメモリへの読みこみ(エラー処理付き)
	 *
	 * @param[in] filename 読み込み対象の画像ファイルの名前
	 *
	 * @retval -1以外 グラフィックのハンドル
	 * @retval -1     エラー発生
	 */
	int LoadGraphWithErrorHandling(const char* filename);
/// @}

} // namespace DxLib
