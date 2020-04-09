#include "Tree.h"

Tree::Tree(int x_passed, int y_passed, float *CameraX, float *CameraY, CSDL_Setup* csdl_setup)
{
	x = x_passed;
	y = y_passed;

	Trunk = new Sprite(csdl_setup->GetRenderer(),"res/data/environment/trunk.png", x, y, 43, 145, CameraX, CameraY, CollisionRect(0,0,43,145));
	Crown = new Sprite(csdl_setup->GetRenderer(),"res/data/environment/crown.png", x-72, y-115, 183, 165, CameraX, CameraY, CollisionRect(0,0,0,0));
}

Tree::~Tree()
{
	delete Trunk;
	delete Crown;
}

int Tree::GetX()
{
	return x;
}

int Tree::GetY()
{
	return y;
}

void Tree::DrawCrown()
{
	Crown->Draw();
}

void Tree::DrawTrunk()
{
	Trunk->Draw();
}
