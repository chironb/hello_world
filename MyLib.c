// MyLib.c

#include <stdio.h> //printf below needs this

//#include "MyLib.h" //i shouldnt have to do this???


#define PUBLIC /* empty */
#define PRIVATE static 


typedef struct {
	int dub;
	int step;
} DubStep ; //end typedef struct

//DubStep my_track;
//my_track->dub = 69;

PUBLIC DubStep my_track;



int Variable;

PUBLIC int something_public = 1;

PRIVATE int something_private = 69;


// soem func

PRIVATE void crapola(void){
	printf("dat private: %i\n", something_private);

}//end func


