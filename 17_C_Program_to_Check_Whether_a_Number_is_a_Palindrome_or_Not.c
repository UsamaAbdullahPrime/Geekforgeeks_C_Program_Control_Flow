#include<stdio.h>

int main()
{
int number, value=0,rem ,reserve_num;
   printf("enter the numb: ");
   scanf("%d", &number);
   reserve_num=number;
   while(number>0)
   {
   rem=number%10;
   number=number/10;

   value =value *10;
   value=value + rem;
   }
   if(value==reserve_num){
    printf("%d is a Palindrome",reserve_num);
   }
   else
    printf("%d is not Palindrome",reserve_num);
    return 0;
}
