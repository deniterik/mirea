
#include <bur/plctypes.h>


#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
	#include <stdlib.h>
	  
#endif

void _INIT ProgramInit(void)
{	
	EVIRD.ENABLE = 1;
	LedState.state = DoorState.state_out;
	
}

void _CYCLIC ProgramCyclic(void)
{
	DriveStateMachine(&EVIRD);
	DoorStateMachine(&DoorState);
	LedState.state = DoorState.state_out;
	LedStateMachine(&LedState);
	
}

void _EXIT ProgramExit(void)
{

}

