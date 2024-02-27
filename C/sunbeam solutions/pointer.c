#include <stdio.h>
int main()
{
    int a = 11;
    int *p, *pi, **pp;

    printf("a: %d, &a: %u", a, &a);

    *p = &a;
    printf("p: %u, *p: %u, &p: %u", p, *p, &p);

    *pi = &p;
    printf("pi: %u, *pi: %u, &pi: %u", pi, *pi, &pi);

    **pp = &p;
    printf("pp: %u, **pp: %u, &pp: %u", pp, **pp, &pp);
    return 0;
}