

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <peekpoke.h>
#include <ctype.h>


#include "MyLib.h"

int main(void)
{
    Variable = 10;
    something_public = 1;
    
    printf("%d\n", Variable);
    //printf("%d\n", something_private); //this doesn't work is if successfully private
    printf("%d\n", something_public);
    
	crapola();
    
    return 0;
}