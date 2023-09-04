#include<stdio.h>
#include<math.h>
int main(){
//taking input
    int inputNumber,arm_num=0,remainder,n=0,range_low,range_high;
    printf("Input Range (x-y) to find Armstrong Number: ");
    scanf("%d%d",&range_low,&range_high);
    int store_input=inputNumber;
    for(int i=range_low;i<=range_high;i++){
        if(i>=1 && i<=9){
            n=1;
            arm_num=(pow(i,n))+arm_num;
            if(arm_num==i){
                printf("%d Armstrong Number\n",i);
            }
            arm_num=0;
        }
        else if(i>=10 && i<=99){
            n=2;
            inputNumber=i;
            while(inputNumber>0){
            remainder=inputNumber%10;
            arm_num=(pow(remainder,n))+arm_num;
            inputNumber=inputNumber/10;
            }
            if(arm_num==i){
                printf("%d Armstrong Number\n",i);
            }
            arm_num=0;
            inputNumber=0;
            remainder=0;
        }
         else if(i>=100 && i<=999){
            n=3;
            inputNumber=i;
            while(inputNumber>0){
            remainder=inputNumber%10;
            arm_num=(pow(remainder,n))+arm_num;
            inputNumber=inputNumber/10;
            }
            if(arm_num==i){
                printf("%d Armstrong Number\n",i);
            }
            arm_num=0;
            inputNumber=0;
            remainder=0;
        }
         else if(i>=1000 && i<=9999){
            n=4;
            inputNumber=i;
            while(inputNumber>0){
            remainder=inputNumber%10;
            arm_num=(pow(remainder,n))+arm_num;
            inputNumber=inputNumber/10;
            }
            if(arm_num==i){
                printf("%d Armstrong Number\n",i);
            }
            arm_num=0;
            inputNumber=0;
            remainder=0;
        }
        else if(i>=10000 && i<=99999){
            n=5;
            inputNumber=i;
            while(inputNumber>0){
            remainder=inputNumber%10;
            arm_num=(pow(remainder,n))+arm_num;
            inputNumber=inputNumber/10;
            }
            if(arm_num==i){
                printf("%d Armstrong Number\n",i);
            }
            arm_num=0;
            inputNumber=0;
            remainder=0;
        }
        else if(i>=100000 && i<=999999){
            n=6;
            inputNumber=i;
            while(inputNumber>0){
            remainder=inputNumber%10;
            arm_num=(pow(remainder,n))+arm_num;
            inputNumber=inputNumber/10;
            }
            if(arm_num==i){
                printf("%d Armstrong Number\n",i);
            }
            arm_num=0;
            inputNumber=0;
            remainder=0;
        }
             else if(i>=1000000 && i<=9999999){
            n=7;
            inputNumber=i;
            while(inputNumber>0){
            remainder=inputNumber%10;
            arm_num=(pow(remainder,n))+arm_num;
            inputNumber=inputNumber/10;
            }
            if(arm_num==i){
                printf("%d Armstrong Number\n",i);
            }
            arm_num=0;
            inputNumber=0;
            remainder=0;
        }     else if(i>=10000000 && i<=99999999){
            n=8;
            inputNumber=i;
            while(inputNumber>0){
            remainder=inputNumber%10;
            arm_num=(pow(remainder,n))+arm_num;
            inputNumber=inputNumber/10;
            }
            if(arm_num==i){
                printf("%d Armstrong Number\n",i);
            }
            arm_num=0;
            inputNumber=0;
            remainder=0;
        }     else if(i>=100000000 && i<=999999999){
            n=9;
            inputNumber=i;
            while(inputNumber>0){
            remainder=inputNumber%10;
            arm_num=(pow(remainder,n))+arm_num;
            inputNumber=inputNumber/10;
            }
            if(arm_num==i){
                printf("%d Armstrong Number\n",i);
            }
            arm_num=0;
            inputNumber=0;
            remainder=0;
        }     else if(i>=1000000000 && i<=2147483647){
            n=10;
            inputNumber=i;
            while(inputNumber>0){
            remainder=inputNumber%10;
            arm_num=(pow(remainder,n))+arm_num;
            inputNumber=inputNumber/10;
            }
            if(arm_num==i){
                printf("%d Armstrong Number\n",i);
            }
            arm_num=0;
            inputNumber=0;
            remainder=0;
        }
        else if(i>2147483647)
        {
            printf("Input 1-2147483647");
        }
    }
    return 0;
}

