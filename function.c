//write a program to findout addition of two number using no rerturn type and with argument concept.
#include<stdio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("Enter two number");
    scanf("%d%d", &a,&b);
    sum(a,b);
    return 0;
}
void sum(int x, int y)
{
    printf("sum=%d",x+y);
}
