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
		// ���[�}�����ɕϊ�����O�̕�����
		string BaseString;

		// ���͂���A���t�@�x�b�g�̕�����
		vector<string> InputChars;
	};
	
	CONVDATA StringConvTable[160];
};
