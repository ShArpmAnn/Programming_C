#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char a[81];
	int i;
	
	
	printf("Vvedi stroku do 80 simvolov: ");
	fgets(a, 81, stdin);
	for (i = 0; i < (strlen(a)); i++){
		if (a[i] == 'a') a[i] = 'A';
		if (a[i] == 'b') a[i] = 'B';

	}
		
	printf("%s", a);
	
	
	return 0;
}
