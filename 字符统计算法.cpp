/***************************************************************
�㷨˼�룺
	���һ����������54λ���ֱ�����Сд��ĸ��ǰ26λͳ�ƴ�д����
26λͳ��Сд����������Ϊ0�����Ӷ��������
***************************************************************/
#include<stdio.h>
int char_count(char str[],int arr[])
{	//�ַ�ͳ��
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
{	//������
	int i;
	for( i=0;i<26;i++ )
	{	//�����д��ĸ���
		if( arr[i]!=0 )
			printf("%c--%d \n",i+65,arr[i]);
	}
	for( i=26;i<54;i++ )
	{	//���Сд��ĸ���
		if( arr[i]!=0 )
			printf("%c--%d \n",i+97-26,arr[i]);
	}
	return 0;
}
int main()
{
	char str[50] = {0};	//�ַ�������
	printf("����һ���ַ���\n");
	gets(str);			//�����ַ���

	int arr[54] = {0};	//������

	char_count(str,arr);	//ͳ��
	output_result(arr);	//������
	return 0;
}