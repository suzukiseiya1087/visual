/**
 * @file   GameLibAlgorithm.h
 *
 * @brief  �A���S���Y���֘A�̃w�b�_�t�@�C��
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// ���d�C���N���[�h�̖h�~ =====================================================
#pragma once




// �w�b�_�t�@�C���̓ǂݍ��� ===================================================
#include <algorithm>
#include <cassert>




// �֐��̒�` =================================================================
namespace GameLib
{
	/**
	 * @brief �w�肳�ꂽ�l�������`����͈͓̔��Ɏ��߂�
	 *
	 * @param[in] value �Ώۂ̒l
	 * @param[in] lower ����
	 * @param[in] upper ���
	 *
	 * @retval lower value �̒l�� lower ��菬�����ꍇ 
	 * @retval upper value �̒l�� upper ���傫���ꍇ
	 * @retval value ��L�ȊO�̏ꍇ
	 * 
	 * @attention lower �̒l�� upper �̒l���傫���Ȃ��Ă͂Ȃ�Ȃ�
	 */
	template <typename T>
	constexpr const T& Clamp(const T& value, const T& lower, const T& upper)
	{
		assert(lower <= upper && "�w�肳�ꂽ���E�������ł��B");

		return std::min(std::max(value, lower), upper);
	}

} // namespace GameLib