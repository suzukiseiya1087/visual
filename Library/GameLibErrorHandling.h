/**
 * @file   GameLibErrorHandling.h
 *
 * @brief  �G���[�����֘A�̃w�b�_�t�@�C��
 *
 * @author S.Takaki
 *
 * @date   2023/04/11
 */

// ���d�C���N���[�h�̖h�~ =====================================================
#pragma once




// �w�b�_�t�@�C���̓ǂݍ��� ===================================================
#include <cstdio>
#include <memory>
#include <stdexcept>
#include <string>

#include <WinUser.h>




// �֐��̒�` =================================================================
namespace GameLib
{
	/**
	 * @brief �G���[���b�Z�[�W�\����A�Q�[�����I��
	 *
	 * @param[in] errorMessage �G���[���b�Z�[�W
	 *
	 * @return �Ȃ�
	 */
	inline void ShowErrorMessage(const std::string& errorMessage)
	{
		MessageBox(NULL, errorMessage.c_str(), NULL, MB_OK | MB_ICONEXCLAMATION);

		PostQuitMessage(0);
	}



	/**
	 * @brief �G���[���b�Z�[�W�\����A�Q�[�����I��
	 *
	 * @param[in] format ����
	 * @param[in] args   �����p����(�ψ���)
	 *
	 * @return �Ȃ�
	 */
	template <typename ... Args>
	void ShowErrorMessage(const char* format, const Args& ... args)
	{
		int textLength = std::snprintf(nullptr, 0, format, args ...);
		if (textLength < 0)
		{
			throw std::runtime_error("String Formatting Error.");
		}

		size_t bufferSize = textLength + sizeof('\0');
		std::unique_ptr<char[]> buffer = std::make_unique<char[]>(bufferSize);
		std::snprintf(buffer.get(), bufferSize, format, args ...);

		ShowErrorMessage(std::string{ buffer.get()});
	}

} // namespace GameLib
