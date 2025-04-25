#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int i;
struct humen {
    char imen[30];
    char famil[30];
    int year;
};
struct humen A[4], B[4];



int sravnYear(const void *a, const void *b) {
    return ((struct humen *)a)->year - ((struct humen *)b)->year;
}


int main(int argc, char *argv[]) {
	
	for (i = 0; i < 4; i++) {
        printf("Vvedi Ime, familia i god rozdenia %d: ", i + 1);
        scanf("%s %s %d", A[i].imen, A[i].famil, &A[i].year);
    }
	
	
	strcpy(B, A);
    
    qsort(B, 4, sizeof(struct humen), sravnYear);

    
    printf("Vivod:\n");
    for (i = 0; i < 4; i++) {
        printf("%s %s %d\n", B[i].imen, B[i].famil, B[i].year);
    }
	
	
	return 0;
}
