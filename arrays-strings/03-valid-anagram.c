#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

bool isAnagram(char* s, char* t) {
    size_t len_s = strlen(s);
    size_t len_t = strlen(t);
    if (len_s != len_t) {
        return false;
    }

    int counts[26] = {0};
    for (size_t i = 0; i < len_s; i++) {
        counts[s[i] - 'a']++;
        counts[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            return false;
        }
    }
    return true;
}

int main(void) {
    // Test 1: Typical valid anagram
    assert(isAnagram("anagram", "nagaram") == true);

    // Test 2: Not an anagram
    assert(isAnagram("rat", "car") == false);

    // Test 3: Edge case (different lengths)
    assert(isAnagram("ab", "a") == false);

    // Test 4: Edge case (single character match)
    assert(isAnagram("z", "z") == true);

    printf("All local tests passed for 03-valid-anagram.c!\n");
    return 0;
}
