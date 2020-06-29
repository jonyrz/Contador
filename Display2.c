//Rendon Zamora Jonathan Omar
#INCLUDE <16F877A.H>//DECLARACIÓN DEL MICROCONTROLADOR A USAR 
#USE  DELAY  (CLOCK=4000000)//DECLARACIÓN  DEL CRISTAL
#FUSES XT,NOWDT,PUT,NOLVP,NOBROWNOUT,NOWRT,NOPROTECT

#BYTE TRISA = 0X85 
#BYTE PORTA = 0X05
#BYTE TRISB = 0X86
#BYTE PORTB = 0X06

INT CONT=0;

VOID main(){

      TRISA=0X01;
      TRISB=0X00;
      PORTB=0X00;
      PORTA=0X00;

      WHILE(TRUE){
      
            IF(bit_test(PORTA,0)==1){
                  CONT++; 
                  IF (CONT==10)
                  CONT=0;
                  PORTB=CONT;
                  //WHILE(bit_test(PORTA,0)==1);
            }
      }
}
   