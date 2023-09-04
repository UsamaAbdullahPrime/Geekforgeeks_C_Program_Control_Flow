#include<stdio.h>
#include<math.h>
int main(){
//taking input
    int inputNumber,arm_num=0,remainder,n,count=0;
    printf("Input number : ");
    scanf("%d",&inputNumber);
    //storing input to another variable
    //cause wee need to compare it if its equal
    //for example 153 is armstrong number
    //so inputNumber is 153 and store_input is 153
    int store_input=inputNumber;
    n=inputNumber;
    while(n>0){


        n=n/10;
        count++;


    }
    //153 is greater than 0 so the condition is true
    while(inputNumber>0){
        //if we divide 153 by 10 we get 3 remainder
        // here we can see to get individual number
        //from 1 single number like 153 we can just
        //divide it by 10 and take the remainder
        //in this case 153%10==3 which is last digit og 153
        //we need all digit and multiply by itself 3 times
        //sum them and if input == sum its armstrong number
        remainder=inputNumber%10;
        //now arm_num =0 ,remainder=3,so (3*3*3)+0=27
        //so arm_num=27
        arm_num=(pow(remainder,count))+arm_num;
        //inputNum divided by 10 to remove last digit
        //cause its an integer number
        //after dividing inputNumber=15
        inputNumber=inputNumber/10;
        //and these loop continues until inputNumber == 0
    }
    if(arm_num==store_input){
        printf("Yes It's Armstrong Number\n");
    }
    else
        printf("Nope It's not Armstrong Number\n");
    return 0;
}
