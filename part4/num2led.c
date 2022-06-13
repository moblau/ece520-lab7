#include <stdio.h>
#include "platform.h"
#include "xil_printf.h"
#include "xbasic_types.h"
#include "xparameters.h"

Xuint32 *baseaddr_p = (Xuint32 *)0x43c00000;


int main()
{
	init_platform();
	int num;
	while (1){
		xil_printf("Enter a number (0-15) \n\r");
		scanf("%d", &num);
		*(baseaddr_p) = (Xuint32 *) num;
	}
	cleanup_platform();
	return 0;
}
