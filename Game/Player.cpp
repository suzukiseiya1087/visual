/**
 * @file   Player.cpp
 *
 * @brief  �Q�[���S�̂Ɋւ���\�[�X�t�@�C��
 *
 * @author ����Җ�
 *
 * @date   ���t
 */
#include "pch.h"
//	�w�b�_�t�@�C���̓ǂݍ��� ===================================================
#include "Player.h"
#include "Screen.h"



//	�N���X�萔�̒�` ===========================================================



//	�����o�֐��̒�` ===========================================================
/**
 * @brief �f�t�H���g�R���X�g���N�^
 *
 * @param[in] �Ȃ�
 */
Player::Player()
{

}



/**
 * @brief �f�X�g���N�^
 */
Player::~Player()
{

}



/**
 * @brief ����������
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Player::Initialize()
{
	Position();
}




/**
 * @brief �X�V����
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Player::Update()
{
	//	�Q�[���̍X�V�����������Ă���
	


}




/**
 * @brief �`�揈��
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Player::Render()
{
	//	�Q�[���̕`�揈���������Ă���
	DrawGraph(m_PositionX, m_PositionY, 10, TRUE);


}




/**
 * @brief �I������
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Player::Finalize()
{

}

void Player::Position()
{
	m_PositionX = Screen::CENTER_X;
	m_PositionY = Screen::CENTER_Y;
}
