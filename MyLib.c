// MyLib.c

#include <stdio.h> //printf below needs this



#define PUBLIC /* empty */
#define PRIVATE static 

int Variable;

PUBLIC int something_public = 1;

PRIVATE int something_private = 69;

// soem func

void crapola(void){
	printf("dat private: %i\n", something_private);

}//end func