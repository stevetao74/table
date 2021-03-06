﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: 坐骑升级表.xlsm SHEET: Sheet1 KEY: quality + level

#pragma once
#pragma pack(1)
struct HorseUpgradeDataBase
{
	DWORD getUniqueID() const { return usage_id_hash(quality, level); }

	WORD level; // 等级
	WORD quality; // 坐骑品质
	DWORD pdam; // 物理攻击增加
	DWORD mdam; // 魔法攻击增加
	DWORD pdef; // 物理防御增加
	DWORD mdef; // 魔法防御增加
	DWORD maxhp; // 生命增加
	DWORD materialid; // 升级消耗材料
	DWORD materiallevel; // 升级消耗材料等级
	DWORD materialnum; // 升级消耗材料数量
	DWORD cost; // 升级消耗手续费
	DWORD costtype; // 升级消耗手续费类型
};
#pragma pack()

#if false
namespace table
{
	// 坐骑升级表
	struct zHorseUpgradeDataBaseEntry : public zEntry
	{
		WORD level; // 等级
		WORD quality; // 坐骑品质
		DWORD pdam; // 物理攻击增加
		DWORD mdam; // 魔法攻击增加
		DWORD pdef; // 物理防御增加
		DWORD mdef; // 魔法防御增加
		DWORD maxhp; // 生命增加
		DWORD materialid; // 升级消耗材料
		DWORD materiallevel; // 升级消耗材料等级
		DWORD materialnum; // 升级消耗材料数量
		DWORD cost; // 升级消耗手续费
		DWORD costtype; // 升级消耗手续费类型

		virtual const char* getClassName() const { return "坐骑升级表"; }
		static const char* getFileName() { return "HorseUpgradeDataBase.tbl"; }
		void fill(const HorseUpgradeDataBase& base)
		{
			this->id = base.getUniqueID();

			this->level = base.level;
			this->quality = base.quality;
			this->pdam = base.pdam;
			this->mdam = base.mdam;
			this->pdef = base.pdef;
			this->mdef = base.mdef;
			this->maxhp = base.maxhp;
			this->materialid = base.materialid;
			this->materiallevel = base.materiallevel;
			this->materialnum = base.materialnum;
			this->cost = base.cost;
			this->costtype = base.costtype;
		}
		void reset()
		{
			this->level = 0;
			this->quality = 0;
			this->pdam = 0;
			this->mdam = 0;
			this->pdef = 0;
			this->mdef = 0;
			this->maxhp = 0;
			this->materialid = 0;
			this->materiallevel = 0;
			this->materialnum = 0;
			this->cost = 0;
			this->costtype = 0;
		}
	};
	typedef zDataBM<zHorseUpgradeDataBaseEntry, HorseUpgradeDataBase> HorseUpgradeDataBaseManager;
}
#endif

