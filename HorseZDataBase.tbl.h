﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: 坐骑资质表.xlsm SHEET: Sheet1 KEY: level

#pragma once
#pragma pack(1)
struct HorseZDataBase
{
	DWORD getUniqueID() const { return usage_id_hash(level); }

	DWORD level; // 资质等级
	DWORD mintotal; // 总资质下区间
	DWORD maxtotal; // 总资质上区间
	DWORD minone; // 单项最小值
	DWORD maxone; // 单项最大值
	DWORD soulcomposefee; // 骑魂合成费用
	DWORD soulcomposerand; // 骑魂合成胜率
	DWORD horsecomposefee; // 坐骑融合费用
};
#pragma pack()

#if false
namespace table
{
	// 坐骑资质表
	struct zHorseZDataBaseEntry : public zEntry
	{
		DWORD level; // 资质等级
		DWORD mintotal; // 总资质下区间
		DWORD maxtotal; // 总资质上区间
		DWORD minone; // 单项最小值
		DWORD maxone; // 单项最大值
		DWORD soulcomposefee; // 骑魂合成费用
		DWORD soulcomposerand; // 骑魂合成胜率
		DWORD horsecomposefee; // 坐骑融合费用

		virtual const char* getClassName() const { return "坐骑资质表"; }
		static const char* getFileName() { return "HorseZDataBase.tbl"; }
		void fill(const HorseZDataBase& base)
		{
			this->id = base.getUniqueID();

			this->level = base.level;
			this->mintotal = base.mintotal;
			this->maxtotal = base.maxtotal;
			this->minone = base.minone;
			this->maxone = base.maxone;
			this->soulcomposefee = base.soulcomposefee;
			this->soulcomposerand = base.soulcomposerand;
			this->horsecomposefee = base.horsecomposefee;
		}
		void reset()
		{
			this->level = 0;
			this->mintotal = 0;
			this->maxtotal = 0;
			this->minone = 0;
			this->maxone = 0;
			this->soulcomposefee = 0;
			this->soulcomposerand = 0;
			this->horsecomposefee = 0;
		}
	};
	typedef zDataBM<zHorseZDataBaseEntry, HorseZDataBase> HorseZDataBaseManager;
}
#endif
