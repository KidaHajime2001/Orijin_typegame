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
	if (CheckHitKey(KEY_INPUT_SPACE))
	{
		return new Title;
	}
	return this;
}

