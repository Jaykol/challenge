#include <stdio.h>
#include <cs50.h>

int main(void)

{
    float w, h, bmi;

    //prompt user for value of weight and height

    printf("kindly input your weight in kg: \n");
    scanf("%f", &w);

    printf("kindly input your height in m:'\n");
    scanf("%f", &h);


    //bmi calculation

    bmi = w / h / h;

    {
        printf("bmi = %.2f\n", bmi);
    }

//tells if underweight
    if (bmi < 18.5)
    {
        printf("underweight\n");
    }

//tells if weight is optimal
    else if (bmi <= 25)
    {
        printf("optimal weight\n");
    }

//tells if overweight
    else if (bmi <= 30)
    {
        printf("overweight\n");
    }

//tells if obese
    else
    {
        printf("obese\n");
    }

    return 0;
}