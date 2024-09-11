//SELECTION SORTING 

#include<stdio.h>

int main()
{
    int a;
    printf("ENTER SIZE OF ARRAY : ");
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        printf("ENTER %d ELEMENT : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nGIVEN ARRAY : ");
    for(int i=0;i<a;i++)
    {
        printf("\t%d",arr[i]);
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nSORTED ARRAY : ");
    for(int i=0;i<a;i++)
    {
        printf("\t%d",arr[i]);
    }
}