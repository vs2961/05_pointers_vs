#include <stdio.h>

int main() {
    // Step 1
    char ch = 'a';
    int num = 682;
    long long_num = 238;
    
    // Step 2
    printf("decimal char: %d\n", ch);
    printf("hex char: %x\n", ch);
    
    printf("decimal int: %d\n", num);
    printf("hex int: %x\n", num);

    printf("decimal long: %d\n", long_num);
    printf("hex long: %x\n", long_num);

    // Step 3
    char *chp = &ch;
    int *nump = &num;
    long *long_nump = &long_num;

    // Step 4
    printf("%p\n", chp);
    printf("%p\n", nump);
    printf("%p\n", long_nump);

    // Step 5
    *chp = 'b';
    *nump = 2;
    *long_nump = 4;

    printf("Modified char: %c\n", ch);
    printf("Modified int: %d\n", num);
    printf("Modified long: %ld\n", long_num);

    // Step 6
    unsigned int u = 2178000000;
    int *u_intp = &u;
    char *u_charp = &u;

    // Step 7
    printf("int pointer: %p points to %u\n", u_intp, *u_intp);
    printf("char pointer: %p points to %u\n", u_charp, *u_charp);
   

    // Step 8
    printf("Hex unsigned: %x\n", u);
    printf("Decimal unsigned: %u\n", u);

    // Step 9
    int i;
    for (i = 0; i < 4; i++) {
        printf("Byte %d unsigned: %hhu\n", i + 1, *(u_charp + i));
        printf("Byte %d hex: %hhx\n", i + 1, *(u_charp + i));
    }

    // Step 10
    for (i = 0; i < 4; i++) {
        *(u_charp + i) += 1;
    }
    printf("Modified Hex: %x\n", u);
    printf("Modified Unsigned: %u\n", u);

    // Step 11
    for (i = 0; i < 4; i++) {
        *(u_charp + i) += 16;
    }
    printf("Modified Hex: %x\n", u);
    printf("Modified Unsigned: %u\n", u);
}
