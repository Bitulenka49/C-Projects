#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int i,j,k;
    puts("Enter a string");
    gets(str j);
    for(int i=0;str [i]!='\0';i++);
    {
        printf("length=%d",i);
    }
    k=0;
    for(j=i-1;j>=0;j--)
    {
        str2[k]=str[i];
        k++;
    }
    str2[k]='\0';
    puts("Reverse");
    puts(str2);
    return 0;
}