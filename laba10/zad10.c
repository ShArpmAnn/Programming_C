#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h> 


#define FIND_MAX(arr, count, maxv, sum) { \
	int i;\
    maxv = INT_MIN;\
    for (i = 0; i < count; i++) {\
    	sum += arr[i];\
        if (arr[i] > maxv) {\
            maxv = arr[i];\
        }\
    }\
    sum = sum / count;\
}


int chnumbers(char *input, int *numbers) {

    char *chastv;
    char *rest = input;
    int count = 0;

    while ((chastv = strtok_r(rest, " ", &rest)) != NULL) {
    	numbers[count] = atoi(chastv);
        count++;
    }
 	return count;
}

int main() {
    char input[256];
    int numbers[100]; 
    int count;
    int max, sum;

    printf("Vvedi stroku: ");
    fgets(input, sizeof(input), stdin);


    count = chnumbers(input, numbers); 

    if (count > 0) {
        FIND_MAX(numbers, count, max, sum); 
        printf("Vvivod: %d %d\n", max, sum);
    } 

    return 0;
}
