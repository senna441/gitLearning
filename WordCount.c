#include <stdio.h>
int main(int argc, char *argv[])
{
	char ch[200];             //字符数组
	int i = 0;
	int word = 0;//单词数 
	int str =0;//字符数 
	FILE *fp;
	fp = fopen("D:\\file.txt", "r");
	if (fp == NULL) 
	{
		printf("没有检测到文件\n");
	}
	ch[i]=fgetc(fp);
	while (ch[i]!= EOF) //读取数据到数组，直到文件结尾
	{
		i++;
		if (ch[i] == ' ' || ch[i] == ',' || ch[i] == '\n')
			word++;
	}
	fclose(fp);//关闭文件
	if (strcmp(argv[1], "-c") == 0)
	{
		printf("字符数：%d", i);
	}
	else if(strcmp(argv[1], "-w") == 0)
	{
		printf("单词数:%d\n", word+1);
	}
	return 0;
}

