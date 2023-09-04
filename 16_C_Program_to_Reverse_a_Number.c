#include<stdio.h>

int main()
{
int number, value=0,rem ;
   printf("enter the numb: ");
   scanf("%d", &number);
   while(number>0)
   {
   rem=number%10;
   number=number/10;

   value =value *10;
   value=value + rem;}
   printf("nmbr %d", value);
    return 0;
}
