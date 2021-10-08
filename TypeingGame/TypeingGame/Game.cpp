#include"MyHeader.h"

Game::Game()
{
	type = new Typeing;
}

Game::~Game()
{
}

void Game::Draw()
{
	clsDx();
	printfDx("GAME");
	type->Update();
}

SceneBase* Game::Update()
{

	
	//‘JˆÚ
	if (CheckHitKey(KEY_INPUT_F1))
	{
		return new Title;
	}
	return this;
}

