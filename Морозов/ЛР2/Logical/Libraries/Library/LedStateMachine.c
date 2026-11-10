

#include <bur/plctypes.h>
#ifdef __cplusplus
	extern "C"
	{
#endif
#include "Library.h"
#ifdef __cplusplus
	};
#endif
/* Tut mog bit vash commentariy */
void LedStateMachine(struct LedStateMachine* inst)
{
	
	switch(inst->state){
		case 0:
			inst->led1 = 0;
			inst->led1 = 0;
			inst->led1 = 0;
			inst->led1 = 0;
			break;
		case 1:
			if (inst->timer < 5){
				inst->led1 = 0;
				inst->led2 = 0;
				inst->led3 = 0;
				inst->led4 = 0;
				inst->timer = inst->timer + 1;
				break;
			}
			if (inst->timer < 10){
				inst->led1 = 1;
				inst->led2 = 1;
				inst->led3 = 1;
				inst->led4 = 1;
				inst->timer = inst->timer + 1;
				break;
			}
			inst->timer = 0;
			break;
		case 2:
			inst->led1 = 0;
			inst->led2 = 0;
			inst->led3 = 0;
			inst->led4 = 0;
			break;
		case 3:
			inst->led1 = 1;
			inst->led2 = 1;
			inst->led3 = 1;
			inst->led4 = 1;
			break;
		case 4:
			inst->led1 = 1;
			inst->led2 = 0;
			inst->led3 = 0;
			inst->led4 = 0;
			break;
		case 5:
			inst->led1 = 1;
			inst->led2 = 1;
			inst->led3 = 1;
			inst->led4 = 0;	
			break;
	
		case 6:
			inst->led1 = 1;
			inst->led2 = 1;
			inst->led3 = 0;
			inst->led4 = 0;
			break;
		case 7:
			inst->led1 = 1;
			inst->led2 = 1;
			inst->led3 = 0;
			inst->led4 = 0;
			break;
		case 8:
			inst->led1 = 1;
			inst->led2 = 1;
			inst->led3 = 1;
			inst->led4 = 0;
			break;
		case 9:
			inst->led1 = 1;
			inst->led2 = 0;
			inst->led3 = 0;
			inst->led4 = 0;
			break;
				
			
	}
}
