#include"uart.h"
unsigned char string_buffer[100]="learn_in_depth:<MOHAMED_ELHADY>" ;
unsigned char const string_buffer1[100]="learn_in_depth:<MOHAMED_ELHADY>" ;

void main(void)
{
	
	Uart_Send_string(string_buffer);
}