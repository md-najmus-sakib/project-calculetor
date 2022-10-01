#include <stdio.h>

int main()
{

    printf("----------------------------------------------------\n");
    printf("|                    Calculetor                    |\n");
    printf("----------------------------------------------------\n");
    printf("Select Operator:\n");
    printf("Addition (+), Substraction (-), Multiplition (*), Division (/):\n");

    char ope[5];
    float a, b;
    double sum, sub, mul, div;

    while (1)
    {
        scanf("%c", &ope[0]);

        if (ope[0] == '+')
        {
            scanf("%f%f", &a, &b);
            sum = a + b;
            printf("Result is: %.4lf\n", sum);
        }
        else if (ope[0] == '-')
        {
            scanf("%f%f", &a, &b);
            sub = a - b;
            printf("Result is: %.4lf\n", sub);
        }
        else if (ope[0] == '*')
        {
            scanf("%f%f", &a, &b);
            mul = a * b;
            printf("Result is: %.4lf\n", mul);
        }
        else if (ope[0] == '/')
        {
            scanf("%f%f", &a, &b);
            div = a / b;
            printf("Result is: %.4lf\n", div);
        }
    }

    return 0;
}