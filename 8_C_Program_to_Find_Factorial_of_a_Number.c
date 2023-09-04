#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Input number to find factorial !n :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("!n is : %d\n",fact);



    return 0;
}
