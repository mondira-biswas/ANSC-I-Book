#include<stdio.h>
int main()
{
    long int p=1;
    double q=1.0;
    int n;
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    printf("2 power n n  2 power -n\n");
    printf(" _ _ _ _ _ _ _ _ _ _ _ _ _  _\n");
    for(n=0;n<=20;n++)
    {
        if(n!=0)
        {
            p=p*2;
        }
        q=1.0/(double)p;
        printf("%10ld %10d %20.12f\n",p,n,q);
        
    }
    printf("_ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n");
    return 0;
}
