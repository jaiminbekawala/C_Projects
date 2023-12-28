//WAP to count positve and negative numbers in a set.
#include<stdio.h>

void main()
{
    float nums[5], n = 0, p = 0;
    int count = 0;
    printf("Enter a set of Numbers: \n");
    for (int j = 0; j < 5; j++)
    {
        scanf("%f", &nums[j]);
        if(nums[j] == 0)
            break;
    }
    printf("%d", count);
    for (int i = 0; i < 5; i++)
    {
        if (nums[i] < 0)
        {
            printf("%.2f is -ve", nums[i]);
            n++;
        }
        else
        {
            printf("%.2f is +ve", nums[i]);
            p++;
        }
    }
    printf("\n Negative numbers: %.2f", n);
    printf("\n Positive numbers: %.2f", p);
}