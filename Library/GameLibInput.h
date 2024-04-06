/**
 * @file   GameLibInput.h
 *
 * @brief  入力関連のヘッダファイル
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// 多重インクルードの防止 =====================================================
#pragma once




// ヘッダファイルの読み込み ===================================================
#include <DxLib.h>




// クラスの定義 ===============================================================
namespace GameLib
{
	/**
	  * @brief ジョイパッド
	  */
	class Joypad final
	{
		// データメンバの宣言 ---------------------------------------------
		private:
			int m_inputType;            ///< ジョイパッドの識別子

			int m_currentInputState;    ///< 現在の入力デバイスの状態 
			int m_lastInputState;       ///< 前回の入力デバイスの状態



		// メンバ関数の宣言 -----------------------------------------------
		/// @name コンストラクタ／デストラクタ
		/// @{
		public:
			/**
			 * @brief デフォルトコンストラクタ
			 *
			 * @param[in] inputType ジョイパッドの識別子 (デフォルト値 : DX_INPUT_KEY_PAD1)
			 */
			Joypad(int inputType = DX_INPUT_KEY_PAD1);


			/**
			 * @brief デストラクタ
			 */
			~Joypad() = default;
		/// @}


		/// @name 操作
		/// @{
		public:
			/**
			 * @brief 入力状態の更新
			 *
			 * @param なし
			 *
			 * @return なし
			 */
			void Update();


			/**
			 * @brief 指定されたボタンが押されているかどうかを判断
			 *
			 * @param[in] button 判定したいボタンの入力マスク
			 *
			 * @retval true  指定されたボタンが押されている場合
			 * @retval false それ以外の場合
			 */
			bool IsButtonDown(int button);


			/**
			 * @brief 指定されたボタンが押されていないかどうかを判断
			 *
			 * @param[in] button 判定したいボタンの入力マスク
			 *
			 * @retval true  指定されたボタンが押されていない場合
			 * @retval false それ以外の場合
			 */
			bool IsButtonUp(int button);


			/**
			 * @brief 指定されたボタンが押されたかどうかを判断
			 *
			 * @param[in] button 判定したいボタンの入力マスク
			 *
			 * @retval true  指定されたキーが押された場合
			 * @retval false それ以外の場合
			 */
			bool IsButtonPressed(int button);


			/**
			 * @brief 指定されたボタンが離されたかどうかを判断
			 *
			 * @param[in] button 判定したいボタンの入力マスク
			 *
			 * @retval true  指定されたキーが離された場合
			 * @retval false それ以外の場合
			 */
			bool IsButtonReleased(int button);
		/// @}
	};

} // namespace GameLib