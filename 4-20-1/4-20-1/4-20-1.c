#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
/*
int main()
{
	//void x;//大小不明确
	//void *x;//指针大小为4字节

	//int a = 10;
	//void *x= &a;//void * 可以用来定义变量，但不能用来解引用；若要解引用，就要对void*进行强转
	//*x;//错误

	system("pause");
	return 0;
}
*/


/*
int main()
{
	unsigned int a = 1;
	*(unsigned char*)&a;
	system("pause");
	return 0;
}
*/


/*
int check_sys()
{
	int i = 1;
	return (*(char *)&i);
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	system("pause");
	return 0;//小端
}
*/


/*
int main()
{
	//char a = -1;
	//signed char b = -1;
	//unsigned char c = -1;
	//printf("a=%d\nb=%d\nc=%d\n", a, b, c);//a=-1 b=-1 c=255

	//char a = -1;
	//signed char b = -1;//有符号位 整形提升  
	//unsigned char c = -1;
	//printf("a=%d\nb=%u\nc=%d\n", a, b, c);//a=-1 b=4294967295 c=255  %u无符号整形 占4个字节


	//char a = -128;
	//printf("%u\n", a);//4294967168
	//char a = 128;
	//printf("%u\n", a);//4294967168
	//char a = 128;
	//printf("%d\n", a);//-128

	system("pause");
	return 0;
}
*/


/*
int main()
{
	//int i = -20;
	//unsigned int j = 10;
	//printf("%d\n", i + j);//-10

	unsigned int i;
	for (i = 9; i >= 0; i--)
	{
		printf("%u\n", i);//死循环
	}
	system("pause");
	return 0;
}


unsigned char i = 0;
int main()
{
	for (i = 0; i <= 255; i++)
	{
		printf("hello world\n");
	}
	system("pause");//死循环
	return 0;
}
*/


/*
int main()
{
	char a[1000];
	int i;
	for (i = 0; i<1000; i++)
	{
		a[i] = -1 - i;
	}
	printf("%d\n", strlen(a));//255
	system("pause");
	return 0;
}
*/