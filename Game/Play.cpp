/**
 * @file   Play.cpp
 *
 * @brief  �Q�[���S�̂Ɋւ���\�[�X�t�@�C��
 *
 * @author ����Җ�
 *
 * @date   ���t
 */
#include "pch.h"
//	�w�b�_�t�@�C���̓ǂݍ��� ===================================================
#include "Play.h"
#include "Screen.h"



//	�N���X�萔�̒�` ===========================================================


//	�����o�֐��̒�` ===========================================================
/**
 * @brief �f�t�H���g�R���X�g���N�^
 *
 * @param[in] �Ȃ�
 */
Play::Play()
	
{

}



/**
 * @brief �f�X�g���N�^
 */
Play::~Play()
{

}



/**
 * @brief ����������
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Play::Initialize()
{
	m_player.Initialize();
}




/**
 * @brief �X�V����
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Play::Update()
{
	//	�Q�[���̍X�V�����������Ă���
	
	m_player.Update();
	
}




/**
 * @brief �`�揈��
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Play::Render()
{
	//	�Q�[���̕`�揈���������Ă���

	m_player.Render();
	
}




/**
 * @brief �I������
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Play::Finalize()
{

}

void Play::Position()
{
	
}
