#include"MyHeader.h"

Typeing::Typeing()
{
	mk = new My_Key;
	for (int i = 0; i < 200; i++)
	{
		if (StringConvTable[i].BaseString!=nullptr)
		{
			type_My_Data[i].BaseString = StringConvTable[i].BaseString;
			for (int j = 0; j < 10; j++)
			{

				if (StringConvTable[i].InputChars[j] != nullptr)
				{
					type_My_Data[i].InputChars.push_back(StringConvTable[i].InputChars[j]);

				}
			}
		}
		
		
	}
	

	
}

Typeing::~Typeing()
{
	delete mk;
}


void Typeing::Update()
{
	//	// –¼‘O‚Ì“ü—Í
	//KeyInputSingleCharString(0, 56, 1, Name, FALSE);
	char tmp=mk->My_putKeyCheck();
	if (tmp!=0)
	{
		InPut += tmp;
	}

}

void Typeing::Draw()
{
	
	string ROMAJI=CreateRomaJI("‚Í‚É‚í");
	printfDx(ROMAJI.c_str());
	printfDx("\n");
	printfDx(InPut.c_str());

	
}

string Typeing::CreateRomaJI(string num)
{

	string tmp = {' ','\n',};
	string SUM;
	for (int i = 0; i < num.size(); i+=2)
	{
		tmp[0] = num[i];
		tmp[1] = num[i+1];
		for (int i = 0; i < 200; i++)
		{
			if (tmp == type_My_Data[i].BaseString)
			{
				printfDx(type_My_Data[i].BaseString.c_str());
				SUM += type_My_Data[i].InputChars[0];
				break;
			}
		}
	}

	
	

	//for (int j = 0; j < num.size(); j+=2)
	//{
	//	for (int i = 0; i < 200; i++)
	//	{
	//		if ()
	//		{

	//		}
	//	}
	//}
	
	return SUM;
}



