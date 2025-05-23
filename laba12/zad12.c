#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */




int main(int argc, char *argv[]) {
  char vvod[12];
  char vvod_copy[12];
  struct tm t;
  int i, k, a;

  printf("Vvedi gggg/gggg.mm/gggg.mm.dd/now: ");

  fgets(vvod, sizeof(vvod), stdin);
	vvod[strcspn(vvod, "\n")] = 0;



  if (strcmp(vvod, "now") == 0) {
      time_t now = time(NULL);
      struct tm *tm_info = localtime(now);

      printf("Local time and date: %s", asctime(tm_info));
      return 0;
  }

  strcpy(vvod_copy, vvod);
  char *token;
  char *days[] = {"Sun", "Mon", "Th", "Wed", "Thuth", "Fr", "Std"};
  char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  int numdays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  token = strtok(vvod_copy, ".");

  if (token != NULL) {
        t.tm_year = atoi(token) - 1900;

        token = strtok(NULL, ".");
        if (token != NULL) {
            t.tm_mon = atoi(token) - 1;

            token = strtok(NULL, ".");
            if (token != NULL) {
                t.tm_mday = atoi(token);
                t.tm_hour = 12;
                t.tm_min = 0;
                t.tm_sec = 0;
                t.tm_isdst = -1;
				mktime(&t);

                printf("Day week: %s\n", days[t.tm_wday]);
            } 
			else {
                
	    		if (t.tm_mon == 1 && ((t.tm_year + 1900) % 4 == 0 && ((t.tm_year + 1900) % 100 != 0 || (t.tm_year + 1900) % 400 == 0)))  k = 29;
	    		else k = numdays[t.tm_mon];
	    		
	    		for (i = 1; i < k+1; i++){
	    			t.tm_mday = i;
	    			t.tm_hour = 12;
                	t.tm_min = 0;
                	t.tm_sec = 0;
                	t.tm_isdst = -1;
	    			mktime(&t);
	    			printf("Day Month: %d %s\n", i, days[t.tm_wday]);
				}
            }
        } 
		else {
			for (a = 0; a < 12; a++){
				t.tm_mon = a;
				printf("Month: %s\n", months[a]);
	    		if (t.tm_mon == 1 && ((t.tm_year + 1900) % 4 == 0 && ((t.tm_year + 1900) % 100 != 0 || (t.tm_year + 1900) % 400 == 0)))  k = 29;
	    		else k = numdays[t.tm_mon];
	    		for (i = 1; i < k+1; i++){
	    			t.tm_mday = i;
	    			t.tm_hour = 12;
                	t.tm_min = 0;
                	t.tm_sec = 0;
                	t.tm_isdst = -1;
	    			mktime(&t);
	    			printf("Day Month: %d %s\n", i, days[t.tm_wday]);
				}	
	    	
	    	
	    	}
        }
    } 

  return 0;
}
