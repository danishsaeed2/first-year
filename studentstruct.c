#include<stdio.h>
#include<conio.h>

main()
{
      int n,i,j,m=0;
      
      struct student
      {
             int roll,rank;
             char name[40];
             float phy,chem,math,total;
      };
      
      printf("\nHow many student records have to be entered? ");
      scanf("%d",&n);
      
      struct student stu[50];

      for (i=0;i<n;i++)
      {
          printf("\n-----Details of student-----\n\n");
          
          printf("Roll Number: "); scanf("%d",&stu[i].roll);
          printf("Name: "); scanf("%s",stu[i].name);
          printf("Marks in Physics: "); scanf("%f",&stu[i].phy);
          printf("Marks in Chemistry: "); scanf("%f",&stu[i].chem);
          printf("Marks in Maths: "); scanf("%f",&stu[i].math);
          stu[i].total=stu[i].phy+stu[i].chem+stu[i].math;
      }      

      for (j=1;j<n;j++)
      {
          if (stu[j].total>stu[m].total)
          {
             m=j;
          }
      }
          
      printf("\nFIRST RANK:");
      printf("\nRoll Number: %d",stu[m].roll);
      printf("\nName: %s",stu[m].name);
      printf("\nMarks in Physics: %.2f",stu[m].phy);
      printf("\nMarks in Chemistry: %.2f",stu[m].chem);
      printf("\nMarks in Maths: %.2f",stu[m].math);
      printf("\n\n");
      
      getch();
      return 0;
      
}
