#pragma once

#include "SDL_Setup.h"
#include "Sprite.h"

class Loot
{
public:
	Loot(void);
	Loot(string type, int passed_X, int passed_Y, int rewardLevel, CSDL_Setup* passed_SDL_Setup, float *passed_CameraX, float *passed_CameraY);
	~Loot(void);
	void InitChest();
	void DrawChest();
	void OpenChest();
	void CloseChest();
	Sprite* GetLoot();
	void SetPlayerSprite();
	double GetDistanceFromObj(int player_x, int player_y, int obj_x, int obj_y);
	Sprite* GetPlayerSprite();

private:
	bool CHEST_OPEN;
	int gold;
	int x;
	int y;
	int rewardLevel;
	Sprite* chest;
	CSDL_Setup* csdl_setup;
	Sprite* player;
	double distance;
	float *CameraX;
	float *CameraY;


};

