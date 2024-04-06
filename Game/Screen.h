/**
 * @file   Screen.h
 *
 * @brief  �Q�[����ʂɊւ���w�b�_�t�@�C��
 *
 * @author ����Җ�
 *
 * @date   ���t
 */

//	���d�C���N���[�h�̖h�~ =====================================================
#pragma once




//	�N���X�̒�` ===============================================================
/**
  * @brief ���
  */
class Screen
{
//	�N���X�萔�̐錾
public:
	static const int WIDTH		= 1280;				//	��ʂ̕�[pixel]
	static const int HEIGHT		=  720;				//	��ʂ̍���[pixel]

	static const int TOP		= 0;				//	��ʂ̏�[[pixel]
	static const int BOTTOM		= HEIGHT;			//	��ʂ̉��[[pixel]
	static const int LEFT		= 0;				//	��ʂ̍��[[pixel]
	static const int RIGHT		= WIDTH;			//	��ʂ̉E�[[pixel]

	static const int CENTER_X	= WIDTH  / 2;		//	��ʂ̒���(X���W)[pixel]
	static const int CENTER_Y	= HEIGHT / 2;		//	��ʂ̒���(Y���W)[pixel]
};
