#include<stdio.h>
int main()
{
    int weight;
    printf("Input the weight=");
    scanf("%d",&weight);
    if(weight<150)
    printf("Underweight",weight);
    else if(weight>170)
    printf("Overweight",weight);
    else if(150<weight<170)
    printf("Normalweight",weight);
    return 0;
}