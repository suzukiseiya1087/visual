/**
 * @file   DxLibExtension.h
 *
 * @brief  DxLib�ւ̒ǉ��@�\�̃w�b�_�t�@�C��
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// ���d�C���N���[�h�̖h�~ =====================================================
#pragma once




// �^�̒�` ===================================================================
namespace DxLib
{
/// @name �n���h��
/// @{
	using HFONT  = int;    ///< �t�H���g�n���h��
	using HGRAPH = int;    ///< �O���t�B�b�N�n���h��
	using HMODEL = int;    ///< ���f���n���h��
	using HMOVIE = int;    ///< ���[�r�[�O���t�B�b�N�n���h��
	using HNET   = int;    ///< �l�b�g���[�N�n���h��
	using HSOUND = int;    ///< �T�E���h�n���h��
/// @}


/// @name �F
/// @{
	using ColorCode = unsigned int;    ///< �F�R�[�h
/// @}

} // namespace DxLib




// �萔�̒�` =================================================================
namespace DxLib
{
	namespace Colors
	{
	/// @name �W���J���[(16�F)
	/// @{
		static const ColorCode BLACK   = 0xFF000000;    ///< ��
		static const ColorCode BLUE    = 0xFF0000FF;    ///< ��
		static const ColorCode CYAN    = 0xFF00FFFF;    ///< �V�A��
		static const ColorCode GRAY    = 0xFF808080;    ///< �D�F
		static const ColorCode GREEN   = 0xFF008000;    ///< �ΐF
		static const ColorCode LIME    = 0xFF00FF00;    ///< ���C��
		static const ColorCode MAGENTA = 0xFFFF00FF;    ///< �}�[���^
		static const ColorCode MAROON  = 0xFF800000;    ///< �}���[��
		static const ColorCode NAVY    = 0xFF000080;    ///< �l�C�r�[
		static const ColorCode OLIVE   = 0xFF808000;    ///< �I���[�u
		static const ColorCode PURPLE  = 0xFF800080;    ///< ��
		static const ColorCode RED     = 0xFFFF0000;    ///< ��
		static const ColorCode SILVER  = 0xFFC0C0C0;    ///< ��F
		static const ColorCode TEAL    = 0xFF008080;    ///< �e�B�[��
		static const ColorCode WHITE   = 0xFFFFFFFF;    ///< ��
		static const ColorCode YELLOW  = 0xFFFFFF00;    ///< ���F
	/// @}

	} // namespace Colors

} // namespace DxLib




// �֐��̐錾 =================================================================
namespace DxLib
{
/// @name �}�`�`��֘A
/// @{
	/**
	 * @brief �j����`��
	 *
	 * @param[in] x1        �`�悷����̋N�_���W(X���W)
	 * @param[in] y1        �`�悷����̋N�_���W(Y���W)
	 * @param[in] x2        �`�悷����̏I�_���W(X���W)
	 * @param[in] y2        �`�悷����̏I�_���W(Y���W)
	 * @param[in] color     �`�����̐F
	 * @param[in] length    �j���̒�������ъԊu�̕�
	 * @param[in] thickness ���̑���
	 *
	 * @retval  0 ����
	 * @retval -1 �G���[����
	 */
	int DrawDashedLine(int x1, int y1, int x2, int y2, unsigned int color, int length, int thickness = 1);


	/**
	 * @brief �j����`��(�A���`�G�C���A�X���ʕt��)
	 *
	 * @param[in] x1        �`�悷����̋N�_���W(X���W)
	 * @param[in] y1        �`�悷����̋N�_���W(Y���W)
	 * @param[in] x2        �`�悷����̏I�_���W(X���W)
	 * @param[in] y2        �`�悷����̏I�_���W(Y���W)
	 * @param[in] color     �`�����̐F
	 * @param[in] length    �j���̒�������ъԊu�̕�
	 * @param[in] thickness ���̑���
	 *
	 * @retval  0 ����
	 * @retval -1 �G���[����
	 */
	int DrawDashedLineAA(float x1, float y1, float x2, float y2, unsigned int color, float length, float thickness = 1.0f);


	/**
	 * @brief �J�v�Z����`��
	 *
	 * @param[in] x1        ����̉~�̒��S���W(X���W)
	 * @param[in] y1        ����̉~�̒��S���W(Y���W)
	 * @param[in] x2        ��������̉~�̒��S���W(X���W)
	 * @param[in] y2        ��������̉~�̒��S���W(Y���W)
	 * @param[in] color     �`�����̐F
	 * @param[in] thickness ���̑���
	 *
	 * @retval  0 ����
	 * @retval -1 �G���[����
	 */
	int DrawCapsule(int x1, int y1, int x2, int y2, int r, unsigned int color, int thickness = 1);


	/**
	 * @brief �J�v�Z����`��(�A���`�G�C���A�X���ʕt��)
	 *
	 * @param[in] x1        ����̉~�̒��S���W(X���W)
	 * @param[in] y1        ����̉~�̒��S���W(Y���W)
	 * @param[in] x2        ��������̉~�̒��S���W(X���W)
	 * @param[in] y2        ��������̉~�̒��S���W(Y���W)
	 * @param[in] color     �`�����̐F
	 * @param[in] thickness ���̑���
	 *
	 * @retval  0 ����
	 * @retval -1 �G���[����
	 */
	int DrawCapsuleAA(float x1, float y1, float x2, float y2, float r, unsigned int color, float thickness = 1.0f);
/// @}


/// @name �O���t�B�b�N�f�[�^����֘A
/// @{
	/**
	 * @brief �摜�t�@�C���̃������ւ̓ǂ݂���(�G���[�����t��)
	 *
	 * @param[in] filename �ǂݍ��ݑΏۂ̉摜�t�@�C���̖��O
	 *
	 * @retval -1�ȊO �O���t�B�b�N�̃n���h��
	 * @retval -1     �G���[����
	 */
	int LoadGraphWithErrorHandling(const char* filename);
/// @}

} // namespace DxLib
