#include<stdio.h>
int main(){
//multiplication table
    int number=1,previous_number=0,range,next_product=0;
    printf("Input range for fibonacci sequence : ");
    scanf("%d",&range);
    if(range<1){
        //if input range less than 1
        printf("invalid");
        return;
    }
    //fibonacci fn=fn-1+fn-2 or sum of previous number
    for(int i=0;i<range;i++){
        if(range>=1){
        // print previous number = 0
        printf("%d,",previous_number);
        //next product=0+1=1 *number=1,prev_num=0
        next_product=previous_number+number;
        //prev_num=1
        previous_number=number;
        //number = next product which is 1
        number=next_product;
        //neutralize next product to 0
        //cause we have to store number and prev_num sum
        next_product=0;
        }

    }



    return 0;
}
