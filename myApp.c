

#include "driver.h"
#include "interface.h"

int main(void)
{
	func1();
	func2("Let's start!");
	func2(APP_VER);
	
	interface_init("Some new interface!");

	printf("Just printing something.");

	printf("Adding first feature to this code");
	
	return 0;
}