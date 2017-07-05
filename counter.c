#include <16f887.h>
#use delay (clock=8M)
#FUSES NOWDT,NOPUT,NOPROTECT,NOBROWNOUT,INTRC,NOLVP
#USE standard_io(A)
#USE standard_io(B)
#USE standard_io(C)

int
const display[10] = {
  0x3F,
  0x06,
  0x5B,
  0x4F,
  0x66,
  0x6D,
  0x7D,
  0x07,
  0x7F,
  0X6F,
}; 
void main() {
  int ud = 0, dec = 0; 
  output_B(0); 
  for (;;) 
  {
    for (dec = 0; dec < 10; dec++) {
      for (ud = 0; ud < 10; ud++) {
        output_A(0x02); 
        output_B(display[ud]); 
        delay_ms(20);
        if (dec == 0)
          output_A(0x03); s
        else
          output_A(0x01); 
        output_B(display[dec]); 
        delay_ms(20);

      }
    }
  }
}
