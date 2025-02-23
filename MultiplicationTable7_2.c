#include<stdio.h>
#define COLMAX 10
#define ROWMAX 12
int main()
{
int row,column,y;
row=1;
printf("Multiplication table\n=");
do
{
    column=1;
    do
    {
        printf("%4d",row*column);
        column++;

    }while(column<=COLMAX);
    printf("\n");
    row++;

    
}while(row<=ROWMAX);
return 0;



}