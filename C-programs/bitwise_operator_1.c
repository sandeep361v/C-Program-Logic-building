#include<stdio.h>
#include<conio.h>
void main()
{            int a,b;
                a=2;
                b=a--;
                printf("%d",a|b^a||b&a&&b++);
}