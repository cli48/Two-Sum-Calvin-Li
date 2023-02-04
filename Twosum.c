#include<stdio.h>
#include <stdlib.h>
#include"twoSumlib.h"
int* twoSum(int* nums, int numsSize, int target, int* returnSize);

int main()
    {
    int A[5] = {2,7,11,15,10};
    int* returnsize;
    int* output;
    int target = 9;
    for(int i = 0;i<5;i++)
        {
        printf("%d\t",A[i]);
        }
        output = twoSum(A,5,target,returnsize);

        printf("[ %d , %d ]",output[0],*(output+1));

    return 0;
    }
