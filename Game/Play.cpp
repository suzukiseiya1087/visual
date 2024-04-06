/**
 * @file   Play.cpp
 *
 * @brief  ゲーム全体に関するソースファイル
 *
 * @author 制作者名
 *
 * @date   日付
 */
#include "pch.h"
//	ヘッダファイルの読み込み ===================================================
#include "Play.h"
#include "Screen.h"



//	クラス定数の定義 ===========================================================


//	メンバ関数の定義 ===========================================================
/**
 * @brief デフォルトコンストラクタ
 *
 * @param[in] なし
 */
Play::Play()
	
{

}



/**
 * @brief デストラクタ
 */
Play::~Play()
{

}



/**
 * @brief 初期化処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Play::Initialize()
{
	m_player.Initialize();
}




/**
 * @brief 更新処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Play::Update()
{
	//	ゲームの更新処理を書いていく
	
	m_player.Update();
	
}




/**
 * @brief 描画処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Play::Render()
{
	//	ゲームの描画処理を書いていく

	m_player.Render();
	
}




/**
 * @brief 終了処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Play::Finalize()
{

}

void Play::Position()
{
	
}
