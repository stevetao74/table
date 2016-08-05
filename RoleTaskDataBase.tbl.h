﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
// FILE: Task表格.xlsm SHEET: Sheet1 KEY: id

#pragma once
#pragma pack(1)
struct RoleTaskDataBase
{
	DWORD getUniqueID() const { return usage_id_hash(id); }

	DWORD id; // 任务编号
	char name[32]; // 名称
	DWORD type; // 类型
	DWORD minlevel; // 最低等级
	DWORD maxlevel; // 最高等级
	DWORD pretask; // 前置任务
	DWORD begnpc; // 接任务NPC
	DWORD endnpc; // 交任务NPC
	DWORD operate; // 步骤总数
	DWORD state; // 初始步骤数量
	char exp[32]; // 奖励经验
	char awarditem[512]; // 奖励道具
	char needitem[512]; // 任务道具
	char desc[1024]; // 任务描述
	char accepttext[1024]; // 接任务文本
	char finishtext[1024]; // 交任务文本
	char prompttext[512]; // 不可交任务文本
	DWORD money; // 奖励银币
	DWORD moneyticket; // 奖励硬币
	char tip[512]; // 任务提示
	DWORD daynum; // 每日次数
	char materials[128]; // 收集材料
	DWORD challengetask; // 是否检索
	DWORD directfinish; // 快捷交付
	DWORD huntertask; // 狩猎任务
	DWORD goldticket; // 奖励赠点
	DWORD growthmedal; // 成长勋章
	DWORD expmedal; // 历练勋章
	DWORD warmedal; // 战争勋章
	char task[1024]; // 任务内容
	DWORD helpgoto; // 瞬间到达接取
	DWORD helpcommit; // 瞬间直接完成
	DWORD judgebyclient; // 客户端判定任务
};
#pragma pack()

#if false
namespace table
{
	// Task表格
	struct zRoleTaskDataBaseEntry : public zEntry
	{
		DWORD id; // 任务编号
		char name[32]; // 名称
		DWORD type; // 类型
		DWORD minlevel; // 最低等级
		DWORD maxlevel; // 最高等级
		DWORD pretask; // 前置任务
		DWORD begnpc; // 接任务NPC
		DWORD endnpc; // 交任务NPC
		DWORD operate; // 步骤总数
		DWORD state; // 初始步骤数量
		char exp[32]; // 奖励经验
		char awarditem[512]; // 奖励道具
		char needitem[512]; // 任务道具
		char desc[1024]; // 任务描述
		char accepttext[1024]; // 接任务文本
		char finishtext[1024]; // 交任务文本
		char prompttext[512]; // 不可交任务文本
		DWORD money; // 奖励银币
		DWORD moneyticket; // 奖励硬币
		char tip[512]; // 任务提示
		DWORD daynum; // 每日次数
		char materials[128]; // 收集材料
		DWORD challengetask; // 是否检索
		DWORD directfinish; // 快捷交付
		DWORD huntertask; // 狩猎任务
		DWORD goldticket; // 奖励赠点
		DWORD growthmedal; // 成长勋章
		DWORD expmedal; // 历练勋章
		DWORD warmedal; // 战争勋章
		char task[1024]; // 任务内容
		DWORD helpgoto; // 瞬间到达接取
		DWORD helpcommit; // 瞬间直接完成
		DWORD judgebyclient; // 客户端判定任务

		virtual const char* getClassName() const { return "Task表格"; }
		static const char* getFileName() { return "RoleTaskDataBase.tbl"; }
		void fill(const RoleTaskDataBase& base)
		{
			this->id = base.getUniqueID();

			this->id = base.id;
			strncpy(this->name, base.name, 32);
			this->type = base.type;
			this->minlevel = base.minlevel;
			this->maxlevel = base.maxlevel;
			this->pretask = base.pretask;
			this->begnpc = base.begnpc;
			this->endnpc = base.endnpc;
			this->operate = base.operate;
			this->state = base.state;
			strncpy(this->exp, base.exp, 32);
			strncpy(this->awarditem, base.awarditem, 512);
			strncpy(this->needitem, base.needitem, 512);
			strncpy(this->desc, base.desc, 1024);
			strncpy(this->accepttext, base.accepttext, 1024);
			strncpy(this->finishtext, base.finishtext, 1024);
			strncpy(this->prompttext, base.prompttext, 512);
			this->money = base.money;
			this->moneyticket = base.moneyticket;
			strncpy(this->tip, base.tip, 512);
			this->daynum = base.daynum;
			strncpy(this->materials, base.materials, 128);
			this->challengetask = base.challengetask;
			this->directfinish = base.directfinish;
			this->huntertask = base.huntertask;
			this->goldticket = base.goldticket;
			this->growthmedal = base.growthmedal;
			this->expmedal = base.expmedal;
			this->warmedal = base.warmedal;
			strncpy(this->task, base.task, 1024);
			this->helpgoto = base.helpgoto;
			this->helpcommit = base.helpcommit;
			this->judgebyclient = base.judgebyclient;
		}
		void reset()
		{
			this->id = 0;
			this->name[0] = '\0';
			this->type = 0;
			this->minlevel = 0;
			this->maxlevel = 0;
			this->pretask = 0;
			this->begnpc = 0;
			this->endnpc = 0;
			this->operate = 0;
			this->state = 0;
			this->exp[0] = '\0';
			this->awarditem[0] = '\0';
			this->needitem[0] = '\0';
			this->desc[0] = '\0';
			this->accepttext[0] = '\0';
			this->finishtext[0] = '\0';
			this->prompttext[0] = '\0';
			this->money = 0;
			this->moneyticket = 0;
			this->tip[0] = '\0';
			this->daynum = 0;
			this->materials[0] = '\0';
			this->challengetask = 0;
			this->directfinish = 0;
			this->huntertask = 0;
			this->goldticket = 0;
			this->growthmedal = 0;
			this->expmedal = 0;
			this->warmedal = 0;
			this->task[0] = '\0';
			this->helpgoto = 0;
			this->helpcommit = 0;
			this->judgebyclient = 0;
		}
	};
	typedef zDataBM<zRoleTaskDataBaseEntry, RoleTaskDataBase> RoleTaskDataBaseManager;
}
#endif
