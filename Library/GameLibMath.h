/**
 * @file   GameLibMath.h
 *
 * @brief  DxLib�̐��w�֘A�ւ̒ǉ��@�\�̃w�b�_�t�@�C��
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// ���d�C���N���[�h�̖h�~ =====================================================
#pragma once




// �w�b�_�t�@�C���̓ǂݍ��� ===================================================
#include <cmath>
#include <limits>




// �^�̒�` ===================================================================
namespace GameLib
{
	/**
	 * @brief �x�N�g��(2����)
	 */
	struct Vector2D
	{
		float x;    ///< X����
		float y;    ///< Y����
	};


	/**
	 * @brief �T�C�Y(2����)
	 */
	struct Size2D
	{
		float width;     ///< ��
		float height;    ///< ����
	};


	/**
	 * @brief ��`(2����)
	 */
	struct Rect2D
	{
		float x;         ///< ���㒸�_��X���W
		float y;         ///< ���㒸�_��Y���W
		float width;     ///< ��
		float height;    ///< ����
	};


	/**
	 * @brief �͈�(2����)
	 */
	struct Bounds2D
	{
		float left;      ///< ���[
		float top;       ///< ��[
		float right;     ///< �E�[
		float bottom;    ///< ���[
	};


	// <��{�`��> ----------------------------------------------------------
	/**
	 * @brief �_(2����)
	 */
	using Point2D = Vector2D;


	/**
	 * @brief ����(2����)
	 */
	struct Line2D
	{
		Point2D  p;    ///< �����̒ʂ�_
		Vector2D v;    ///< �����x�N�g��
	};


	/**
	 * @brief ����(2����)
	 */
	struct Segment2D
	{
		Point2D start;    ///< �n�_
		Point2D end;      ///< �I�_
	};


	/**
	 * @brief �~(2����)
	 */
	struct Circle2D
	{
		Point2D center;    ///< ���S���W
		float   radius;    ///< ���a
	};


	/**
	 * @brief �O�p�`(2����)
	 */
	struct Triangle2D
	{
		Point2D vertices[3];    ///< 3���_
	};


	/**
	 * @brief ���`(2����)
	 */
	struct Box2D
	{
		Point2D center;    ///< ���S���W
		Size2D  size;      ///< �T�C�Y
	};


	/**
	 * @brief �J�v�Z��(2����)
	 */
	struct Capsule2D
	{
		Segment2D segment;    ///< ����
		float     radius;     ///< ���a
	};

} // namespace GameLib




// �֐��̒�` =================================================================
namespace GameLib
{
/// @name �p�x�֘A
/// @{
	/**
	 * @brief [�x] ���� [���W�A��] �ւ̒P�ʕϊ�
	 *
	 * @param[in] degrees �p�x[�x]
	 *
	 * @return �ϊ���̊p�x[���W�A��]
	 */
	inline float ToRadians(float degrees)
	{
		return degrees * DX_PI_F / 180.0f;
	}


	/**
	 * @brief [���W�A��] ���� [�x] �ւ̒P�ʕϊ�
	 *
	 * @param[in] radians �p�x[���W�A��]
	 *
	 * @return �ϊ���̊p�x[�x]
	 */
	inline float ToDegrees(float radians)
	{
		return radians * 180.0f / DX_PI_F;
	}
/// @}


/// @name ���l�֘A
/// @{
	/**
	 * @brief ���������_���^�̌덷���l���ɓ��ꂽ��r
	 *
	 * @param[in] a       ��r�Ώ�
	 * @param[in] b       ��r�Ώ�
	 * @param[in] epsilon ���e�덷 (�f�t�H���g�l : std::numeric_limits<float>::epsilon())
	 *
	 * @return �ϊ���̊p�x[�x]
	 */
	inline bool ApproxEquals(float a, float b, float epsilon = std::numeric_limits<float>::epsilon())
	{
		return std::abs(a - b) <= epsilon;
	}
/// @}

} // namespace GameLib