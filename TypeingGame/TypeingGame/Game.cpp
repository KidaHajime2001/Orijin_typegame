#include"MyHeader.h"

Game::Game()
{
}

Game::~Game()
{
}

void Game::Draw()
{
	clsDx();
	printfDx("GAME");
}

SceneBase* Game::Update()
{


	//�J��
	if (CheckHitKey(KEY_INPUT_F1))
	{
		return new Title;
	}
	return this;
}

