#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char exp[256];
    printf("Input viraz: (-123.5 + 4 - 456+56) ");
    fgets(exp, sizeof(exp), stdin);
    
    double result = 0;
    char *res = exp;
    int sign = 1;
    
    while (*res != "\0") {
        if (*res == ' ') {
			res++;
			continue;
		}
        
        if (*res == '+') {
            sign = 1;
            res++;
        } 
    	if (*res == '-') {
            sign = -1;
            res++;
        }
        
        char *end;
        double num = strtod(res, &end);
        if (res == end) {
        	break;
		}
        if  (sign == 1) result += num;
        if  (sign == -1) result -= num;
        res = end;
        sign = 1;  
    }
    
    printf("Result: %lf\n", result);
    return 0;
}
