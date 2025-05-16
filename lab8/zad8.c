#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i, k, znachvib;
FILE *f1, *f2;

struct humen{
    char name[30];
    char surname[30];
    int year;
    char gender;
    float height;
    int index;
};

struct humen A[1000], B[1000];

int sravn(const void *a, const void *b) {
	while (znachvib != 5){
		printf("Vvedi po chem stravn(name - 0, surn - 1, year - 2, gend - 3, hight - 4, exit - 5)\n");
		scanf("%d", &znachvib);
		if (znachvib == 0) return ((struct humen *)a)->year - ((struct humen *)b)->year;;
		if (znachvib == 1) return strcmp(((struct humen *)a)->name, ((struct humen *)b)->name);
		if (znachvib == 2) return strcmp(((struct humen *)a)->surname, ((struct humen *)b)->surname);
		if (znachvib == 3) return ((struct humen *)a)->gender - ((struct humen *)b)->gender;
		if (znachvib == 4) {
			if (((struct humen *)a)->height < ((struct humen *)b)->height) return -1;
	    	if (((struct humen *)a)->height > ((struct humen *)b)->height) return 1;
	    	return 0;
		}	
	}
}



int main(int argc, char *argv[]) {
	f1 = fopen("vvod8.txt", "rt");
    int n = 0;
    while ((fscanf(f1, "%s %s %d %c %f", A[i].name, A[i].surname, &A[i].year, &A[i].gender, &A[i].height)) != EOF) {
        i++;
    }
    fclose(f1);
    k = i;
	
	memcpy(B, A, sizeof(A));
	
	qsort(B, 5, sizeof(struct humen), sravn);
		
		
	printf("Vivod:\n");
	for (i = 0; i < k; i++) {
	    printf("%s %s %d %c %.2f\n", B[i].name, B[i].surname, B[i].year, B[i].gender, B[i].height);
	}
	printf("\n");
	return 0;
}
