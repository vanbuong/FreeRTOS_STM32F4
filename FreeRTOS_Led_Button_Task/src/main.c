/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/


#include "stm32f4xx.h"
			

int main(void)
{
	// Enable CYCCNT in DWT_CTRL to run SEGGER SYSVIEW
	DWT->CTRL |= (1 << 0);

	// Start recording event
	SEGGER_SYSVIEW_Conf();
	SEGGER_SYSVIEW_Start();

	for(;;);
}
