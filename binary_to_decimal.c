#include <16f887.h>
#use delay (clock=8M)
#FUSES INTRC,NOWDT,NOPROTECT,NOPUT,NOBROWNOUT
#use standard_io(A)
#use standard_io(C)

void main() {
    output_C(0b00000000); 

    while (true)
    {
      if (input(PIN_A0) == false && input(PIN_A1) == false && input(PIN_A2) == false) {
        output_C(0b00111111); 
      }
      if (input(PIN_A0) == false && input(PIN_A1) == false && input(PIN_A2) == true) {
        output_C(0b00000110); 
      }
      if (input(PIN_A0) == false && input(PIN_A1) == true && input(PIN_A2) == false) {
        output_C(0b01011011);
      }
      if (input(PIN_A0) == false && input(PIN_A1) == true && input(PIN_A2) == true) {
        output_C(0b01001111); 
      }
      if (input(PIN_A0) == true && input(PIN_A1) == false && input(PIN_A2) == false) {
        output_C(0b01100110); 
      }
      if (input(PIN_A0) == true && input(PIN_A1) == false && input(PIN_A2) == true) {
        output_C(0b01101101); 
      }
      if (input(PIN_A0) == true && input(PIN_A1) == true && input(PIN_A2) == false) {
        output_C(0b01111101); 
      }
      if (input(PIN_A0) == true && input(PIN_A1) == true && input(PIN_A2) == true) {
        output_C(0b00000111); 
      }
    
    }
    
}
    
