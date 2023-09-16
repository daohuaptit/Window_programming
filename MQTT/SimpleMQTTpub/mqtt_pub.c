#include <stdio.h>
#include <mosquitto.h>
int main()
{
	/*Initilize the mosquitto lib. This should be done before anything else*/
    mosquitto_lib_init();
    printf("Hello\n");
    return 0;
}