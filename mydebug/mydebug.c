#include <stdio.h>

int main(){
#ifdef MYDEBUG 
	printf("MYDEBUG is defined %d \n",MYDEBUG);
#else
	printf("MYDEBUG is  not defined %d \n",MYDEBUG);
#endif
	
return 0;
}
