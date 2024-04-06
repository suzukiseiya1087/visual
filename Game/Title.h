/**
 * @file   Title.h
 *
 * @brief  ゲーム全体に関するヘッダファイル
 *
 * @author 制作者名
 *
 * @date   日付
 */

// 多重インクルードの防止 =====================================================
#pragma once




// クラスの定義 ===============================================================
/**
  * @brief ゲーム
  */
class Title
{
//	クラス定数の宣言
public:
	


//	データメンバの宣言
private:
	


//	メンバ関数の宣言
public:
	//	コンストラクタ
	Title();

	//	デストラクタ
	~Title();

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
};
