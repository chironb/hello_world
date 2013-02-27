// MyLib.h

#ifndef MYLIB_H
#define MYLIB_H


#define PUBLIC /* empty */
#define PRIVATE static 



typedef struct DubStep {
	int dub;
	int step;
} DubStep; //end typedef struct



extern DubStep my_track;


extern int Variable;

extern int something_public;

extern void crapola(void);



#endif