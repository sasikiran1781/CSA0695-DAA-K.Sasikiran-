//KNAPSACK USING GREEDY ALGORITHM

#include <stdio.h>

void knapsack(int n, int weight[], int value[], int capacity) 
{
    float totalValue = 0.0;
    int remainingCapacity = capacity;

    // Sort items by value/weight ratio in descending order
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            float ratio1 = (float)value[j] / weight[j];
            float ratio2 = (float)value[j + 1] / weight[j + 1];
            if (ratio1 < ratio2) {
                int tempWeight = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = tempWeight;

                int tempValue = value[j];
                value[j] = value[j + 1];
                value[j + 1] = tempValue;
            }
        }
    }

    // Perform the greedy approach to maximize the value
    for (int i = 0; i < n; i++) 
    {
        if (weight[i] <= remainingCapacity) 
        {
            totalValue += value[i];
            remainingCapacity -= weight[i];
        } 
        else 
        {
            totalValue += value[i] * ((float)remainingCapacity / weight[i]);
            break;
        }
    }

    printf("Maximum value in Knapsack = %.2f\n", totalValue);
}

int main() 
{
    int n = 3;  
    int weight[] = {10, 20, 30};  
    int value[] = {60, 100, 120};  
    int capacity = 50; 

    knapsack(n, weight, value, capacity);

    return 0;
}
