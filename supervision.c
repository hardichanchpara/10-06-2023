#include<stdio.h>

main()
{
	FILE *p;
	char data[1000]="HARDI..";
	
	p=fopen("HARDI.txt","w");
	if(p == NULL)
	{
		printf("this file is could not open.\n");
	}
	else
	{
		printf("enter data you want to inpute in text file:-");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add successfully....");
	}
	fclose(p);
}
