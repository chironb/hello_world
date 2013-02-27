// MyLib.c

#include <stdio.h> //printf below needs this

#include "MyLib.h" //i shouldnt have to do this???




DubStep my_track;


int Variable;

PUBLIC int something_public = 1;

PRIVATE int something_private = 69;

PRIVATE void crapola(void){
	printf("dat private: %i\n", something_private);

}//end func


