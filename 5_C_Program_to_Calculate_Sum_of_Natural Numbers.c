#include<stdio.h>
int main(){
//Natural numbers are all positive integers from 1 to infinity
    int number,sum=0,count=1;
    printf("Input Number: ");
    scanf("%d",&number);
    for(int i=0;i<=number;i++){
        sum=sum+i;
        printf("%d+",i);
    }
    printf("\nTotal sum is= %d",sum);

/*if(number[0] >= 0 && number[1] >= 0 ){
    sum = number[0] + number[1];
    printf("Sum of Natural number = %d\n",sum);
}
else
    printf("Wong input Try Again");*/

    return 0;
}
