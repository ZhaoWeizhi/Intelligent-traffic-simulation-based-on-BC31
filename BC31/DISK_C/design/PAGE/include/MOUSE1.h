#ifndef __Mouse1_H__
#define __Mouse1_H__

typedef struct
{
	int mouseX;
	int mouseY;
	int mouseS;
	void *buffer;
	int mouseClick;
	int flag;//0为循环态，1为返回态，2为重画态 
} MouseState;

int Max(int a, int b);


int Min(int a, int b);


void MouseInit(MouseState *mouse);//初始化 


void MouseShape(int mouseX, int mouseY, int mouseS);//告知鼠标形状 


void RegsRead(MouseState *mouse);//得到当前鼠标位置 


void NewMouse(MouseState *mouse);//更新鼠标状态 


void SaveBackImage(MouseState *mouse);//保存鼠标背景位图 


void ClearMouse(int originMouseX, int originMouseY, MouseState *mouse);//清除原有鼠标 


void DrawMouse(MouseState *mouse);//画鼠标 


void MouseClick(MouseState *mouse);

#endif
