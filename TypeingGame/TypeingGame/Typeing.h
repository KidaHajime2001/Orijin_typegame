#pragma once
#include"MyHeader.h"
class Typeing
{
public:
	Typeing();
	~Typeing();
	string CreateCharROMA(string japaneseHIRAGANA);
	void Update();
private:
	struct CONVDATA
	{
		// ローマ仮名に変換する前の文字列
		const char* BaseString;

		// 入力するアルファベットの文字列
		const char* InputChars[10];
	};
	
	CONVDATA StringConvTable[160]=
	{
		{  "あ",           { "a"   } },        {"い",  {"i"       }},       {"う",  {"u"      }},       {"え",   {"e"  }},   {"お",   {"o"  } },
		{ "か",           { "ka"  } },        {"き",  {"ki"      }},       {"く",  {"ku"     }},       {"け",   {"ke" }},   {"こ",   {"ko" }},
		{ "さ",           { "sa"  } },        {"し",  {"si","shi"}},       {"す",  {"su"     }},       {"せ",   {"se" }},   {"そ",   {"so" }},
		{ "た",           { "ta"  } },        {"ち",  {"ti","chi"}},       {"つ",  {"tu"     }},       {"て",   {"te" }},   {"と",   {"to" }},
		{ "な",           { "na"  } },        {"に",  {"ni"      }},       {"ぬ",  {"nu"     }},       {"ね",   {"ne" }},   {"の",   {"no" }},
		{ "は",           { "ha"  } },        {"ひ",  {"hi"      }},       {"ふ",  {"hu","fu"}},       {"へ",   {"he" }},   {"ほ",   {"ho" }},
		{ "ま",           { "ma"  } },        {"み",  {"mi"      }},       {"む",  {"mu"     }},       {"め",   {"me" }},   {"も",   {"mo" }},
		{ "や",           { "ya"  } },        {"ゆ",  {"yu"      }},       {"よ",  {"yo"     }},
		{ "ら",           { "ra"  } },        {"り",  {"ri"      }},       {"る",  {"ru"     }},       {"れ",   {"re" }},   {"ろ",   {"ro" }},
		{ "わ",           { "wa"  } },        {"を",  {"wo"      }},       {"ん",  {"nn"     }},

		{ "が",           { "ga"  } },        {"ぎ",  {"gi"      }},       {"ぐ",  {"gu"     }},       {"げ",   {"ge" }},   {"ご",   {"go" }},
		{ "ざ",           { "za"  } },        {"じ",  {"zi","ji" }},       {"ず",  {"zu"     }},       {"ぜ",   {"ze" }},   {"ぞ",   {"zo" }},
		{ "だ",           { "da"  } },        {"ぢ",  {"di"      }},       {"づ",  {"du"     }},       {"で",   {"de" }},   {"ど",   {"do" }},
		{ "ば",           { "ba"  } },        {"び",  {"bi"      }},       {"ぶ",  {"bu"     }},       {"べ",   {"be" }},   {"ぼ",   {"bo" }},
		{ "ぱ",           { "pa"  } },        {"ぴ",  {"pi"      }},       {"ぷ",  {"pu"     }},       {"ぺ",   {"pe" }},   {"ぽ",   {"po" }},

		{ "ぁ",           { "la"  } },        {"ぃ",  {"li"      }},       {"ぅ",  {"lu"     }},       {"ぇ",   {"le" }},   {"ぉ",   {"lo" }},
		{ "ゃ",           { "lya" } },        {"ゅ",  {"lyu"     }},       {"ょ",  {"lyo"    }},
		{ "っ",           { "ltu" } },        {"ゎ",  {"lwa"     }},
		{ "くぅ",         { "Qa"  } },        {"くぃ",{"qi"      }},       {"くぇ",{"qe"     }},       {"くぉ", {"qo" }},
		{ "うぁ",         { "wha" } },        {"うぃ",{"wi"      }},       {"うぇ",{"we"     }},
		{ "でゃ",         { "dha" } },        {"でぃ",{"dhi"     }},       {"でゅ",{"dhu"    }},       {"でぇ" ,{"dhe"}},   {"でょ", {"dho"}},
		{ "が",           { "dha" } },        {"ぎ",  {"dhi"     }},       {"ぐ",  {"dhu"    }},       {"げ",   {"dhe"}},   {"ご",   {"dho"}},

		{"きゃ",{"kya"}},{"きゅ",{"kyu"}},{"きょ",{"kyo"}},
		{"ぎゃ",{"gya"}},{"ぎゅ",{"gyu"}},{"ぎょ",{"gyo"}},
		{"しゃ",{"sya"}},{"しゅ",{"syu"}},{"しょ",{"syo"}},{"しぇ",{"sye"}},
		{"じゃ",{"jya"}},{"じゅ",{"jyu"}},{"じょ",{"jyo"}},{"じぇ",{"jye"}},
		{"ちゃ",{"tya"}},{"ちゅ",{"tyu"}},{"ちょ",{"tyo"}},{"ちぇ",{"tye"}},
		{"ぢゃ",{"dya"}},{"ぢゅ",{"dyu"}},{"ぢょ",{"dyo"}},
		{"にゃ",{"nya"}},{"にゅ",{"nyu"}},{"にょ",{"nyo"}},
		{"ひゃ",{"hya"}},{"ひゅ",{"hyu"}},{"ひょ",{"hyo"}},
		{"びゃ",{"bya"}},{"びゅ",{"byu"}},{"びょ",{"byo"}},
		{"ぴゃ",{"pya"}},{"ぴゅ",{"pyu"}},{"ぴょ",{"pyo"}},
		{"ふぁ",{"fa"}},{"ふぃ",{"fi"}},{"ふぇ",{"fu"}},{"ふぉ",{"fo"}},
		{"みゃ",{"mya"}},{"みゅ",{"myu"}},{"みょ",{"myo"}},
		{"りゃ",{"rya"}},{"りゅ",{"ryu"}},{"りょ",{"ryo"}},

		{"ぁ",{"la"}},{"ぃ",{"li"}},{"ぅ",{"lu"}},{"ぇ",{"le"}},{"ぉ",{"lo"}},
		{"ゃ",{"rya"}},{"ゅ",{"ryu"}},{"ょ",{"ryo"}},
		{"ゎ",{"lwa"}},
		{"うぁ",{"wha"}},{"うぃ",{"wi"}},{"うぇ",{"we"}},{"うぉ",{"who"}},
		{"ぁ",{"la"}},{"ぃ",{"li"}},{"ぅ",{"lu"}},{"ぇ",{"le"}},{"ぉ",{"lo"}},
		{"ゃ",{"rya"}},{"ゅ",{"ryu"}},{"ょ",{"ryo"}},

		{NULL,{NULL}},
	};;
};
