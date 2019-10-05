#include <stdio.h>
#include "interface.h"

int interface_init(void* in)
{
	printf ("\n new interface detected %s!", (char*) in);
	
	return 0;
}