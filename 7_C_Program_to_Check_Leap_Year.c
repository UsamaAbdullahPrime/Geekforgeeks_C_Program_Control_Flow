#include<stdio.h>
int main(){
    int year;
    printf("Enter a year to find out if its leap year or not:");
    scanf("%d",&year);
    if(year%400 == 0){
        printf("%d is Leap Year",year);
    }
    else if(year%4 == 0 && year%100 != 0){
        printf("%d is Leap Year",year);
    }
    else
        printf("%d Not Leap Year",year);


    return 0;
}
