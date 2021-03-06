#pragma once
#include "GlobalVarialbe.h"

//Section [RepLayWaveLay] [RepLayListLay]

//lzy 2014.8.11
typedef struct JobInfo  
{
	//name
	CString strJobTitle;  //标题文字
	CString strJobID;    //任务编号
	CString strContractor; //承包商
	CString strCustomer;  //用户
	CString strSorFileName; //文件名
	CString strTestDate;   //测试日期
	CString strOperator;   //操作员
	CString strComment;   //注释
	CString strCommentTitle; //注释标题文字
	CString strEventTitle;  //事件标题文字
	
	//value
	CString JobID;    //任务编号
	CString Contractor; //承包商
	CString Customer;  //用户
	CString SorFileName; //文件名
	CString TestDate;   //测试日期
	CString Operator;   //操作员
};

//lzy 2014.8.11
typedef struct ConfigInfo
{
	//name
	CString strTitle;  //标题文字
	CString strOrigin;    //起点
	CString strOriCable;   //起点光缆号
	CString strOriFiber;   //起点光纤号
	CString strOriColor;   //起点关纤颜色
	CString strEnd;     //终点
	CString strEndCable;   //终点光缆号
	CString strEndFiber;   //终点光纤号
	CString strEndColor;   //终点颜色
	CString strOriLocation;//起点位置
	CString strEndLocation;   //终点位置
	CString strWavelength;   //测量波长
	CString strIndex;    //测量时用的折射率
	CString strPulse;    //脉宽
	CString strRange;    //距离
	CString strAverage;  //平均的次数
	CString strResolution;  //解析度
	CString strBackScatter;  //背向散射系数
	CString strLossThreshold;  //衰减门限
	CString strRefThreshold;  //反射门限
	CString strEndThreshold;  //光纤末端门限
	
	//value
	CString OriCable;   //起点光缆号
	CString OriFiber;   //起点光纤号
	CString OriColor;   //起点关纤颜色
	CString EndCable;   //终点光缆号
	CString EndFiber;   //终点光纤号
	CString EndColor;   //终点颜色
	CString OriLocation;//起点位置
	CString EndLocation;   //终点位置
	CString Wavelength;   //测量波长
	CString Index;    //测量时用的折射率
	CString Pulse;    //脉宽
	CString Range;    //距离
	CString Average;  //平均的次数
	CString Resolution;  //解析度
	CString BackScatter;  //背向散射系数
	CString LossThreshold;  //衰减门限
	CString RefThreshold;  //反射门限
	CString EndThreshold;  //光纤末端门限

};

//lzy 2014.8.12
typedef struct TraceInfo
{
	CString strTitle;  //轨迹线标题
	
	CString LocationA;   //A标位置
	CString LossA;    //A标处损耗
	CString LocationB;  //B标位置
	CString LossB;  //B标处损耗
	CString DistanceAB;  //AB位置间隔
	CString LossAB;  //AB损耗差
	CString SlopeAB;  //AB段损耗斜率
};

typedef struct Setting
{
	CString titleSetting;  //属性页对话框标题文字
	CString tabContent;  //属性页打印内容按钮文字
	CString tabConfig;  //属性页配置按钮文字
	CString tabJob;    //属性页任务按钮文字

	CString btnOK;
	CString btnCancel;
	CString btnClear; //清除按钮上的文字
	//content
	CString contentSelect;  //内容选择
	CString contentLogo;   
	CString contentJob;
	CString contentConfig;
	CString contentComment;
	CString contentTrace;
	CString contentEvent;

	//configuration
	CString cfgLink;
	CString cfgOrigin;
	CString cfgEnd;
	CString cfgLocation;
	CString cfgCable;
	CString cfgFiber;
	CString cfgColor;
	
	CString cfgMeasurement;
	CString cfgWave;
	CString cfgPulse;
	CString cfgRange;
	CString cfgLossTh;
	CString cfgRefTh;
	CString cfgEngTh;
	CString cfgBackscatter;
	CString cfgIndex;

	//job
	CString jobInfo;
	CString jobID;
	CString jobContractor;
	CString jobCustomer;
	CString jobFile;
	CString jobDate;
	CString jobComment;
	

};


