#include <stdio.h>
#include <mosquitto.h>
int main()
{
	/*Initilize the mosquitto lib. This should be done before anything else*/
    mosquitto_lib_init();
    printf("Hello\n");
	/*This is where you are implementing your code*/
    return 0;
}