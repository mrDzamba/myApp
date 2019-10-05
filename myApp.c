

#include "driver.h"
#include "interface.h"


int main(void)
{
	func1();
	func2("Let's start!");
	func2(APP_VER);
	
	interface_init("Some new interface!");
	
	return 0;
}