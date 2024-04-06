/**
 * @file   GameLibSystem.h
 *
 * @brief  システム関連のヘッダファイル
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// 多重インクルードの防止 ====================================================
#pragma once




// ヘッダファイルの読み込み ==================================================
#include <WinUser.h>
 



// 定数の定義 =================================================================
namespace GameLib
{
	static const unsigned int EXIT_KEY = KEY_INPUT_ESCAPE;    ///< 強制終了キー

} // namespace GameLib




// 関数の定義 =================================================================
namespace GameLib
{
	/**
	 * @brief ゲームの終了
	 *
	 * @param なし
	 *
	 * @return なし
	 */
	inline void ExitGame()
	{
		PostQuitMessage(0);
	}

} // namespace GameLib
