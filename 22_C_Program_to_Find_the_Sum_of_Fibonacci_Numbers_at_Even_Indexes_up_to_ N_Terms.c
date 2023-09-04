#include<stdio.h>
int main(){
//multiplication table
    int number=1,previous_number=0,range,next_product=0,sum=0;
    printf("Input range for fibonacci sequence : ");
    scanf("%d",&range);
    int n=range;
    range=range*2+1;
    int arr[range];
    if(range<1){
        //if input range less than 1
        printf("invalid");
        return;
    }
    //fibonacci fn=fn-1+fn-2 or sum of previous number
    for(int i=0;i<range;i++){
        if(range>=1){
        arr[i]=previous_number;
        //printf("%d,",previous_number);
        next_product=previous_number+number;
        previous_number=number;
        number=next_product;
        //next_product=0;
        }

    }
    printf("\n");
    printf("Even indexed Fibonacci Sum upto %d terms ",n);
    for(int i=0;i<range;i++){
        if(i%2==0){
            printf("%d+",arr[i]);
            sum=sum+arr[i];
        }
    }
    printf("=%d\n",sum);


    return 0;
}
