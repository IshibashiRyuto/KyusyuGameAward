#include <DxLib.h>

#define ASSERT(X) MessageBox(nullptr, X, X, MB_OK);

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int COLOR_BIT = 16;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, COLOR_BIT);
	ChangeWindowMode(true);
	SetWindowText("KyusyuGameAward_Game");
	if (DxLib_Init() == -1)
	{
		ASSERT("Dxƒ‰ƒCƒuƒ‰ƒŠ‚Ì‰Šú‰»‚É¸”s‚µ‚Ü‚µ‚½");
		return -1;
	}

	DxLib_End();
	return 0;
}