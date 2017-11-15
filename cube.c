#include<stdio.h>

#ifdef WIN32

#include<windows.h>
#define WR         set_console_color(0x40);printf("  ");set_console_color(7)//"\033[0;31;41m  \033[0m"
#define WB         set_console_color(0x00);printf("  ");set_console_color(7)//"\033[0;34;44m  \033[0m"
#define WO         set_console_color(0x60);printf("  ");set_console_color(7)//"\033[0;35;45m  \033[0m"
#define WG         set_console_color(0xa0);printf("  ");set_console_color(7)//"\033[0;32;42m  \033[0m"
#define WW         set_console_color(0x70);printf("  ");set_console_color(7)//"\033[0;37;47m  \033[0m"
#define WY         set_console_color(0xf0);printf("  ");set_console_color(7)//"\033[0;33;43m  \033[0m"

void set_console_color(unsigned short color_index)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_index);
}

#else 

#define WR         printf("\033[0;31;41m  \033[0m")
#define WB         printf("\033[0;34;44m  \033[0m")
#define WO         printf("\033[0;35;45m  \033[0m")
#define WG         printf("\033[0;32;42m  \033[0m")
#define WW         printf("\033[0;37;47m  \033[0m")
#define WY         printf("\033[0;33;43m  \033[0m")
#endif

void r1(char a[]);			//这几个
void r2(char a[]);			//		是
void r3(char a[]);			//			魔
void u1(char a[]);			//				方
void u2(char a[]);			//					旋
void u3(char a[]);			//						转
void f1(char a[]);			//							的
void f2(char a[]);			//								函
void f3(char a[]);			//									数
void printColor1(char a[]); //画魔方函数
void printColor2(char a[]); //也是画魔方函数
void magicInit(char a[]);	//魔方初始化函数
int judge(char *a);			//判断是否已经还原函数，若还原返回1，否则返回0
void set_console_color(unsigned short color_index);  //设置控制台颜色

int main()
{
	char a[54];
	int count = 0;
	magicInit(a);
	do
	{
		r1(a);
		u1(a);
		u1(a);
		u1(a);
		r1(a);
		r1(a);
		r1(a);
		u1(a);
		f1(a);
		f1(a);
		f1(a);
		f2(a);
		f2(a);
		f3(a);
		f3(a);
		f3(a);
		printColor2(a);
		count ++;
		printf("%d\n",count);
	}
	while(!judge(a)); //循环直到已经还原
	/** printColor2(a); */
	printf("\n");
	return 0;
}

