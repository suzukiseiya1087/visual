/**
 * @file   Player.cpp
 *
 * @brief  ゲーム全体に関するソースファイル
 *
 * @author 制作者名
 *
 * @date   日付
 */
#include "pch.h"
//	ヘッダファイルの読み込み ===================================================
#include "Player.h"
#include "Screen.h"



//	クラス定数の定義 ===========================================================



//	メンバ関数の定義 ===========================================================
/**
 * @brief デフォルトコンストラクタ
 *
 * @param[in] なし
 */
Player::Player()
{

}



/**
 * @brief デストラクタ
 */
Player::~Player()
{

}



/**
 * @brief 初期化処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Player::Initialize()
{
	Position();
}




/**
 * @brief 更新処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Player::Update()
{
	//	ゲームの更新処理を書いていく
	


}




/**
 * @brief 描画処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Player::Render()
{
	//	ゲームの描画処理を書いていく
	DrawGraph(m_PositionX, m_PositionY, 10, TRUE);


}




/**
 * @brief 終了処理
 *
 * @param[in] なし
 *
 * @return なし
 */
void Player::Finalize()
{

}

void Player::Position()
{
	m_PositionX = Screen::CENTER_X;
	m_PositionY = Screen::CENTER_Y;
}
