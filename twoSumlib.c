    #include <stdlib.h>
    int* twoSum(int* nums, int numsSize, int target, int* returnSize)
        {
        int *result = (int *)malloc(2*sizeof(int));
        *returnSize = 2;
        int i,j;
        for(i=0;i<numsSize;i++)
            {
            for(j=i+1;j<numsSize;j++)
                {
                if(target == nums[i]+nums[j])
                    {
                    result[0]=i;
                    result[1]=j;
                    return result;
                    }
                }
            }
            return result;
        }