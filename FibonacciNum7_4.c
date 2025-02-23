#include<stdio.h>
int main()
{
    int num1=0,num2=1,count=0,fibo,n;
    printf("Enter the value of n=\n");
    scanf("%d",&n);
    for(count=0;count<n;count++)
    {
        if(count<=1)
        {
            fibo=count;
        }
        else{
            fibo=num1+num2;
            num1=num2;
            num2=fibo;
        }
        printf("%d\n",fibo);
    }
    return 0;
}
