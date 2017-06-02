#include<stdio.h>
#include<conio.h>

main()
{
      int i,j,h,r;
      
      printf("\n\nInverted pyramid\n\n");
      printf("Height of pyramid: ");scanf("%d",&h);
      printf("\n");
      
      r=(2*h)-1;
      
      for (i=0;i<h+1;i++)
      {
          for (j=1;j<=i;j++)
          {
              printf("  ");
          }
          
          for (j=0+i;j<r-i;j++)
          {
              printf("* ");
          }
          
          printf("\n");
      }
      
      getch();
      return 0;
      
}
