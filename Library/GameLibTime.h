/**
 * @file   GameLibTime.h
 *
 * @brief  DxLibの時間関連への追加機能のヘッダファイル
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// 多重インクルードの防止 =====================================================
#pragma once




// クラスの定義 ===============================================================
namespace GameLib
{
	/**
	  * @brief フレームタイマー
	  */
	class FrameTimer final
	{
		// クラス定数の宣言 --------------------------------------------
		private:
			static const int ONE_SECOND = 1000000;    ///< 1秒 (=1,000,000μ秒)



		// データメンバの宣言 --------------------------------------------
		private:
			LONGLONG m_lastTime;          ///< 前回の計測時間
			LONGLONG m_currentTime;       ///< 現在の計測時間
			LONGLONG m_startTime;         ///< フレームレート計測開始時間
			int      m_frameCount;        ///< フレーム数
			float    m_frameDeltaTime;    ///< フレームの経過時間[s]
			float    m_frameRate;         ///< フレームレート[fps]



		// メンバ関数の宣言 -----------------------------------------------
		/// @name コンストラクタ／デストラクタ
		/// @{
		public:
			/**
			 * @brief デフォルトコンストラクタ
			 *
			 * @param なし
			 */
			FrameTimer();


			/**
			 * @brief デストラクタ
			 */
			~FrameTimer() = default;
		/// @}


		/// @name 操作
		/// @{
		public:
			/**
			 * @brief フレームタイマーの更新処理
			 *
			 * @param なし
			 *
			 * @return なし
			 */
			void Update();
		/// @}


		/// @name 設定／取得
		/// @{
		public:
			/**
			 * @brief 直前のフレームからの経過時間の取得
			 *
			 * @param[in] なし
			 *
			 * @return 直前のフレームからの経過時間[s]
			 */
			float GetFrameDeltaTime()
			{
				return m_frameDeltaTime;
			}

			
			/**
			 * @brief フレームレートの取得
			 * 
			 * @param[in] なし
			 * 
			 * @return 現在のフレームレート[fps]
			 */
			float GetFrameRate()
			{
				return m_frameRate;
			}
		/// @}
	};

} // namespace GameLib