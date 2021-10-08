#include"MyHeader.h"

Typeing::Typeing()
{

	

	
}

Typeing::~Typeing()
{
}


void Typeing::Update()
{

}

void Typeing::Draw()
{
	string num = { "‚±‚ñ‚É‚¿‚í" };
	string romaji= CreateRomaJI(num);

	printfDx(romaji.c_str());



	/*string num = " ";
	vector<string> num2;
	for (int i = 0; i < 200; i++)
	{
		
		num2.clear();
		if (StringConvTable[i].BaseString!=nullptr)
		{
			num = StringConvTable[i].BaseString;
			printfDx(num.c_str());
			printfDx(":");
			num = StringConvTable[i].InputChars[0];
			printfDx(num.c_str());
		}
		
		
		if (i%10==0)
		{

			printfDx("\n");
		}
		
	}*/
}

string Typeing::CreateRomaJI(const string& num)
{
	string NUMX="a";
	num[0];
	printfDx("\n");
	printfDx(num.c_str());
	printfDx("\n");
	printfDx(NUMX.c_str());
	printfDx("\n");
	//for (int j = 0; j < num.size(); j++)
	//{
	//	

	//	for (int i = 0; i < 200; i++)
	//	{
	//		if (num[j]==StringConvTable->BaseString[i])
	//		{
	//			SUM +=StringConvTable->BaseString[i];
	//		}
	//	}
	//}
	
	return num;
}



