/**
 * @file   GameLibTime.cpp
 *
 * @brief  DxLib�̎��Ԋ֘A�ւ̒ǉ��@�\�̃\�[�X�t�@�C��
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// �w�b�_�t�@�C���̓ǂݍ��� ===================================================
#include "GameLibTime.h"

#include <DxLib.h>




// �֐��̒�` =================================================================
namespace GameLib
{
	//*********************************************************************
	// 
	// �t���[���^�C�}�[
	// 
	//*********************************************************************

	//-----------------------------------------------------------------
	// �f�t�H���g�R���X�g���N�^
	//-----------------------------------------------------------------
	FrameTimer::FrameTimer()
		: m_lastTime{ 0 }
		, m_currentTime{ GetNowHiPerformanceCount() }
		, m_startTime{ 0 }
		, m_frameCount{ 0 }
		, m_frameDeltaTime{ 0.0f }
		, m_frameRate{ 0.0f }
	{
	}



	//-----------------------------------------------------------------
	// �X�V
	//-----------------------------------------------------------------
	void FrameTimer::Update()
	{
		// ���Ԃ̌v��
		m_lastTime    = m_currentTime;
		m_currentTime = GetNowHiPerformanceCount();


		// �t���[���̌o�ߎ��Ԃ̍X�V
		m_frameDeltaTime = static_cast<float>(m_currentTime - m_lastTime) / ONE_SECOND;


		// 1�b���Ƀt���[�����[�g�̍X�V
		m_frameCount++;
		if ((m_currentTime - m_startTime) > ONE_SECOND)
		{
			m_frameRate = static_cast<float>(m_frameCount * ONE_SECOND) / (m_currentTime - m_startTime);
			m_startTime = m_currentTime;
			m_frameCount = 0;
		}
	}

} // namespace GameLib
