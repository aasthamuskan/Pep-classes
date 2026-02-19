#include <stdio.h>
int main() {
    char str[] = "hello world";

    char *left = str;
    char *right = str;

    // Move right pointer to end of string
find_end:
    if (*right == '\0')
        goto prepare_reverse;
    right++;
    goto find_end;

prepare_reverse:
    right--;  // move back from '\0'

reverse:
    if (left >= right)
        goto done;

    // XOR Swap
    *left = *left ^ *right;
    *right = *left ^ *right;
    *left = *left ^ *right;

    left++;
    right--;
    goto reverse;

done:
    printf("Reversed string: %s\n", str);
    return 0;
}
