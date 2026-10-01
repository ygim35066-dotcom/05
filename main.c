#include <stdio.h>

int main(void)
{
    char c;
    int num_count = 0;
    
    printf("Input a string: ");
    
    while ((c = getchar()) != '\n') {
        if (c >= '0' && c <= '9') {
            num_count++;
        }
    }
    
    printf("the number of digits is %d\n", num_count);
    
    return 0;
}