/*
   PROJECT: QUADRATIC EQUATION
   AUTHOR: SANDRA WANJA
   DATE: 3 OCTOBER 2021
   COMPILER: GNC GCC
   LANGUAGE: C99
   LICENSE:MIT



*/
#include <stdio.h>
#include <math.h>

int main()
{
   //Variable Declarations
   double a, b, c;
   double discriminant, value1, value2, real_part, imaginary_part;

   printf("Enter coefficient a: ");
   scanf("%lf", &a);
   printf("Enter coefficient b: ");
   scanf("%lf", &b);
   printf("Enter coefficient c: ");
   scanf("%lf", &c);

   discriminant =(b * b) - (4 * a * c);

   //Condition for distinct values.
   if(discriminant > 0){
       printf("The Quadratic Equation has two distinct values.\n");
       printf("The Values of the Quadratic Equation are: ");
       value1 = (-b + sqrt(discriminant)) / (2 * a);
       value1 = (-b - sqrt(discriminant)) / (2 * a);
       printf("value1=%.2lf and value2=%.2lf", &value1, &value2);
   }
    //Condition for two equal values.
    else if(discriminant == 0){
       printf("The Quadratic Equation has two equal values.\n");
       printf("The Values of the Quadratic Equation are: ");
       value1 = value2 = -b / (2 * a);
       printf("value1 = value2 = %.2lf", value1);

    }
    //Condition for no roots.
        else if(discriminant < 0){
        printf("The Quadratic Equation has Real Part and Imaginary Part.\n");
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);
        printf("value1 = %.2lf,%.2lf and value2 = %.2f,-%.2f", real_part, imaginary_part, real_part, imaginary_part);

    }
   return 0;
}
