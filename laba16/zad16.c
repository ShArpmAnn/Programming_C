#include <stdio.h>


int bits_long(long num) {
	
    int c = 0, i;
    unsigned long j = 1;
    for (i = 0; i < sizeof(long)*8; i++) {
        if (num & (j << i))
            c++;
    }
    return c;
}


int bits_double(double num) {
    int c = 0, i,j;
    unsigned char *p = (unsigned char*)&num;
    for (i = 0; i < sizeof(double); i++) {
        unsigned char byte = p[i];
        for (j = 0; j < 8; j++) {
            if (byte & (1 << j))
                c++;
        }
    }
    return c;
}

int main() {
    long long_num;
    double double_num;


    printf("Vvedi long: ");
    scanf("%lld", &long_num);


    printf("Vvedi double: ");
    scanf("%lf", &double_num);


    int blong = bits_long(long_num);
    int bdouble = bits_double(double_num);


    printf("bits 1 in long: %d\n", blong);
    printf("bits 1 in double: %d\n", bdouble);

    return 0;
}
