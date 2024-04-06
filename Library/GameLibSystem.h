/**
 * @file   GameLibSystem.h
 *
 * @brief  �V�X�e���֘A�̃w�b�_�t�@�C��
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// ���d�C���N���[�h�̖h�~ ====================================================
#pragma once




// �w�b�_�t�@�C���̓ǂݍ��� ==================================================
#include <WinUser.h>
 



// �萔�̒�` =================================================================
namespace GameLib
{
	static const unsigned int EXIT_KEY = KEY_INPUT_ESCAPE;    ///< �����I���L�[

} // namespace GameLib




// �֐��̒�` =================================================================
namespace GameLib
{
	/**
	 * @brief �Q�[���̏I��
	 *
	 * @param �Ȃ�
	 *
	 * @return �Ȃ�
	 */
	inline void ExitGame()
	{
		PostQuitMessage(0);
	}

} // namespace GameLib
