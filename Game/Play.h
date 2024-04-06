/**
 * @file  Play.h
 *
 * @brief  ゲーム全体に関するヘッダファイル
 *
 * @author 制作者名
 *
 * @date   日付
 */

// 多重インクルードの防止 =====================================================
#pragma once
#include"Game/Player.h"



// クラスの定義 ===============================================================
/**
  * @brief ゲーム
  */
class Play
{
//	クラス定数の宣言
public:
	static const char* TITLE;    //	ゲームタイトル

	Player m_player;

//	データメンバの宣言
private:
	



//	メンバ関数の宣言
public:
	//	コンストラクタ
	Play();

	//	デストラクタ
	~Play();

//	操作
public:
	//	初期化処理
	void Initialize();

	//	更新処理
	void Update();

	//	描画処理
	void Render();

	//	終了処理
	void Finalize();

	void Position();
};
