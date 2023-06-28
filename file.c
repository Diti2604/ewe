//iferati22
#include <stdio.h>
#include <stdlib.h>

int sum(int a,int b)
{
    if(a>b)
        return 0;
    return a+sum(a+2,b);
}
int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a%2==0)
        a=a+1;
    printf("%d", sum(a,b));
    return 0;
}