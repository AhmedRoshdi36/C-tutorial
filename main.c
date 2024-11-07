#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3,num4,num5;
    int max,min;
    printf("Please enter the first name \n");
    scanf("%d",&num1);
    printf("Please enter the second name \n");
    scanf("%d",&num2);
    printf("Please enter the third number \n");
    scanf("%d",&num3);
    printf("Please enter the fourth number \n");
    scanf("%d",&num4);
    printf("Please enter the fifth number \n");
    scanf("%d",&num5);
    min = max = num1;

    if(num2 > max){ max = num2 ; }
    if(num2 < min){ min = num2  ; }
    if(num3 > max){ max = num3 ; }
    if(num3 < min){ min = num3  ; }
    if(num4 > max){ max = num4 ; }
    if(num4 < min){ min = num4  ; }
    if(num5 > max){ max = num5 ; }
    if(num5 < min){ min = num5  ; }


    printf("The max is %d \n",max);
    printf("The max is %d  \n",min);

    return 0;
}
