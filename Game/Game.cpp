/**
 * @file   Game.cpp
 *
 * @brief  �Q�[���S�̂Ɋւ���\�[�X�t�@�C��
 *
 * @author ����Җ�
 *
 * @date   ���t
 */
#include "pch.h"
//	�w�b�_�t�@�C���̓ǂݍ��� ===================================================
#include "Game.h"
#include "Screen.h"



//	�N���X�萔�̒�` ===========================================================
const char* Game::TITLE = "24GS �O���W�� �x�[�X�v���W�F�N�g";    // �Q�[���^�C�g��


//	�����o�֐��̒�` ===========================================================
/**
 * @brief �f�t�H���g�R���X�g���N�^
 *
 * @param[in] �Ȃ�
 */
Game::Game()
	: m_timer{}
{

}



/**
 * @brief �f�X�g���N�^
 */
Game::~Game()
{

}



/**
 * @brief ����������
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Game::Initialize()
{
	m_play.Initialize();
}




/**
 * @brief �X�V����
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Game::Update()
{
	//	�Q�[���̍X�V�����������Ă���
	
	m_play.Update();
	m_timer.Update();
}




/**
 * @brief �`�揈��
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Game::Render()
{
	//	�Q�[���̕`�揈���������Ă���

	m_play.Render();
	DrawFormatString(10, 10, Colors::LIME, "%.5f", m_timer.GetFrameDeltaTime());
	DrawFormatString(10, 30, Colors::LIME, "%.5f", m_timer.GetFrameRate());
}




/**
 * @brief �I������
 *
 * @param[in] �Ȃ�
 *
 * @return �Ȃ�
 */
void Game::Finalize()
{

}
