#include"MyHeader.h"

Typeing::Typeing()
{
	string moji_J[160] =
	{
		"��",   "��",    "��",    "��",    "��",
		"��",   "��",    "��",	  "��",    "��",
		"��",   "��",    "��",	  "��",    "��",
		"��",   "��",    "��",	  "��",	   "��",
		"��",   "��",    "��",	  "��",	   "��",
		"��",   "��",	 "��",	  "��",	   "��",
		"��",   "��",	 "��",	  "��",	   "��",
		//45


		"��",   "��",	 "��",			  
		"��",   "��",	 "��",	  "��",	   "��",
		"��",   "��",	 "��",			  
		//11

		"��",   "��",	 "��",	  "��",	   "��",
		"��",   "��",	 "��",	  "��",	   "��",
		"��",   "��",	 "��",	  "��",	   "��",
		"��",   "��",	 "��",	  "��",	   "��",
		"��",   "��",	 "��",	  "��",	   "��",
		//25

		"����",   "����",	 "����",
		"����",   "����",	 "����",
		"����",   "����",	 "����",	 "����",
		"����",   "����",	 "����",	 "����",
		"����",   "����",	 "����",	 "����",
		//18

		"����",   "����",	 "����",
		"�ɂ�",   "�ɂ�",	 "�ɂ�",
		"�Ђ�",   "�Ђ�",	 "�Ђ�",
		"�т�",   "�т�",	 "�т�",
		"�҂�",   "�҂�",	 "�҂�",
		"�ӂ�",   "�ӂ�",	 "�ӂ�",	"�ӂ�",
		"�ӂ�",   "�ӂ�",	 "�ӂ�",
		"�݂�",   "�݂�",	 "�݂�",
		"���",   "���",	 "���",

		"��"
		//29

		"��",   "��",	 "��",	  "��",	   "��",
		"��",   "��",	 "��",
		"��",
		"����",   "����",	 "����",	 "����",
		"����",   "����",	 "��",	  "����",	   "����",
		"�Ă�",   "�ł�",	 "�ł�",
		"�[",
		//32
	};
	for (int i = 0; i < 160; i++)
	{
		StringConvTable[i].BaseString = moji_J[i];
	}
	

	/*{  
		{  ��",           { "a"   } },        {"��",  {"i"       }},       {"��",  {"u"      }},       {"��",   {"e"  }},   {"��",   {"o"  } },
		{ "��",           { "ka"  } },        {"��",  {"ki"      }},       {"��",  {"ku"     }},       {"��",   {"ke" }},   {"��",   {"ko" }},
		{ "��",           { "sa"  } },        {"��",  {"si","shi"}},       {"��",  {"su"     }},       {"��",   {"se" }},   {"��",   {"so" }},
		{ "��",           { "ta"  } },        {"��",  {"ti","chi"}},       {"��",  {"tu"     }},       {"��",   {"te" }},   {"��",   {"to" }},
		{ "��",           { "na"  } },        {"��",  {"ni"      }},       {"��",  {"nu"     }},       {"��",   {"ne" }},   {"��",   {"no" }},
		{ "��",           { "ha"  } },        {"��",  {"hi"      }},       {"��",  {"hu","fu"}},       {"��",   {"he" }},   {"��",   {"ho" }},
		{ "��",           { "ma"  } },        {"��",  {"mi"      }},       {"��",  {"mu"     }},       {"��",   {"me" }},   {"��",   {"mo" }},
		{ "��",           { "ya"  } },        {"��",  {"yu"      }},       {"��",  {"yo"     }},	     		   	    	     		   
		{ "��",           { "ra"  } },        {"��",  {"ri"      }},       {"��",  {"ru"     }},       {"��",   {"re" }},   {"��",   {"ro" }},
		{ "��",           { "wa"  } },        {"��",  {"wo"      }},       {"��",  {"nn"     }},	     		   	   		     		   
		{ "��",           { "la"  } },        {"��",  {"li"      }},       {"��",  {"lu"     }},       {"��",   {"le" }},   {"��",   {"lo" }},
		{ "��",           { "lya" } },        {"��",  {"lyu"     }},       {"��",  {"lyo"    }},	   
		{ "��",           { "ltu" } },        {"��",  {"lwa"     }},     							    
		{ "����",         { "Qa"  } },        {"����",{"qi"      }},       {"����",{"qe"     }},       {"����", {"qo" }},
		{ "����",         { "wha" } },        {"����",{"wi"      }},       {"����",{"we"     }},	    
		{ "�ł�",         { "dha" } },        {"�ł�",{"dhi"     }},       {"�ł�",{"dhu"    }},       {"�ł�" ,{"dhe"}},   {"�ł�", {"dho"}},
		{ "��",           { "dha" } },        {"��",  {"dhi"     }},       {"��",  {"dhu"    }},       {"��",   {"dhe"}},   {"��",   {"dho"}},

		
		{NULL,{NULL}},
	};*/
}

Typeing::~Typeing()
{
}