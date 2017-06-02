#include<stdio.h>
#include<conio.h>

main()

{
      int i,n,r,a=1,b=1,c=1;
      
      printf("\n\nEnter n: "); scanf("%d",&n);
      printf("Enter r: "); scanf("%d",&r);
      
      if (n>=0&&r>=0)
      {
          if (n>=r)
          {
                        
          for (i=1;i<=n;i++)             /* loop for n! */
                {
                a=a*i;
                }
          
          printf("\nn! = %d",a);
    
          for (i=1;i<=r;i++)             /* loop for r! */
                {
                b=b*i;
                }
                
          printf("\nr! = %d",b);
          
          for (i=1;i<=(n-r);i++)         /* loop for (n-r)! */
                {
                c=c*i;
                }
          
          printf("\n(n-r)! = %d",c);
          
          printf("\n\nnPr = %d",a/c);
          printf("\nnCr = %d",a/(c*b));
          
          }
          
          else
          {printf("\nError in values. n should be greater than r.");}
      }
      
      else
      {printf("\nError in values. n or r can not be negative.");} 
          
      getch();
      return 0;
      
}
