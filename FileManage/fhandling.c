#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main()
{
FILE *source,*target;

char n;
int cl=0,sl=0,d=0,s=0,e=0;

printf("\n\n");

source=fopen("source.txt","r");

if (source==NULL)
	{
		printf("Source file missing");
		exit(1);
	}

	while (1)
	{
		n=fgetc(source);

		if (n==EOF)
		{break;}
		else
		{
			if (n>=65&&n<=90)
			{cl++;}
			if (n>=97&&n<=122)
			{sl++;}
			if (n>=48&&n<=57)
			{d++;}
			if (n==' ')
			{s++;}
			if (n=='\n')
			{e++;}
		}
	}

fclose(source);

target=fopen("target.txt","w");

fprintf(target,"\nCapital letters: %d",cl);
fprintf(target,"\nSmall letters: %d",sl);
fprintf(target,"\nDigits: %d",d);
fprintf(target,"\nSpaces: %d",s);
fprintf(target,"\nNew Lines: %d\n\n",e);

fclose(target);

getch();
return 0;

}
