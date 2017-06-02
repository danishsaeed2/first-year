#include<stdio.h>
#include<conio.h>

main()

{

    int r1,c1,i,j,r2,c2,k;
    
        printf("\n\nFirst Matrix\n\n");
        printf("Number of rows: "); scanf("%d",&r1);
        printf("Number of columns: "); scanf("%d",&c1);
    
    int a[100][100];
    
        printf("Enter the values in the matrix A:\n");        
            for (i=0;i<r1;i++)
            	{
            	for (j=0;j<c1;j++)
            		{
            		printf("Row %d, ",i+1);
            		printf("Column %d: ",j+1);
            		scanf("%d",&a[i][j]);
            		}
            	}
        
        printf("\nMatrix A:\n");
            for (i=0;i<r1;i++)
            	{
            	for (j=0;j<c1;j++)
            		{
            		printf("%3d",a[i][j]);
            		}
            printf("\n");
            	}
            
        printf("\nSecond Matrix\n\n");
        printf("Number of rows: "); scanf("%d",&r2);
        printf("Number of columns: "); scanf("%d",&c2);
    
    int b[100][100];
    
        printf("Enter the values in the matrix B:\n");        
            for (i=0;i<r2;i++)
            	{
            	for (j=0;j<c2;j++)
            		{
            		printf("Row %d, ",i+1);
            		printf("Column %d: ",j+1);
            		scanf("%d",&b[i][j]);
            		}
            	}
            
        printf("\nMatrix B:\n");
            for (i=0;i<r2;i++)
            	{
            	for (j=0;j<c2;j++)
            		{
            		printf("%3d",b[i][j]);
            		}
            		printf("\n");
            	}
    
    int c[100][100];
    
        if (c1==r2)
        {
            for (i=0;i<r1;i++)
            	{
            	for (j=0;j<c2;j++)
            		{
            		c[i][j]=0;
            		for (k=0;k<r1;k++)
            			{
            			c[i][j]=(a[i][k]*b[k][i])+c[i][j];
            			}
            		}
            	}
            
        printf("\nMatrix C:\n");
            for (i=0;i<r1;i++)
            	{
            	for (j=0;j<c2;j++)
            		{
            		printf("%3d",c[i][j]);
            		}
            		printf("\n");
            	}
            
        printf("\n\n");
        }
        
        else
        {
        printf("\n\nError in value. Number of columns in Matrix A must be equal to number of rows in Matrix B.\n\n");
        }

getch();
return 0;

}
