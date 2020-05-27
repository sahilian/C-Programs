#include <stdio.h>
float sum(float,float);
float dif(float,float);
float mul(float,float);
float div(float,float);
main()
{
    float a,b;
    char o;
    printf("Enter two numbers:");
    scanf("%f %f",&a,&b);
    printf("\nEnter the required operator (+,-,*,/): ");
    scanf(" %c",&o);
    switch (o)
    {
        case '+':
            printf("%.2f + %.2f= %.2f",a,b,sum(a,b));
            break;
        case '-':
            printf("%.2f - %.2f= %.2f",a,b,dif(a,b));
            break;
        case '*':
            printf("%.2f * %.2f= %.2f",a,b,mul(a,b));
            break;
        case '/':
            printf("%.2f / %.2f= %.2f",a,b,div(a,b));
            break;     
        default:
            printf("Invalid Choice!");
    }
    return 0;
}
    float sum(float x, float y)
    {
        return (x+y);
    }
    float dif(float x, float y)
    {
        return (x-y);
    }
    float mul(float x, float y)
    {
        return (x*y);
    }
    float div(float x, float y)
    {
        return (x/y);
    }
