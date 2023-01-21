#include <stdio.h>
#include <stdlib.h>

char randchar() {
       char randomChar = " ";
       int randNum = 0;
       

       randNum = 26 * (rand() / (RAND_MAX + 1.0));
       randNum = randNum+65;
       randomChar = (char) randNum;
       return randomChar;
   }
  
