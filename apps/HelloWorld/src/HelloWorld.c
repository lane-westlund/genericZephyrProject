#include <stdio.h>
#include "HelloWorld.h"

void printHelloWorld(void)
{
	printf("Hello World! %s\n", CONFIG_BOARD_TARGET);
}