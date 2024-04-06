/**
 * @file   GameLibAlgorithm.h
 *
 * @brief  アルゴリズム関連のヘッダファイル
 *
 * @author S.Takaki
 *
 * @date   2023/04/12
 */

// 多重インクルードの防止 =====================================================
#pragma once




// ヘッダファイルの読み込み ===================================================
#include <algorithm>
#include <cassert>




// 関数の定義 =================================================================
namespace GameLib
{
	/**
	 * @brief 指定された値を下限～上限の範囲内に収める
	 *
	 * @param[in] value 対象の値
	 * @param[in] lower 下限
	 * @param[in] upper 上限
	 *
	 * @retval lower value の値が lower より小さい場合 
	 * @retval upper value の値が upper より大きい場合
	 * @retval value 上記以外の場合
	 * 
	 * @attention lower の値は upper の値より大きくなってはならない
	 */
	template <typename T>
	constexpr const T& Clamp(const T& value, const T& lower, const T& upper)
	{
		assert(lower <= upper && "指定された境界が無効です。");

		return std::min(std::max(value, lower), upper);
	}

} // namespace GameLib