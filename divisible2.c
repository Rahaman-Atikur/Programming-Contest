#include<stdio.h>
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%3==0 && i%7==0)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}