#include <stdio.h>

int recurse(int depth);
int main(void)
{
    recurse(0);
    return 0;
}
int recurse(int depth)
{
    printf("%d\n", depth);
    return recurse(depth + 1);
}
