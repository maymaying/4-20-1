#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
/*
int main()
{
	//void x;//��С����ȷ
	//void *x;//ָ���СΪ4�ֽ�

	//int a = 10;
	//void *x= &a;//void * ��������������������������������ã���Ҫ�����ã���Ҫ��void*����ǿת
	//*x;//����

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
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	system("pause");
	return 0;//С��
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
	//signed char b = -1;//�з���λ ��������  
	//unsigned char c = -1;
	//printf("a=%d\nb=%u\nc=%d\n", a, b, c);//a=-1 b=4294967295 c=255  %u�޷������� ռ4���ֽ�


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
		printf("%u\n", i);//��ѭ��
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
	system("pause");//��ѭ��
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