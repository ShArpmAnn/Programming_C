#include <stdarg.h>
#include <stdio.h>
int sum(int count, ...) {
    va_list args;
    int resultsum = 0;
    
    int i;
    va_start(args, count);
   	
    for(i = 0; i < count; i++) {
        resultsum += va_arg(args, int);
    }
    va_end(args);
    return resultsum;
}

int max(int count, ...) {
    va_list args;

    int resultmax = 0;  
    int i, k;
    va_start(args, count);
   	
    for(i = 0; i < count; i++) {
    	k = va_arg(args, int);
        if (k > resultmax)	resultmax = k;
    }

    va_end(args);
    return resultmax;
}

int min(int count, ...) {
    va_list args;
    int resultmin = 1000000;
    
    int i, k;
    va_start(args, count);
   	
    for(i = 0; i < count; i++) {
    	k = va_arg(args, int);
        if (k < resultmin)	resultmin = k;
    }

    va_end(args);
    return resultmin;
}

double sra(int count, ...) {
    va_list args;
    double resultsum = 0;
    double resultsra = 0;
    
    int i;
    va_start(args, count);
   	
    for(i = 0; i < count; i++) {
        resultsum += va_arg(args, int);
    }
	printf("%lf \n", resultsum);		
	resultsra = resultsum / count;

    va_end(args);
    return resultsra;
}
