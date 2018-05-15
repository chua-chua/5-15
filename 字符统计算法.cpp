/***************************************************************
算法思想：
	设计一个计数数组54位，分别代表大小写字母，前26位统计大写，后
26位统计小写。最后输出，为0者无视而不输出。
***************************************************************/
#include<stdio.h>
int char_count(char str[],int arr[])
{	//字符统计
	int i = 0;
	while( str[i]!='\0' )
	{
		if( (str[i]>='A' && str[i]<='Z') )
			arr[str[i]-65] ++;
		if( (str[i]>='a' && str[i]<='z') )
			arr[str[i]-97+26] ++;
		i++;
	}
	return 0;
}
int output_result(int arr[])
{	//输出结果
	int i;
	for( i=0;i<26;i++ )
	{	//输出大写字母情况
		if( arr[i]!=0 )
			printf("%c--%d \n",i+65,arr[i]);
	}
	for( i=26;i<54;i++ )
	{	//输出小写字母情况
		if( arr[i]!=0 )
			printf("%c--%d \n",i+97-26,arr[i]);
	}
	return 0;
}
int main()
{
	char str[50] = {0};	//字符串容器
	printf("输入一串字符：\n");
	gets(str);			//输入字符串

	int arr[54] = {0};	//计数器

	char_count(str,arr);	//统计
	output_result(arr);	//输出结果
	return 0;
}