#include <stdio.h>
int main(int argc, char *argv[])
{
	char ch[200];             //�ַ�����
	int i = 0;
	int word = 0;//������ 
	int str =0;//�ַ��� 
	FILE *fp;
	fp = fopen("D:\\file.txt", "r");
	if (fp == NULL) 
	{
		printf("û�м�⵽�ļ�\n");
	}
	ch[i]=fgetc(fp);
	while (ch[i]!= EOF) //��ȡ���ݵ����飬ֱ���ļ���β
	{
		i++;
		if (ch[i] == ' ' || ch[i] == ',' || ch[i] == '\n')
			word++;
	}
	fclose(fp);//�ر��ļ�
	if (strcmp(argv[1], "-c") == 0)
	{
		printf("�ַ�����%d", i);
	}
	else if(strcmp(argv[1], "-w") == 0)
	{
		printf("������:%d\n", word+1);
	}
	return 0;
}

