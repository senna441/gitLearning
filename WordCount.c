#include<stdio.h>
int chc(char file[])
{
	FILE *fp=NULL;
	int str = 0;
	fp=fopen(file,"r");
	if (fp==NULL)
	{
		printf("û�м�⵽�ļ�\n");
			return;
	}
	char ch;
	ch = fgetc(fp);
		while (ch != EOF)
		{
			ch = fgetc(fp);
				str++;
		}
	fclose(fp);
	return str;
}
int wdc(char file[])
{
	FILE *fp=NULL;
	int word = 0;
	fp=fopen(file,"r");
	if (fp==NULL)
	{
		printf("û�м�⵽�ļ�\n");
		return;
	}
	char ch;
	ch = fgetc(fp);
	while (ch != EOF) {
		if (ch == ' ' || ch == ',')
		{
			word++;
			ch = fgetc(fp);
		}
		fclose(fp);
		return word;
	}
}
int main()
{
	char input[20];
	char File[100];
	while (1)
	{
		scanf("%s", &input);
		scanf("%s",&File);
		
		if (input=="-c") {
			int str = 0;
			str = chc(File);
			printf("�ַ�����%d\n", str);
			continue;
		}
		else if(input== "-w") {
			int wd=0;
			wd = wdc(File);
			printf("��������%d\n",wd);
			continue;
		}
	}
	system("pause");
	return 0;
}
