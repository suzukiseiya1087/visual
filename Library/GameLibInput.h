/**
 * @file   GameLibInput.h
 *
 * @brief  ���͊֘A�̃w�b�_�t�@�C��
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// ���d�C���N���[�h�̖h�~ =====================================================
#pragma once




// �w�b�_�t�@�C���̓ǂݍ��� ===================================================
#include <DxLib.h>




// �N���X�̒�` ===============================================================
namespace GameLib
{
	/**
	  * @brief �W���C�p�b�h
	  */
	class Joypad final
	{
		// �f�[�^�����o�̐錾 ---------------------------------------------
		private:
			int m_inputType;            ///< �W���C�p�b�h�̎��ʎq

			int m_currentInputState;    ///< ���݂̓��̓f�o�C�X�̏�� 
			int m_lastInputState;       ///< �O��̓��̓f�o�C�X�̏��



		// �����o�֐��̐錾 -----------------------------------------------
		/// @name �R���X�g���N�^�^�f�X�g���N�^
		/// @{
		public:
			/**
			 * @brief �f�t�H���g�R���X�g���N�^
			 *
			 * @param[in] inputType �W���C�p�b�h�̎��ʎq (�f�t�H���g�l : DX_INPUT_KEY_PAD1)
			 */
			Joypad(int inputType = DX_INPUT_KEY_PAD1);


			/**
			 * @brief �f�X�g���N�^
			 */
			~Joypad() = default;
		/// @}


		/// @name ����
		/// @{
		public:
			/**
			 * @brief ���͏�Ԃ̍X�V
			 *
			 * @param �Ȃ�
			 *
			 * @return �Ȃ�
			 */
			void Update();


			/**
			 * @brief �w�肳�ꂽ�{�^����������Ă��邩�ǂ����𔻒f
			 *
			 * @param[in] button ���肵�����{�^���̓��̓}�X�N
			 *
			 * @retval true  �w�肳�ꂽ�{�^����������Ă���ꍇ
			 * @retval false ����ȊO�̏ꍇ
			 */
			bool IsButtonDown(int button);


			/**
			 * @brief �w�肳�ꂽ�{�^����������Ă��Ȃ����ǂ����𔻒f
			 *
			 * @param[in] button ���肵�����{�^���̓��̓}�X�N
			 *
			 * @retval true  �w�肳�ꂽ�{�^����������Ă��Ȃ��ꍇ
			 * @retval false ����ȊO�̏ꍇ
			 */
			bool IsButtonUp(int button);


			/**
			 * @brief �w�肳�ꂽ�{�^���������ꂽ���ǂ����𔻒f
			 *
			 * @param[in] button ���肵�����{�^���̓��̓}�X�N
			 *
			 * @retval true  �w�肳�ꂽ�L�[�������ꂽ�ꍇ
			 * @retval false ����ȊO�̏ꍇ
			 */
			bool IsButtonPressed(int button);


			/**
			 * @brief �w�肳�ꂽ�{�^���������ꂽ���ǂ����𔻒f
			 *
			 * @param[in] button ���肵�����{�^���̓��̓}�X�N
			 *
			 * @retval true  �w�肳�ꂽ�L�[�������ꂽ�ꍇ
			 * @retval false ����ȊO�̏ꍇ
			 */
			bool IsButtonReleased(int button);
		/// @}
	};

} // namespace GameLib