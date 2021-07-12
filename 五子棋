#include<graphics.h>
#include<Windows.h>
#include<conio.h>
#include <math.h>
#include<time.h>
#include<mmsystem.h>

int success(int x[15][15])
{
	int m, n,t,u;
	for (m = 0; m < 15; m++)
	{
		for (n = 0; n < 15; n++)
		{
			if (x[m][n] == 1 && x[m][n + 1] == 1 && x[m][n + 2] == 1 && x[m][n + 3] == 1 && x[m][n + 4] == 1)return 1;
			if (x[m][n] == 1 && x[m + 1][n] == 1 && x[m + 2][n] == 1 && x[m + 3][n] == 1 && x[m + 4][n] == 1)return 1;
			if (x[m][n] == 1 && x[m + 1][n + 1] == 1 && x[m + 2][n + 2] == 1 && x[m + 3][n + 3] == 1 && x[m + 4][n + 4] == 1)return 1;
			if (n > 3 && x[m][n] == 1 && x[m + 1][n - 1] == 1 && x[m + 2][n - 2] == 1 && x[m + 3][n - 3] == 1 && x[m + 4][n - 4] == 1)return 1;
		}
		return 0;
	}
	
	for (t = 0; t < 15;t++)
	{
		for (u = 0; u < 15; u++)
		{
			if (x[t][u] == 2 && x[t][u + 1] == 2 && x[t][u + 2] == 2 && x[t][u + 3] == 2 && x[t][u + 4] == 2)return 0;
			if (x[t][u] == 2 && x[t + 1][u] == 2 && x[t + 2][u] == 2 && x[t + 3][u] ==2 && x[t + 4][u] == 2)return 0;
			if (x[t][u] == 2 && x[t + 1][u + 1] == 2 && x[t + 2][u + 2] == 2 && x[t + 3][u + 3] == 2 && x[t + 4][u + 4] == 2)return 0;
			if (u > 3 && x[t][u] == 2 && x[t + 1][u - 1] == 2 && x[t + 2][u - 2] == 2 && x[t + 3][u - 3] == 2 && x[t + 4][u - 4] == 2)return 0;
		}
	}
	
}
int main()
{
	initgraph(400,400);
IMAGE gc;
	loadimage(&gc, _T("棋盘.gif"));
	putimage(0, 0, &gc);
	MOUSEMSG m; 			// 定义鼠标消息
	HWND hwnd;
	hwnd=GetHWnd(); //设置窗口句柄
	int a=1;     
	while (true)
	{m = GetMouseMsg();
		int  j,k,x, y;
	                //标记下棋状态
		j = m.x /25;
		 k= m.y /25;
		 x=j*25;
		 y=k*25;
		 int ak[15][15]={0};
		   if (m.uMsg==WM_LBUTTONDOWN&&a==1)
	{	  
		if(ak[j][k]==0)
         
	{setfillcolor(BLACK);		//黑方棋子
	fillcircle(x, y,10);

    ak[j][k]=1;
    FlushBatchDraw();
	a=2;
    }
		   }
		 
	    else if (m.uMsg==WM_LBUTTONDOWN&&a==2)
	{	   if(ak[j][k]==0)
         
	{
		setfillcolor(WHITE);		//白方棋子
	fillcircle(x, y,10);

    ak[j][k]=2;
    FlushBatchDraw();
    a=1;
    }
		  
		}

		   if(success (ak))
		{
			if(a==1==1)
			{	MessageBoxA(hwnd, "玩家一取得胜利", "游戏结束", MB_OK);
				return 1;
		   }
			else
			{
				MessageBoxA(hwnd, "玩家二取得胜利", "游戏结束", MB_OK);
				return 0;
	        }
	
		   }
	}
	_getch();
	closegraph();
}
