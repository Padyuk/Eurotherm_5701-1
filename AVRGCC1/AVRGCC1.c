#define XTAL 16000000L
#include <avr/io.h>
int main(void)
{
unsigned char A=0x00;
//unsigned char B=0;
PORTC=0x00;
 DDRC=0x01;
// DDRE=0x00;
// PORTE=0x01;
 DDRD=0x00;
 PORTD=0x06;
 while(1)
 {

	A=PIND;
    A=A&0x06;
	A=A|0x01;


	PORTC=0x01;  //16
//	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");


    if(A==0x01)
	{PORTC=0x00;}
 	asm("nop");
	asm("nop");   //33
	asm("nop");


    if(A==0x03)
	{PORTC=0x00;}
 	asm("nop");
	asm("nop");
	asm("nop");   //50
	asm("nop");



    if(A==0x05)
	{PORTC=0x00;}
 	asm("nop");
 	asm("nop");   //66
 	asm("nop");


    if(A==0x07)
	{PORTC=0x00;}
	asm("nop");   //free
	asm("nop");
	asm("nop");
 	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	asm("nop");
	


//	asm("nop");


	
	



//    B=PINB;
//    B=B&0x01;


 }
}
