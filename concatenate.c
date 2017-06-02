#include<stdio.h>
#include<conio.h>

main()
{

char a[100],b[100],c[100];
int i,j,k,l;

printf("\nEnter string A: ");
scanf("%[^\n]%*c",a);
for (i=0;a[i]!='\0';i++);

printf("\nEnter string B: ");
scanf("%[^\n]%*c",b);
for (j=0;b[j]!='\0';j++);

printf("\nEnter string C: ");
scanf("%[^\n]%*c",c);
for (k=0;c[k]!='\0';k++);

char n[100];
n[i+j+k+1]='\0';

for (l=0;l<i;l++)
{n[l]=a[l];}

for (l=0;l<j;l++)
{n[i+l]=b[l];}

for (l=0;l<k;l++)
{n[i+j+l]=c[l];}

printf("\n\nThe new string is: %s\n\n",n);

getch();
return 0;
}
