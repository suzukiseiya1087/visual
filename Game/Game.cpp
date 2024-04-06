/**
 * @file   Game.cpp
 *
 * @brief  ゲーム全体に関するソースファイル
 *
 * @author 制作者名
 *
 * @date   日付
 */
#include "pch.h"
//	ヘッダファイルの読み込み ===================================================
#include "Game.h"
#include "Screen.h"



//	クラス定数の定義 ===========================================================
const char* Game::TITLE = "24GS 前期集中 ベースプロジェクト";    // ゲームタイトル


//	メンバ関数の定義 ===========================================================
/**
 * @brief デフォルトコンストラクタ
 *
 * @param[in] なし
 */
Game::Game()
	: m_timer{}
{

}



/**
 * @brief デストラクタ
 */
Game::~Game()
{

}



/**
 * @brief 初期化処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Game::Initialize()
{
	m_play.Initialize();
}




/**
 * @brief 更新処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Game::Update()
{
	//	ゲームの更新処理を書いていく
	
	m_play.Update();
	m_timer.Update();
}




/**
 * @brief 描画処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Game::Render()
{
	//	ゲームの描画処理を書いていく

	m_play.Render();
	DrawFormatString(10, 10, Colors::LIME, "%.5f", m_timer.GetFrameDeltaTime());
	DrawFormatString(10, 30, Colors::LIME, "%.5f", m_timer.GetFrameRate());
}




/**
 * @brief 終了処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Game::Finalize()
{

}
