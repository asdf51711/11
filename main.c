
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    char *pc;
    int *pi;
    double *pd;

    pc = (char *)(uintptr_t)10000;
    pi = (int *)(uintptr_t)10000;
    pd = (double *)(uintptr_t)10000;

    printf("증가 전\n");
    printf("pc = %p\n", (void *)pc);
    printf("pi = %p\n", (void *)pi);
    printf("pd = %p\n", (void *)pd);

    pc++;
    pi++;
    pd++;

    printf("\n증가 후\n");
    printf("pc = %p\n", (void *)pc);
    printf("pi = %p\n", (void *)pi);
    printf("pd = %p\n", (void *)pd);

    return 0;
}
