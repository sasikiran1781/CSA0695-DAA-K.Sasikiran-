// TO FIND BIGGEST OF N INTEGERS

#include<stdio.h>

int main()
{
    int n, i, a[100], big;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        printf("Enter the value: ");
        scanf("%d", &a[i]);
    }
    big = a[0];
    for (i=1; i<n; i++)
    {
        if (a[i]>big)
        {
            big = a[i];
        }
    }
    printf("The biggest number is %d", big);
    return 0;
}
