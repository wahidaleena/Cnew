#include <stdio.h>
void sum(int a,int b)
{
    int c=a+b;
    printf("\nsum is %d\n",c);
}

void check(int num)
{
    if(num%2==0)
    {
        printf("even");
        
    }
    else if(num==0)
    {
        printf("first even number");
    }
    else
    printf("odd");
}

int main()
{
    printf("Welcome");
    sum(2,3);
    check(2);
    return 0;
}