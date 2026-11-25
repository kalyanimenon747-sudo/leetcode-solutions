#include <stdio.h>
#include <string.h>
#include <assert.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    if (strsSize == 0 || strs[0][0] == '\0') {
        strs[0][0] = '\0';
        return strs[0];
    }

    for (int i = 0; strs[0][i] != '\0'; i++) {
        char ch = strs[0][i];
        for (int j = 1; j < strsSize; j++) {
            if (strs[j][i] == '\0' || strs[j][i] != ch) {
                strs[0][i] = '\0';
                return strs[0];
            }
        }
    }

    return strs[0];
}

int main(void) {
    // Test 1: Typical case ("flower", "flow", "flight" -> "fl")
    char s1a[] = "flower", s1b[] = "flow", s1c[] = "flight";
    char* t1[] = {s1a, s1b, s1c};
    assert(strcmp(longestCommonPrefix(t1, 3), "fl") == 0);

    // Test 2: No common prefix ("dog", "racecar", "car" -> "")
    char s2a[] = "dog", s2b[] = "racecar", s2c[] = "car";
    char* t2[] = {s2a, s2b, s2c};
    assert(strcmp(longestCommonPrefix(t2, 3), "") == 0);

    // Test 3: Edge case (single string -> whole string)
    char s3a[] = "alone";
    char* t3[] = {s3a};
    assert(strcmp(longestCommonPrefix(t3, 1), "alone") == 0);

    printf("All local tests passed for 05-longest-common-prefix.c!\n");
    return 0;
}