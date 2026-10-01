#include <stdio.h>

int main(void)
{
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    int abs_num = num;
    if (abs_num < 0) {
        abs_num = -abs_num; 
    }
    
    printf("The absolute value is %d.\n", abs_num);
    
    return 0;
}