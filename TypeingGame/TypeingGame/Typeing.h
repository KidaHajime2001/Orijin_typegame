#pragma once
#include"MyHeader.h"
class Typeing
{
public:
	Typeing();
	~Typeing();

private:
	struct CONVDATA
	{
		// ローマ仮名に変換する前の文字列
		string BaseString;

		// 入力するアルファベットの文字列
		vector<string> InputChars;
	};
	
	CONVDATA StringConvTable[160];
};
