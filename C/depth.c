#include <stdio.h>

int main(void)
{
    recurse2(0);
    return 0;
}
int recurse(int depth)
{
    printf("%d\n", depth);
    return recurse(depth + 1);
}
void recurse2(int depth)
{
    printf("%d\n", depth);
    recurse(depth + 1);
}
