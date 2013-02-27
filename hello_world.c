

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <peekpoke.h>
#include <ctype.h>


#include "MyLib.h"


 
DubStep some_track; // I can create a new one here or...

int main(void)
{
    Variable = 10;
    something_public = 111;

    
    some_track.dub = 4444; // ...and use it here... 
    
    
    my_track.dub = 777; // ...and go ahead and assume this exists... 
    					// ...because we created it elsewhere
    
    
    //printf("%d\n", Variable);
    
    printf("should succeed: %d\n", something_public); //this doesn't work is if successfully private
    //printf("should fail: %d\n", something_private); //this doesn't work is if successfully private
    
    printf("some_track.dub = %d\n", some_track.dub); 
    printf("my_track.dub = %d\n", my_track.dub);
    
	//crapola();
    
    return 0;
}