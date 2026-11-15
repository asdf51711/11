
#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';

    int *iptr;
    iptr = &i;

    char *cptr;
    cptr = &c;

    int *iptr2;
    iptr2 = iptr;

    printf("i : %p\n%p (size:%i)\n",
           (void *)iptr, (void *)&i, (int)sizeof(iptr));

    printf("c : %p\n%p (size:%i)\n",
           (void *)cptr, (void *)&c, (int)sizeof(cptr));

    printf("iptr2 : %p, %i\n",
           (void *)iptr2, *iptr2);

    return 0;
}