void r1(char a[])
{
	int i,j,k;
	i = a[2];
	j = a[5];
	k = a[8];
	a[2] = a[51];
	a[5] = a[48];
	a[8] = a[45];
	a[51] = a[24];
	a[48] = a[21];
	a[45] = a[18];
	a[24] = a[38];
	a[21] = a[41];
	a[18] = a[44];
	a[38] = i;
	a[41] = j;
	a[44] = k;
	i = a[9];
	j = a[12];
	a[9] = a[15];
	a[12] = a[16];
	a[15] = a[17];
	a[16] = a[14];
	a[17] = a[11];
	a[14] = a[10];
	a[11] = i;
	a[10] = j;
}
void r2(char a[])
{
	int i,j,k;
	i = a[1];
	j = a[4];
	k = a[7];
	a[1] = a[52];
	a[4] = a[49];
	a[7] = a[46];
	a[52] = a[25];
	a[49] = a[22];
	a[46] = a[19];
	a[25] = a[37];
	a[22] = a[40];
	a[19] = a[43];
	a[37] = i;
	a[40] = j;
	a[43] = k;
}
void r3(char a[])
{
	int i,j,k;
	i = a[0];
	j = a[3];
	k = a[6];
	a[0] = a[53];
	a[3] = a[50];
	a[6] = a[47];
	a[53] = a[26];
	a[50] = a[23];
	a[47] = a[20];
	a[26] = a[36];
	a[23] = a[39];
	a[20] = a[42];
	a[36] = i;
	a[39] = j;
	a[42] = k;
	i = a[27];
	j = a[30];
	a[27] = a[29];
	a[30] = a[28];
	a[28] = a[32];
	a[29] = a[35];
	a[32] = a[34];
	a[35] = a[33];
	a[34] = j;
	a[33] = i;
}
void u1(char a[])
{
	int i,j,k;
	i = a[0];
	j = a[1];
	k = a[2];
	a[0] = a[9];
	a[1] = a[10];
	a[2] = a[11];
	a[9] = a[18];
	a[10] = a[19];
	a[11] = a[20];
	a[18] = a[27];
	a[19] = a[28];
	a[20] = a[29];
	a[27] = i;
	a[28] = j;
	a[29] = k;
	i = a[36];
	j = a[39];
	a[39] = a[43];
	a[43] = a[41];
	a[41] = a[37];
	a[37] = j;
	a[36] = a[42];
	a[42] = a[44];
	a[44] = a[38];
	a[38] = i;
}
void u2(char a[])
{
	int i,j,k;
	i = a[3];
	j = a[4];
	k = a[5];
	a[3] = a[12];
	a[4] = a[13];
	a[5] = a[14];
	a[12] = a[21];
	a[13] = a[22];
	a[14] = a[23];
	a[21] = a[30];
	a[22] = a[31];
	a[23] = a[32];
	a[30] = i;
	a[31] = j;
	a[32] = k;
}
void u3(char a[])
{
	int i,j,k;
	i = a[6];
	j = a[7];
	k = a[8];
	a[6] = a[15];
	a[7] = a[16];
	a[8] = a[17];
	a[15] = a[24];
	a[16] = a[25];
	a[17] = a[26];
	a[24] = a[33];
	a[25] = a[34];
	a[26] = a[35];
	a[33] = i;
	a[34] = j;
	a[35] = k;
	i = a[52];
	j = a[53];
	a[52] = a[48];
	a[48] = a[46];
	a[46] = a[50];
	a[50] = i;
	a[53] = a[51];
	a[51] = a[45];
	a[45] = a[47];
	a[47] = j;
}
void f1(char a[])
{
	int i,j,k;
	i = a[42];
	j = a[43];
	k = a[44];
	a[42] = a[35];
	a[43] = a[32];
	a[44] = a[29];
	a[35] = a[51];
	a[32] = a[52];
	a[29] = a[53];
	a[51] = a[9];
	a[52] = a[12];
	a[53] = a[15];
	a[9] = i;
	a[12] = j;
	a[15] = k;
	i = a[0];
	j = a[1];
	a[1] = a[3];
	a[3] = a[7];
	a[7] = a[5];
	a[5] = j;
	a[0] = a[6];
	a[6] = a[8];
	a[8] = a[2];
	a[2] = i;
}
void f2(char a[])
{
	int i,j,k;
	i = a[39];
	j = a[40];
	k = a[41];
	a[39] = a[34];
	a[40] = a[31];
	a[41] = a[28];
	a[34] = a[48];
	a[31] = a[49];
	a[28] = a[50];
	a[48] = a[10];
	a[49] = a[13];
	a[50] = a[16];
	a[10] = i;
	a[13] = j;
	a[16] = k;
}
void f3(char a[])
{
	int i,j,k;
	i = a[36];
	j = a[37];
	k = a[38];
	a[36] = a[33];
	a[37] = a[30];
	a[38] = a[27];
	a[33] = a[45];
	a[30] = a[46];
	a[27] = a[47];
	a[45] = a[11];
	a[46] = a[14];
	a[47] = a[17];
	a[11] = i;
	a[14] = j;
	a[17] = k;
	i = a[18];
	j = a[19];
	a[19] = a[23];
	a[23] = a[25];
	a[25] = a[21];
	a[21] = j;
	a[18] = a[20];
	a[20] = a[26];
	a[26] = a[24];
	a[24] = i;
}
void printColor1(char a[])  //画魔方函数
{
	int i,j,k = 0;
	for(i = 1; i<=6; i++)
	{
		for(j = 1; j<=9; j++)
		{
			switch (a[k])
			{
				case 'r': WR; break;
				case 'b': WB; break;
				case 'o': WO; break;
				case 'g': WG; break;
				case 'w': WW; break;
				case 'y': WY; break;
				default: break;
			}
			k ++;
			if(j%3 == 0)
				printf("\n");
		}
		printf("\n");
	}
	printf("-----------------\n");
}
void printColor2(char a[])    //也是画魔方函数
{
	int i,j,k = 0;
	for(i = 1; i<=3; i++)
	{
		for(j = 1; j<=18; j++)
		{
			switch (a[k])
			{
				case 'r': WR; break;
				case 'b': WB; break;
				case 'o': WO; break;
				case 'g': WG; break;
				case 'w': WW; break;
				case 'y': WY; break;
				default: break;
			}
			if(j%3 == 0)
			{
				printf("  ");
				k +=7;
			}
			else
				k ++;
		}
		if(k == 54)
			k = 3;
		else
			k = 6; 
		printf("\n");
	}
	printf("------------------------------------------------------");
}

void magicInit(char a[])
{
	int i;
	for(i = 0; i<=8; i++)
	{
		a[i] = 'r';
	}
	for(i = 9; i<=17; i++)
	{
		a[i] = 'b';
	}
	for(i = 18; i<=26; i++)
	{
		a[i] = 'o';
	}
	for(i = 27; i<=35; i++)
	{
		a[i] = 'g';
	}
	for(i = 36; i<=44; i++)
	{
		a[i] = 'w';
	}
	for(i = 45; i<=53; i++)
	{
		a[i] = 'y';
	}
}

int judge(char *a)  //判断是否已经还原，若还原返回1，否则返回0
{
	int r = 1,b = 1,o = 1,w = 1;
	while(1)
		{
			if(a[0]==a[1]&&a[0]==a[2]&&a[0]==a[3]&&a[0]==a[4]&&a[0]==a[5]&&a[0]==a[6]&&a[0]==a[7]&&a[0]==a[8])
				r = 1;
			else
			{
				r = 0;
				break;
			}
			if(a[9]==a[10]&&a[9]==a[11]&&a[9]==a[12]&&a[9]==a[13]&&a[9]==a[14]&&a[9]==a[15]&&a[9]==a[16]&&a[9]==a[17])
				b = 1;
			else
			{
				b = 0;
				break;
			}
			if(a[18]==a[19]&&a[18]==a[20]&&a[18]==a[21]&&a[18]==a[22]&&a[18]==a[23]&&a[18]==a[24]&&a[18]==a[25]&&a[18]==a[26])
				o = 1;
			else
			{
				o = 0;
				break;
			}
			if(a[36]==a[37]&&a[36]==a[38]&&a[36]==a[39]&&a[36]==a[40]&&a[36]==a[41]&&a[36]==a[42]&&a[36]==a[43]&&a[36]==a[44])
				w = 1;
			else
			{
				w = 0;
				break;
			}
			break;
		}
		return (r&b&o&w);
}



