#include<stdio.h>
#include<conio.h>
void main()
{                int a=5,c,b;
                c=(a+'a')<<2;
                printf("%d\n",c);
                b=~a;
                printf("%d\n",b);
                a=~('a'+2);
                printf("%d",a);
}