/**
 * @file  Play.h
 *
 * @brief  �Q�[���S�̂Ɋւ���w�b�_�t�@�C��
 *
 * @author ����Җ�
 *
 * @date   ���t
 */

// ���d�C���N���[�h�̖h�~ =====================================================
#pragma once
#include"Game/Player.h"



// �N���X�̒�` ===============================================================
/**
  * @brief �Q�[��
  */
class Play
{
//	�N���X�萔�̐錾
public:
	static const char* TITLE;    //	�Q�[���^�C�g��

	Player m_player;

//	�f�[�^�����o�̐錾
private:
	



//	�����o�֐��̐錾
public:
	//	�R���X�g���N�^
	Play();

	//	�f�X�g���N�^
	~Play();

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

	void Position();
};
