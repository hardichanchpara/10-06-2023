#include<stdio.h>

main()
{
	FILE *p;
	char data[1000]="my name is hardii.";
	
	p=fopen("HARDI.txt","r");
	if(p == NULL)
	{
		printf("this file is could not open.\n");
	}
	else
	{
		printf("enter data you want to input in text file:-");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("data add successfully....");
	}
	fclose(p);
	printf("\n==================\n");
	p=fopen("HARDI.txt","r");
	if(p == NULL)
	{
		printf("this file is could not open.\n");
	}
	else
	{
		while(fgets(data,28,p)!=NULL)
		{
			printf("%s",data);
		}
	}
	fclose(p);
}
