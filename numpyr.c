#include<stdio.h>
#include<conio.h>

main()
{
      int i,j,k=1,h,r;
      
      printf("\n\nHeight of the pattern: ");
      scanf("%d",&h);
      
      r=(2*h)-1;
      
      for (i=1;i<=h;i++)
      {
          for (j=1;j<=i;j++)
          {
              printf("%4d",k);
              k++;
          }
          
          for (j=1+i;j<=r-i;j++)
          {
              printf("    ");
          }
          
          for (j=1;j<=i;j++)
          {
              if (i==h&&j==h) break;
              printf("%4d",k);
              k++;             
          }
          
          printf("\n");
      }
      
      getch();
      return 0;
}
