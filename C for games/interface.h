#pragma once
#pragma comment(lib, "Msimg32.lib")
#include <graphics.h> // ͼ�ο��ͷ�ļ�
#include <conio.h>    // ����̨���������ͷ�ļ�
#include <string>     // �ַ��������ͷ�ļ�
#include"easyx.h"
#include <windows.h>



/*
	�ý�����Ҫʵ����Ϸ�ĳ�ʼ����
*/


/*
	�˴�ʵ��һ������ͼƬ͸���ĺ���
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
	loadimage(&img_background, _T("image_game/������/background.jpg"));
	//loadimage(&img_background,"C:/���汣��λ��/image_game/������/background.jpg");
	putimage(0, 0, &img_background);

	IMAGE img_char_back;
	loadimage(&img_char_back, "image_game/������png/_0002s_0000s_0001_ͼ��-75-����.png",100,100,true);
	putimage_alpha(10, 34, &img_char_back);

	IMAGE img_char;
	loadimage(&img_char, "image_game/������png/_0004s_0001_ͼ��-64.png", 0, 0, true);
	putimage_alpha(2, 2, &img_char);

	
}