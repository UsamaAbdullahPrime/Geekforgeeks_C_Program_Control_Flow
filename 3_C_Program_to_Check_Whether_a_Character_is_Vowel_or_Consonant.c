#include<stdio.h>
int main ()
{
    char inputchar;
    printf ("Input alphabet:");
    scanf("%c",&inputchar);
    if((inputchar>=65 && inputchar<=90) || (inputchar>=97 && inputchar<=122))
        {
            if ((inputchar == 65) || (inputchar == 65+32) )
            {
                printf("%c is Vowel\n",inputchar);
            }
           else if ((inputchar == 69) || (inputchar == 69+32) )
            {
                printf("%c is Vowel\n",inputchar);
            }
           else if ((inputchar == 73) || (inputchar == 73+32) )
            {
                printf("%c is Vowel\n",inputchar);
            }
           else if ((inputchar == 79) || (inputchar == 79+32) )
            {
                printf("%c is Vowel\n",inputchar);
            }
           else if ((inputchar == 85) || (inputchar == 85+32) )
            {
                printf("%c is Vowel\n",inputchar);
            }
           else
            {
                printf("%c is Consonant\n",inputchar);
            }
        }
    else
        {
            printf("Wrong input\n");
        }
return 0;
}
