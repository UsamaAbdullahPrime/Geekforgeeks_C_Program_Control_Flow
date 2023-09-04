#include<stdio.h>
int main(){
//multiplication table
    int number,range,product;
    printf("Input number : ");
    scanf("%d",&number);
    printf("Input range : ");
    scanf("%d",&range);
    for(int i=1;i<=range;i++){
        product=i*number;
        printf("%d*%d = %d\n",number,i,product);
    }



    return 0;
}
