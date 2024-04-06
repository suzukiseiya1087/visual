/**
 * @file   GameLibInput.cpp
 *
 * @brief  ���͊֘A�̃\�[�X�t�@�C��
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// �w�b�_�t�@�C���̓ǂݍ��� ===================================================
#include "GameLibInput.h"





// �����o�֐��̒�` ===========================================================
namespace GameLib
{
	//*********************************************************************
	// 
	// �W���C�p�b�h
	// 
	//*********************************************************************

	//-----------------------------------------------------------------
	// �f�t�H���g�R���X�g���N�^
	//-----------------------------------------------------------------
	Joypad::Joypad(int inputType)
		: m_inputType{ inputType }
		, m_currentInputState{ 0 }
		, m_lastInputState{ 0 }
	{

	}



	//-----------------------------------------------------------------
	// ���͏�Ԃ̍X�V
	//-----------------------------------------------------------------
	void Joypad::Update()
	{
		// ��Ԃ̗�����ۑ�
		m_lastInputState = m_currentInputState;


		// �Q�[���p�b�h�̌��݂̏�Ԃ��擾
		m_currentInputState = GetJoypadInputState(m_inputType);
	}



	//-----------------------------------------------------------------
	// �w�肳�ꂽ�{�^����������Ă��邩�ǂ����𔻒f
	//-----------------------------------------------------------------
	bool Joypad::IsButtonDown(int button)
	{
		return ((m_currentInputState & button) == button);
	}



	//-----------------------------------------------------------------
	// �w�肳�ꂽ�{�^����������Ă��Ȃ����ǂ����𔻒f
	//-----------------------------------------------------------------
	bool Joypad::IsButtonUp(int button)
	{
		return ((m_currentInputState & button) != button);
	}



	//-----------------------------------------------------------------
	// �w�肳�ꂽ�{�^���������ꂽ���ǂ����𔻒f
	//-----------------------------------------------------------------
	bool Joypad::IsButtonPressed(int button)
	{
		return (((~m_lastInputState & m_currentInputState) & button) == button);
	}



	//-----------------------------------------------------------------
	// �w�肳�ꂽ�{�^���������ꂽ���ǂ����𔻒f
	//-----------------------------------------------------------------
	bool Joypad::IsButtonReleased(int button)
	{
		return (((m_lastInputState & ~m_currentInputState) & button) == button);
	}

} // namespace GameLib