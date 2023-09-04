#include<stdio.h>
#include<math.h>
int armstrong(int inputnumber);
int main(){
//taking input
    //int inputNumber,arm_num=0,remainder,n,count=0;
   // printf("Input number : ");
    //scanf("%d",&inputNumber);
    for (int i=1;i<=1000;i++){

        if(armstrong(i)==1){
            printf("%d is Armstrong\n",i);
        }
       /* else
            {
             printf("%d is not Armstrong\n",i);
        }
*/
    //printf("%d ",armstrong(i));

    }
    return 0;
}







int armstrong(int inputNumber){
    int arm_num=0,remainder,n,count=0;
    int store_input=inputNumber;
    n=inputNumber;

    while(n>0){
        n=n/10;
        count++;
    }
    //printf("arm num:%d, remainder:%d, input number:%d",arm_num,remainder,inputNumber);
    while(inputNumber>0){
        int power=1;
        remainder=inputNumber%10;
        for(int i=1;i<=count;i++){
            power=power*remainder;
        }
        arm_num=power+arm_num;

        inputNumber=inputNumber/10;

    }

    //printf("arm num:%d, remainder:%d, input number:%d",arm_num,remainder,inputNumber);
    if(arm_num==store_input){
        return 1;
    }
    else
    {
        return 0;
    }
}
