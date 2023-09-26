
#include <stdint.h>
#define RCC_BASE     0x40021000
#define GPIOA_BASE   0x40010800
typedef volatile unsigned int vint32_t;
#define RCC_APB2ENR   *(volatile uint32_t*) (RCC_BASE+0x18)
#define GPIOA_CRH     *(volatile uint32_t*) (GPIOA_BASE+0x04)
#define GPIOA_ODR     *(volatile uint32_t*) (GPIOA_BASE+0x0C)

typedef union {

	vint32_t all_fields;
	struct {
		vint32_t reserved:13;
		vint32_t pin_13:1 ;

	}PIN;

}R_ODR_t;

volatile R_ODR_t * R_ODR = (volatile R_ODR_t *)(GPIOA_BASE+0x0C);

int main(void)
{

	RCC_APB2ENR |= 1<<2; //ENABLE CLOCK
	GPIOA_CRH   &=0xff0fffff; //kept all the bits as they were and made that bit = 0
	GPIOA_CRH   |=0x00200000; //kept all the bits as they were and made that bit = 2

	while(1)
	{
		//GPIOA_ODR  |= 1<<13; //SET BIT 13
		R_ODR->PIN.pin_13 = 1;
		for        (int i =0;i<5000;i++);
		//GPIOA_ODR  &= !(1<<13); //CLEAR BIT 13
		R_ODR->PIN.pin_13 = 0;
		for        (int i =0;i<5000;i++);
	}
return 0;

}
