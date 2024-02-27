#include <stdio.h>

int main()
{
    int a = 11;
    int *p, **pp;

    printf("a: %d, &a: %p\n", a, (void*)&a);

    p = &a;
    printf("p: %p, *p: %d, &p: %p\n", (void*)p, *p, (void*)&p);

    pp = &p;
    printf("pp: %p, **pp: %d, &pp: %p\n", (void*)pp, **pp, (void*)&pp);

    return 0;
}
