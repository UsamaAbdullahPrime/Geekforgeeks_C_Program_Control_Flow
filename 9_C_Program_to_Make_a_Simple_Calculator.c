#include<stdio.h>
int main(){
    while (1){
        char input;
        float number1,number2;
        printf("\nInput (+,-,*,/). To Quit press 'x':");
        scanf("%c",&input);
        if(input=='x' || input=='X'){
            break;
        }
            printf("Input Two number to get their sum :");
            scanf("%f%f",&number1,&number2);
        switch(input){
        case '+':
                //printf("Input Two number to get their sum :");
                //scanf("%f%f",&number1,&number2);
                printf("Sum is : %.2f\n",number1+number2);
                break;
        case '-':
                //printf("Input Two number to get their sub :");
                //scanf("%f%f",&number1,&number2);
                printf("Sum is : %.2f\n",number1-number2);
                break;
        case '*':
                //printf("Input Two number to get their product :");
                //scanf("%f%f",&number1,&number2);
                printf("Sum is : %.2f\n",number1*number2);
                break;
        case '/':
                //printf("Input Two number to get their division :");
                //scanf("%f%f",&number1,&number2);
                printf("Sum is : %.2f\n",number1/number2);
                break;
        default:
            printf("wrong input\n");
            break;
        }

    }
    return 0;
}
