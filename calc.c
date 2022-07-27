#include <stdio.h>

int main()
{
    printf("***PROGRAM TO PERFORM AN ARITHMETIC OPERATION ON TWO NUMBERS***\n\n");
    double x, y, ans;

    // Input Values
    printf("Enter two numbers separated by x space: ");
    scanf("%lf %lf", &x, &y);

    // Input Operation Code
    int srno;
    printf("Enter the code for the following-\n1. Add\n2. Subtract\n3. Product\n4. Divide (First Number by Second Number)\n");
    scanf("%d", &srno);

    // Implementing Operations
    switch (srno)
    {
    case 1:
        ans = x + y;
        break;
    case 2:
        ans = x - y;
        break;
    case 3:
        ans = x * y;
        break;
    case 4:
        if (y == 0)
        {
            srno = -1;
        }
        else
        {
            ans = x / y;
        }
        break;
    default:
        srno = 0;
    }

    // Printing Output or Error
    if (srno == 0)
    {
        printf("\nERROR: Enter Valid Code.\n");
    }
    else if (srno == -1)
    {
        printf("\nERROR: Cannot Divide by Zero.\n");
    }
    else
    {
        printf("\nAnswer: %lf\n", ans);
    }

    return 0;
}