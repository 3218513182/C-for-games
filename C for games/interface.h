#pragma once
#pragma comment(lib, "Msimg32.lib")
#include <graphics.h> // 图形库的头文件
#include <conio.h>    // 控制台输入输出的头文件
#include <string>     // 字符串处理的头文件
#include"easyx.h"
#include <windows.h>



/*
	该界面主要实现游戏的初始界面
*/


/*
	此处实现一个背景图片透明的函数
*/

inline void putimage_alpha(int x, int y, IMAGE* img)
{
	int w = img->getwidth();
	int h = img->getheight();
	AlphaBlend(GetImageHDC(NULL), x, y, w, h,
		GetImageHDC(img), 0, 0, w, h, { AC_SRC_OVER,0,255,AC_SRC_ALPHA });
}

void initial() {

	initgraph(1300, 752);
	IMAGE img_background;
	loadimage(&img_background, _T("image_game/主界面/background.jpg"));
	//loadimage(&img_background,"C:/桌面保存位置/image_game/主界面/background.jpg");
	putimage(0, 0, &img_background);

	IMAGE img_char_back;
	loadimage(&img_char_back, "image_game/主界面png/_0002s_0000s_0001_图层-75-副本.png",100,100,true);
	putimage_alpha(10, 34, &img_char_back);

	IMAGE img_char;
	loadimage(&img_char, "image_game/主界面png/_0004s_0001_图层-64.png", 0, 0, true);
	putimage_alpha(2, 2, &img_char);

	
}