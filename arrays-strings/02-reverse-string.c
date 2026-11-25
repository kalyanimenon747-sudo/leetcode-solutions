#include <stdio.h>
#include <string.h>
#include <assert.h>

void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main(void) {
    // Test 1: Typical odd-length string
    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s1, 5);
    assert(memcmp(s1, (char[]){'o', 'l', 'l', 'e', 'h'}, 5) == 0);

    // Test 2: Even-length string
    char s2[] = {'H', 'a', 'n', 'n', 'a', 'h'};
    reverseString(s2, 6);
    assert(memcmp(s2, (char[]){'h', 'a', 'n', 'n', 'a', 'H'}, 6) == 0);

    // Test 3: Edge case (single character)
    char s3[] = {'a'};
    reverseString(s3, 1);
    assert(s3[0] == 'a');

    printf("All local tests passed for 02-reverse-string.c!\n");
    return 0;
}