#include <stdio.h>

int main()
{
    printf("***PROGRAM TO PERFORM AN ARITHMETIC OPERATION ON TWO NUMBERS***\n\n");
    long double x, y, ans;
    printf("Enter two numbers separated by x space: ");
    scanf("%lf%lf", &x, &y);

    int srno;
    printf("Enter the code for the following-\n1. Add\n2. Subtract\n3. Product\n4. Divide (First Number by Second Number)\n5. Modulo(First Number by Second Number)");
    scanf("%d", &srno);

    switch (srno)
    {
    case 1:
        // ans = add(x, y);
        break;
    case 2:
        // ans = subtract(x, y);
        break;
    case 3:
        // ans = multiply(x, y);
        break;
    case 4:
        if (y == 0)
        {
            srno = -1;
        }
        // ans = divide(x, y);
        break;
    case 5:
        if (y == 0)
        {
            srno = -1;
        }
        // ans = (x, y);
        break;
    default:
        srno = 0;
    }

    if (srno == 0)
    {
        printf("\nERROR: Enter Valid Code.\n");
    }
    else if (srno = -1)
    {
        printf("\nERROR: Cannot Divide by Zero.\n");
    }
    else
    {
        printf("\nAnswer: %d\n", ans);
    }

    return 0;
}