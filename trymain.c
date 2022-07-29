#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv) {
   printf("PATH : %s\n\n\n\n", _getenv("PATH"));
   printf("HOME : %s\n\n\n\n", _getenv("HOME"));
   printf("ROOT : %s\n\n\n\n", _getenv("ROOT"));

   return(0);
}
