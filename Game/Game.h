/**
 * @file   Game.h
 *
 * @brief  �Q�[���S�̂Ɋւ���w�b�_�t�@�C��
 *
 * @author ����Җ�
 *
 * @date   ���t
 */

// ���d�C���N���[�h�̖h�~ =====================================================
#pragma once

#include"Game/Play.h"


// �N���X�̒�` ===============================================================
/**
  * @brief �Q�[��
  */
class Game
{
//	�N���X�萔�̐錾
public:
	static const char* TITLE;    //	�Q�[���^�C�g��


//	�f�[�^�����o�̐錾
private:
	GameLib::FrameTimer m_timer;

	Play m_play;

//	�����o�֐��̐錾
public:
	//	�R���X�g���N�^
	Game();

	//	�f�X�g���N�^
	~Game();

//	����
public:
	//	����������
	void Initialize();

	//	�X�V����
	void Update();

	//	�`�揈��
	void Render();

	//	�I������
	void Finalize();
};
