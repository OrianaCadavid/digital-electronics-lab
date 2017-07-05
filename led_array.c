#include <16f887.h> 
#use delay (clock=8M) 
#FUSES NOWDT,XT,NOPROTECT,NOBROWNOUT 
#use standard_io(B) 

void main() {
  output_B(0b0000000);
  while (1) {
    output_B(0b10000001); 
    delay_ms(300);
    output_B(0b01000010); 
    delay_ms(300);
    output_B(0b00100100); 
    delay_ms(300);
    output_B(0b00011000); 
    delay_ms(300);
    output_B(0b00011000); 
    delay_ms(300);
    output_B(0b00100100); 
    delay_ms(300);
    output_B(0b01000010); 
    delay_ms(300);
    output_B(0b10000001); 
    delay_ms(300);
  }
}
