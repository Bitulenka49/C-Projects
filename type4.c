//WAP to add two numbers with return type an with argument.
#include<stdio.h>
int sum(int,int);
int main()
{
    int a,b,c;
    printf("Enetr two numbers");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("sum=%d",a+b);
    return 0;
}
int sum(intx, inty);
{
    return x+y;
}