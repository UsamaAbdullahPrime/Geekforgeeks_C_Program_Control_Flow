#include<stdio.h>
int main(){
    //input for x&y
    int x,y,max_num;
    printf("Input X : ");
    scanf("%d",&x);
    printf("Input Y : ");
    scanf("%d",&y);
    //if x greater than y then max_num is x
    if(x>y){
        max_num=x;
    }
    //if y greater than x then max_num is y
    else if(y>x){
        max_num=y;
    }
    //if both number are same then max number has to be one of them
    else if(y==x){
        max_num=y;
    }
    //using infinite loop by using 1 which is always true condition
    while(1){
        //checking if max number is divisible by both number
        //if not then max_num increase by 1
        //until max_num is divisible by both x & y
        //when condition is true then we know max_num is
        //LCM (Least Common Multiple)
        if(max_num%x==0 && max_num%y==0){
            printf("LCM of %d & %d is  %d\n",x,y,max_num);
            //break the loop if we find LCM
            break;
        }
        max_num++;
    }

    return 0;
}
