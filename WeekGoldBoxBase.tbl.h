﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: 每周金砖返利表.xlsm SHEET: Sheet1 KEY: week

#pragma once
#pragma pack(1)
struct WeekGoldBoxBase
{
	DWORD getUniqueID() const { return usage_id_hash(week); }

	DWORD week; // 周数
	DWORD firstgold; // 首充返利
	DWORD thisgold; // 本周返利
	DWORD getgold; // 已返利总计
	DWORD totalgold; // 返利总计
};
#pragma pack()

#if false
namespace table
{
	// 每周金砖返利表
	struct zWeekGoldBoxBaseEntry : public zEntry
	{
		DWORD week; // 周数
		DWORD firstgold; // 首充返利
		DWORD thisgold; // 本周返利
		DWORD getgold; // 已返利总计
		DWORD totalgold; // 返利总计

		virtual const char* getClassName() const { return "每周金砖返利表"; }
		static const char* getFileName() { return "WeekGoldBoxBase.tbl"; }
		void fill(const WeekGoldBoxBase& base)
		{
			this->id = base.getUniqueID();

			this->week = base.week;
			this->firstgold = base.firstgold;
			this->thisgold = base.thisgold;
			this->getgold = base.getgold;
			this->totalgold = base.totalgold;
		}
		void reset()
		{
			this->week = 0;
			this->firstgold = 0;
			this->thisgold = 0;
			this->getgold = 0;
			this->totalgold = 0;
		}
	};
	typedef zDataBM<zWeekGoldBoxBaseEntry, WeekGoldBoxBase> WeekGoldBoxBaseManager;
}
#endif
