// AMSTRONG NUMBER

#include <stdio.h>
#include <math.h>

int main() 
{
    int num, y,x, remainder, n = 0, result = 0, power;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    x = num;
    while (x != 0) 
    {
        x/= 10;
        ++n;
    }
    y=num;
    while (y != 0) 
    {
        remainder = y % 10;
        power = round(pow(remainder, n));
        result += power;
        
        y /= 10;
    }
    
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    
    return 0;
}
