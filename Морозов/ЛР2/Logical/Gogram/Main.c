
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	led_1 = 1;
	led_2 = 0;
	k = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	if(k <4)
	{	
		led_1 = !led_1;
		
	}
	k++;
	if (k ==7)
	{
		k = 0;
	}
	led_2 = !led_2;
}

void _EXIT ProgramExit(void)
{

}

