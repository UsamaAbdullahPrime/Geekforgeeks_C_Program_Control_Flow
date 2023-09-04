#include<stdio.h>
#include<math.h>
int main()
{
    int number,rem,value,reserve_num;
    printf("Enter the numb: ");
    scanf("%d",&number);
    reserve_num=number;
    number=pow(number,2);
    while(number>0)
   {
   rem=number%10;
   number=number/10;
   value=value + rem;
   }
    if(value==reserve_num){
    printf("%d is a Neon Number",reserve_num);
    }
    else
    printf("%d is Not a Neon Number",reserve_num);
    return 0;
}

