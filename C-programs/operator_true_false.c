#include<stdio.h>
#include<conio.h>
void main()
{            int a,b,c,d;
                a=12;
                b=a++;
                c=++a;
                d=a--;
                printf("%d\n",a==b);
                printf("%d\n",b<c);
}