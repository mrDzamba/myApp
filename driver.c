
#include "driver.h"

#include <stdio.h>
void func1(void)
{
	printf("\nfunc1!");
}
void func2(char* data)
{
	printf("\nfunc2: %s", data);
	FILE* f = 0;
	
	f = fopen("newFile.txt", "a");
	
	fprintf(f, "\nNew data in file");
	
	fclose(f);
}