typedef struct ReportConfig 
{	
	ReportConfig()
	{
		//GrandwayLogo = _T("OTDR v2.01 © Grandway");  //lzy2014.8.11//cwcq2015.12.15
		GrandwayLogo.Format(_T("OTDR v%s"), VERSION_SOFTWARE);  ////wcq2015.12,15
		EventColumn = 0;
		EventCount = 0;
	}
	
	//Step1
	CString Print;  //是否打印,波形打印，总表不打印 1:print,0:not
	CString Direction;  //打印方向 direction 0:h,1:v
	CString WaveList;  //0:Layout1,1:Layout2,2:Layout3,3:Layout4,4:Layout5
	CString ListFormat;  //0:A-1,1:A-2,2:A-3,3:B-1
	//Step2
	CString Title; //标题
	CString Item1; //项目1
	CString Item1Val; //项目1值
	CString Item2; //项目2
	CString Item2Val; //项目2值
	CString Item3; //项目3
	CString Item3Val; //项目3值
	CString Item4; //项目4
	CString Item4Val; //项目4值
	CString Item5; //项目5
	CString Item5Val; //项目5值
	CString Item6; //项目6
	CString Item6Val; //项目6值
	CString Item7; //项目7
	CString Item7Val; //项目7值
	CString Item8; //项目8
	CString Item8Val; //项目8值
	CString Item9; //项目9
	CString Item9Val; //项目9值
	CString Item10; //项目10
	CString Item10Val; //项目10值
	CString Item11; //项目11
	CString Item11Val; //项目11值
	CString Item12; //项目12
	CString Item12Val; //项目12值
	CString Combox1;
	CString Combox2;
	CString Combox3;
	CString Combox4;
	CString Combox5;
	CString Combox6;
	CString Combox7;
	CString Combox8;
	CString Combox9;
	CString Combox10;
	CString Combox11;
	CString Combox12;
	CString Combox13;
	CString Combox14;
	CString Combox15;
	CString Combox16;
	//Step3[RepLayWaveLay]
	CString NumberOfWaveLength; //wl 0:1,1:2,2:3
	CString MeasureDir; //measure direction 0:单向,1:双向
	CString OutputSort; //波形输出顺序//output order 0:w,1:f
	CString EventSort;//事件顺序//event order 0:c,1:f(add whole),2:e
	CString UpDownSort;//双向波形顺序//2 order 0:ul abs,1:ul
	CString FileFormat;//
	CString NumberOfFiber;
	CString StartOfFiberNo;
	//Step3[[RepLayWaveHeader]
	CString FirstTime;
	CString Step3Item1;
	CString Step3Item2;
	CString Step3Item3;
	CString Step3Item4;
	CString Step3Item5;
	CString Step3Item6;
	CString Step3Edit1;
	CString Step3Edit2;
	CString Step3Edit3;
	CString Step3Edit4;
	CString Step3Edit5;
	CString Step3Edit6;
	CString Step3ComboBox1;
	CString Step3ComboBox2;
	CString Step3ComboBox3;
	CString Step3ComboBox4;
	CString Step3ComboBox5;
	CString Step3ComboBox6;
	CString Step3ComboBox7;
	CString Step3ComboBox8;
	CString Step3ComboBox9;
	CString Step3ComboBox10;
	//Step3 Rpt[RepLayListTotalList] [RepLayListLay]
	CString Add;//(0:non/1:add)
	CString TotalLossOnOff; //1:on,0:off
	CString AddAbnormality; //0:Cheched,1:non
	//Step4
	CString Folder1;
	CString Folder2;
	CString SetOptionSort; //文件列表顺序0:asc, 1:desc
	CString BeAdapted; //文件选择：应用
	CString WLIndex;//波长0:850nm,1:1300nm,2:1310nm,3:1550nm,4:1650

	//新报表所添加的内容lzy 2014.8.11
	CString GrandwayLogo;   //光维logo, 即OTDR v2.01 Grandway
    JobInfo Job;   //任务信息
    ConfigInfo Configuration; //配置信息
	CString Comment;         //注释
	TraceInfo Trace;   //曲线参数
	int EventColumn;    //事件列表列数
	int EventCount; //事件行数
};


