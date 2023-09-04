#include<stdio.h>
int main(){
    float number;
    printf("Check Whether a Number is Positive, Negative, or Zero:");
    scanf("%f",&number);
    printf("%f number\n",number);
    if(number>0 || number<0){
        if(number>0){
            printf("%.2f is Positive",number);
        }
        else
            printf("%.2f is Negative",number);
    }
    else if(number == 0)
        printf("Input is Zero",number);
    else
        printf("Wrong input");




    return 0;
}
