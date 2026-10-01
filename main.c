#include <stdio.h>

int main(void)
{
    int a, b;
    char op;
    
    printf("Enter the calculation: ");
    scanf("%d %c %d", &a, &op, &b);
    
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) printf("%d\n", a / b);
            else printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
    
    return 0;
}