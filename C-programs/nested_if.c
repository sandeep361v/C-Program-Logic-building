#include<stdio.h>
#include<conio.h>
void main()
{               int age,exp ;
                printf("enter your age:");
                scanf("%d",&age);
                printf("\nenter your exp:");
                scanf("%d",&exp);
           {     if (age>40)
               {
               if(exp>=5000)
               {printf("\nexp=exp+1000");}
               else
                printf("\nexp=exp+2000");
                }
               else
               printf("exp=exp+3000");
                printf("\nNew exp=%d",exp); }
                getch();
}