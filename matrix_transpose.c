#include<stdio.h>
#include<conio.h>

main()

{
      int r,c,i,j;

      printf("\n\nEnter the Matrix\n\n");
      printf("Number of rows: "); scanf("%d",&r);
      printf("Number of columns: "); scanf("%d",&c);

      int a[100][100];

      printf("\nEnter the values in the matrix:\n");

      for (i=0;i<r;i++)
	      {
	      for (j=0;j<c;j++)
              {
		      printf("Row %d, ",i+1);
              printf("Column %d: ",j+1);
		      scanf("%d",&a[i][j]);
		      }
          }

      printf("\nThe matrix is:\n");
      for (i=0;i<r;i++)
	      {
	      for (j=0;j<c;j++)
		      {
		      printf("%3d",a[i][j]);
		      }
          printf("\n");
          }
          
      printf("\nThe transpose of the matrix is:\n");
      for (i=0;i<r;i++)
          {
          for (j=0;j<c;j++)
              {
              printf("%3d",a[j][i]);
              }
          printf("\n");
          }
         
      getch();
      return 0;
          
          
}
