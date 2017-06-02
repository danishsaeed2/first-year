#include<stdio.h>
#include<conio.h>

main()

{
      int i,j,r,c;

      printf("\n\nRight Pointed Pyramid\n\n");
      printf("Number of rows: "); scanf("%d",&r);
      printf("\n");
      
      if (r%2!=0)
      {
      c=(r/2)+1;
                   
      for (i=1;i<=r;i++)
      {
          if (i<c+1)
          {
             for (j=1;j<=i;j++)
             {
             printf("* ");
             }
          }                  
          else
          {
              for (j=c-1;j>=(i-c);j--)
              {
              printf("* ");
              }
          }
          printf("\n");                      
       }
       }
        
       else
       {     
       c=r/2;
       
       for (i=1;i<=r;i++)
       {
           if (i<=c)
           {
           for (j=1;j<=i;j++)
               {
               printf("* ");
               }
           }                  
           else
           {
               for (j=c;j>=(i-c);j--)
               {
               printf("* ");
               }
           }
           printf("\n");                      
        }
        }
        
        getch();
        return 0;
}     
