#include <stdio.h>
int main(){
    float number[3];
    int tagN=1;
    for(int i=0;i<3;i++)
    {
    printf("input number %d : ",tagN);
    scanf("%f",&number[i]);
    tagN++;
    }
    //printf("number 1 %.2f\n",number[0]);
    //printf("number 2 %.2f\n",number[1]);
    //printf("number 3 %.2f\n",number[2]);

    float maxNumber=0;
    for(int i=0;i<=3;i++)
    {
        if(maxNumber<number[i])
        {
            maxNumber=number[i];
        }
        //printf(" Larg loop number %f\n",maxNumber);
    }
    printf("Largest number is :%.2f",maxNumber);





    return 0;
}
