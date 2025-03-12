//1^2+3^2+5^2=.........
#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        sum=sum+i*i;
    }
    printf("%d",sum);
    return 0;
}