/**
 * @file   GameLibErrorHandling.h
 *
 * @brief  エラー処理関連のヘッダファイル
 *
 * @author S.Takaki
 *
 * @date   2023/04/11
 */

// 多重インクルードの防止 =====================================================
#pragma once




// ヘッダファイルの読み込み ===================================================
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>

#include <WinUser.h>




// 関数の定義 =================================================================
namespace GameLib
{
	/**
	 * @brief エラーメッセージ表示後、ゲームを終了
	 *
	 * @param[in] errorMessage エラーメッセージ
	 *
	 * @return なし
	 */
	inline void ShowErrorMessage(const std::string& errorMessage)
	{
		MessageBox(NULL, errorMessage.c_str(), NULL, MB_OK | MB_ICONEXCLAMATION);

		PostQuitMessage(0);
	}



	/**
	 * @brief エラーメッセージ表示後、ゲームを終了
	 *
	 * @param[in] format 書式
	 * @param[in] args   書式用引数(可変引数)
	 *
	 * @return なし
	 */
	template <typename ... Args>
	void ShowErrorMessage(const char* format, const Args& ... args)
	{
		int textLength = std::snprintf(nullptr, 0, format, args ...);
		if (textLength < 0)
		{
			throw std::runtime_error("String Formatting Error.");
		}

		size_t bufferSize = textLength + sizeof('\0');
		std::unique_ptr<char[]> buffer = std::make_unique<char[]>(bufferSize);
		std::snprintf(buffer.get(), bufferSize, format, args ...);

		ShowErrorMessage(std::string{ buffer.get()});
	}

} // namespace GameLib
