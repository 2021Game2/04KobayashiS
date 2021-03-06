#ifndef CSCENEGAME_H
#define CSCENEGAME_H
#include "CScene.h"
#include "CXPlayer.h"
#include "CXEnemy.h"
#include "CBillBoard2.h"
#include "CSound.h"

/*
ゲームのシーン
*/
class CSceneGame : public CScene {
	CSound mJump;
	CBillBoard2 mBillBoard;
	CModel mBackGround;
public:
	//キャラクタのインスタンス
	CXPlayer mPlayer;
	//敵のインスタンス
	CXEnemy mEnemy;

	~CSceneGame();
	//初期化処理のオーバーライド
	void Init();
	//更新処理のオーバーライド
	void Update();

};

#endif
