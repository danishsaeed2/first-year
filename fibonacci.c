#include<stdio.h>
#include<conio.h>

main()

{
      int i,n;
      
      printf("Number of terms: "); scanf("%d",&n);
      
      int mat[n];
      
      printf("First term: "); scanf("%d",&mat[0]);
      printf("Second term: "); scanf("%d",&mat[1]);
      
      for (i=0;i<n;i++)
      {
          mat[i+2]=mat[i]+mat[i+1];
          printf("%d ",mat[i]);
          }
      
      getch();
      return 0;
      }
