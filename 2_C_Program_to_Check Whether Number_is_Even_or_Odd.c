#include<stdio.h>
int main ()
{
    float inumber;
    int number;
    printf ("input number:");
    scanf("%f",&inumber);
    number=inumber;
    float subnumber=inumber-number;
    //printf("%.2f\n",subnumber);
    //odd or even is natural number thats why >0
    if(inumber>=0)
    {if(number!=0){
        printf("%.2f is a float ",inumber);
    }
    else if(number%2==0){
        printf("%d is Even",number);
    }
    else
        printf("%d is Odd",number);
    }
    else
        printf("Wrong Input Try Again");

return 0;
}
