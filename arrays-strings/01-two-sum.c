#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *ans = malloc(2 * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                ans[0] = i;
                ans[1] = j;
                *returnSize = 2;
                return ans;
            }
        }
    }

    *returnSize = 0;
    free(ans);
    return NULL;
}

int main(void) {
    int returnSize = 0;

    // Test 1: Typical case
    int nums1[] = {2, 7, 11, 15};
    int* res1 = twoSum(nums1, 4, 9, &returnSize);
    assert(res1 != NULL && returnSize == 2);
    assert(res1[0] == 0 && res1[1] == 1);
    free(res1);

    // Test 2: Edge case (duplicate elements)
    int nums2[] = {3, 3};
    int* res2 = twoSum(nums2, 2, 6, &returnSize);
    assert(res2 != NULL && returnSize == 2);
    assert(res2[0] == 0 && res2[1] == 1);
    free(res2);

    // Test 3: Edge case (no valid pair)
    int nums3[] = {1, 2, 3};
    int* res3 = twoSum(nums3, 3, 10, &returnSize);
    assert(res3 == NULL && returnSize == 0);

    printf("All local tests passed for 01-two-sum.c!\n");
    return 0;
}