#include <stdio.h>
#include <assert.h>

int search(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main(void) {
    // Test 1: Target present in sorted array (index 4)
    int nums1[] = {-1, 0, 3, 5, 9, 12};
    assert(search(nums1, 6, 9) == 4);

    // Test 2: Target absent from sorted array (-1)
    assert(search(nums1, 6, 2) == -1);

    // Test 3: Edge case (single-element array, found and not found)
    int nums2[] = {5};
    assert(search(nums2, 1, 5) == 0);
    assert(search(nums2, 1, -5) == -1);

    printf("All local tests passed for 01-binary-search.c!\n");
    return 0;
}