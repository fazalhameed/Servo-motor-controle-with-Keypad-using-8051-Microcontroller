#include <reg52.h>
#include "lcd.h"
#include "keypad.h"
#include "servo.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "intrins.h"

unsigned int angle = 0;
extern char key;
int index=0;
char array[3];

void main()
{
	
	unsigned char loc = 6;
  lcd_init ();

	while(1)
	{
		
    lcd_set_cursor(0, 0);            
    lcd_string("Servo Motor Ctrl");   
    lcd_set_cursor(1, loc);        
    key = keypad();                 


    if (key != '=' && key != '\0')      
	{
    lcd_set_cursor(1, loc);           

    lcd_char(key);     
   
    array[index] = key;               
    loc = loc + 1;
    index++;
    key = '\0';                     
}

    else if (key == '=')
		{
     timer_init();
     array[index] = '\0';	  
     angle = atoi(array);			          // Convert the array of characters to an integer 
     servo(angle);
   
     loc = 6;
     index = 0;
     key = '\0';
		}
	}
}