//based on https://www.geeksforgeeks.org/morse-code-implementation/


// CPP program to demonstrate Morse code
#include <iostream>
#include <string.h>

using namespace std;
int ledPin =2;
char code;
char* s; 
char* c;

// function to encode a alphabet as
// Morse code






void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);

} 

 
    // character by character print
    // Morse code
    
 
// Driver's code
/*int main()
{
    


*/

void loop() {
  s="hellow word";
  // put your main code here, to run repeatedly:
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    //code=morseCode(s);
    

    for (int a=0;a<strlen(s);a=a+1){
      Serial.println(s[a]);
      switch (s[a]) {
    case 'a':
        c = ".-   ";
        break;
    case 'b':
        c = "-... ";
        break;
    case 'c':
        c = "-.-. ";
        break;
    case 'd':
        c = "-..   ";
        break;
    case 'e':
         c =  ".    ";
         break;
    case 'f':
         c =  "..-. ";
         break;
    case 'g':
         c =  "--.  ";
         break;
    case 'h':
         c =  ".... ";
         break;
    case 'i':
         c =  "..   ";
         break;
    case 'j':
         c =  ".--- ";
         break;
    case 'k':
         c =  "-.-  ";
         break;
    case 'l':
         c =  ".-.. ";
         break;
    case 'm':
         c =  "--   ";
         break;
    case 'n':
         c =  "-.   ";
         break;
    case 'o':
         c =  "---  ";
         break;
    case 'p':
         c =  ".--. ";
         break;
    case 'q':
         c =  "--.- ";
         break;
    case 'r':
         c =  ".-.  ";
         break;
    case 's':
         c =  "...  ";
         break;
    case 't':
         c =  "-    ";
    case 'u':
         c =  "..-  ";
    case 'v':
         c =  "...- ";
    case 'w':
         c =  ".--  ";
    case 'x':
         c =  "-..- ";
    case 'y':
         c =  "-.-- ";
    case 'z':
        c =  "--.. ";
    case '1':
         c =  ".----";
    case '2':
         c =  "..---";
    case '3':
         c =  "...--";
    case '4':
         c =  "....-";
    case '5':
         c =  ".....";
    case '6':
         c =  "-....";
    case '7':
         c =  "--...";
         break;
    case '8':
         c =  "---..";
         break;
    case '9':
         c =  "----.";
         break;
    case '0':
         c =  "-----";
         break;
      }
      Serial.println(c);
      for(int b=0;b<6;b=b+1){
      if (c[b]=='-')
      {digitalWrite(ledPin, LOW);
      delay(1000);}
      else if(c[b]=='.')
      {digitalWrite(ledPin, HIGH);
      delay(1000);}
    
    }
    
     

}
//rial.println('pętla wykonana');
}
