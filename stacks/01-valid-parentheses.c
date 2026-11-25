#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

bool isValid(char* s) {
    size_t n = strlen(s);
    if (n % 2 != 0) {
        return false;
    }

    char* stack = (char*)malloc(n * sizeof(char));
    if (!stack) {
        return false;
    }

    int top = -1;
    for (size_t i = 0; i < n; i++) {
        char c = s[i];
        if (c == '(' || c == '[' || c == '{') {
            stack[++top] = c;
        } else {
            if (top < 0) {
                free(stack);
                return false;
            }
            char open = stack[top--];
            if ((c == ')' && open != '(') ||
                (c == ']' && open != '[') ||
                (c == '}' && open != '{')) {
                free(stack);
                return false;
            }
        }
    }

    bool valid = (top == -1);
    free(stack);
    return valid;
}

int main(void) {
    // Test 1: Typical valid nested and sequential brackets
    assert(isValid("()[]{}") == true);
    assert(isValid("([{}])") == true);

    // Test 2: Mismatched bracket types / wrong order
    assert(isValid("(]") == false);
    assert(isValid("([)]") == false);

    // Test 3: Edge cases (single bracket, closing-first)
    assert(isValid("(") == false);
    assert(isValid(")") == false);

    printf("All local tests passed for 01-valid-parentheses.c!\n");
    return 0;
}