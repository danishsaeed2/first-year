#include<stdio.h>
#include<conio.h>

main()

{
      int i,j,r,c;
      
      printf("\n\nBox\n\n");
      printf("Enter the height: "); scanf("%d",&r);
      printf("Enter the width: "); scanf("%d",&c);
      printf("\n\n");
      
      for (i=1;i<=r;i++)
      {
          for (j=1;j<=c;j++)
          {
              if (i==1||i==r||j==1||j==c)
              {printf(" *");}
              else {printf("  ");}
          }
          printf("\n");
      }
      
      getch();
      return 0;
      
}
