/**
 * @file   Player.h
 *
 * @brief  �Q�[���S�̂Ɋւ���w�b�_�t�@�C��
 *
 * @author ����Җ�
 *
 * @date   ���t
 */

// ���d�C���N���[�h�̖h�~ =====================================================
#pragma once




// �N���X�̒�` ===============================================================
/**
  * @brief �Q�[��
  */
class Player
{
//	�N���X�萔�̐錾
public:
	int m_PositionX;
	int m_PositionY;


//	�f�[�^�����o�̐錾
private:
	


//	�����o�֐��̐錾
public:
	//	�R���X�g���N�^
	Player();

	//	�f�X�g���N�^
	~Player();

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
