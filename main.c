#include <stdio.h>
#include "str.h"
#include "stable.h"
#include "ilist.h"
#include "scaner.h"
#include "parser.h"
#include "interpret.h"
#include "main.h"

int main(int argc, char** argv)
{
     
   if (argc == 1)
   {
      printf("Neni zadan vstupni soubor\n");
      return FILE_ERROR;
   }

   if ((f = fopen(argv[1], "r")) == NULL)
   {
      printf("Soubor se nepodarilo otevrit\n");
      return FILE_ERROR;
   }   

   setSourceFile(f);
   
   // volani parseru
   
   
   
   fclose(f);
   return 0;
}
