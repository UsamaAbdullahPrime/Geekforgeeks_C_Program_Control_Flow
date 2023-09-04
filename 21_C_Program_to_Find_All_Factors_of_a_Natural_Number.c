#include<stdio.h>
#include<math.h>
int main()
{
    int number;
    float num,sub;
    while(1){
    printf("Enter a natural numb: ");
    scanf("%f",&num);
    number=num;
    sub=num-number;
    if(num>0){
    if(sub==0){
    if(number>0){
    printf("Divisors of this natural number is: ");
    for(int i=1;i<=number;i++){
        if(number%i==0){
            printf("%d,",i);
        }
    }
    }
    break;
    }
    }
    printf("error\n\n");
    }

    return 0;
}

