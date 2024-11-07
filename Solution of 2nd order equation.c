#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     --we have 3 cases
       --discriminant = 0 then we have one solution
       --discriminant < 0 then we have complex number
       --discriminant > 0 then we have roots
    */
    //Assign variables a,b,c => coefficients
    //Roots 1,2  is the solution of equation Root = (-b * sqrt(b^2 -4* a *c) )/(2 * a)
    //real part and imaginary part
    double a,b,c, root1, root2, real_part,imaginary_part;
    //we read the coefficients from user
    printf("Please enter a \n");
    scanf("%lf",&a);
    printf("Please enter b \n");
    scanf("%lf",&b);
    printf("Please enter c \n");
    scanf("%lf",&c);
    //declare the discriminant
    double discriminant = (b * b)-(4 * a * c);
    printf("the discriminant is %0.2lf \n",discriminant);

    // --discriminant < 0 then we have complex number
    if(discriminant < 0){
        real_part = (-1 * b)/(2 * b);
        imaginary_part =  sqrt(-discriminant)/(2 * b);
            printf("Root 1 = %0.2lf + %.2lf \t ",real_part,imaginary_part);
            printf("Root 2 = %0.2lf - %.2lf \t ",real_part,imaginary_part);
    }
    // --discriminant = 0 then we have one solution
    else if(discriminant == 0)
            { root1 = -b/(2*a);
                    printf("%0.2lf",root1); }
    else   // --discriminant > 0 then we have roots
            {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf(" root 1 = %0.2lf \t",root1);
        printf(" root 2 =  %0.2lf \t",root2);
            }

    return 0;
}
