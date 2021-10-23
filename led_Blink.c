/* -------------------Project Name--------------------
										
										Led Blinking of port P1
										
	Here we will use P89V51RD2 microcontroller 				
 ----------------------------------------------------	*/

# include<reg52.h>												/* Register Header files for registers address */

void ms_delay (unsigned int time );				/* Prototyping of delay function */


/* Main start */

void main()
{
		/* While start */
		
	while(1)
		{
			P1 = 0xff;  						/* set logic 1 to entire port to make led on */
				
			ms_delay(1000);					/* Calling dealy function for 1 sec */
			
			P1 = 0x00;							/* set logic 0 to entire port to make led off */
			
			ms_delay(1000);					/* Calling delay function for 1 sec */
			
		}
		
		/* While End */
}

/* Main ends Here */


/* Defination of ms_delay function starts */


void ms_delay (unsigned int time)
{
	unsigned int i, j;
	
	/* if we pass time argument equal to 1000 then (time * 1 ms) equal to 1 sec of 
		 dealy will generate */
	

	for (i = 0; i < time; i++)
	{
		for (j = 0; j < 113; j++)					/* This will generate delay of 1 m.s. */
		{
		}
	}
	
}
