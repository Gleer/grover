// ---------------------------------
// IFJ 2015
//
// knihovna pro lexikální analyzátor
// ---------------------------------
// Autor: xklhuf00

//chyba lexikálního analyzátoru

typedef enum
  {
    LEX_ERROR,          // 0
      //klicova slova
    Kauto,              // 1   auto
    Kcin,               // 2   cin
    Kcout,              // 3   cout
    Kdouble,            // 4   double
    Kelse,              // 5   else
    Kfor,               // 6   for
    Kif,                // 7   if
    Kint,               // 8   int
    Kreturn,            // 9   return
    Kstring,            // 10  string              
      //operatory 
    plus,         // 11  +
    minus,               // 12  -
    mensi,               // 13  <
    Ocout,               // 14  <<
    mensirovno,          // 15  <=
    prirad,              // 16  =
    rovno,               // 17  ==
    nerovno,             // 18  !=
    vestsi,              // 19  >
    Ocin,                // 20  >>
    vetsirovno,          // 21  >=
    nasobeni,            // 22  *
    deleni,              // 23  /
      //jednotlive znaky
    Lzavorka,            // 24  (
    Pzavorka,            // 25  )
    Lslozena,            // 26  {
    Pslozena,            // 27  }
    carka,               // 28  ,
    strednik,            // 29  ;
    radkovyKom,          // 30  //
    Zkomenta,            // 31  /*
    Kkomentar,           // 32  */
      // identifikatory
    celecislo,           // 33  int    - cele cislo
    desetine,            // 34  double - desetinne cislo
    retezec,             // 35  string - retezec znaku ""
    id,                  // 36  identifikator 
      // chyba 
    Typ_CHYBA,           // 37  posilame v pripade chyby (pri spatne alokaci)
      //specialni znaky
    END_OF_FILE         // 38  
  } ID_tokenu; 

// struktura samotneho tokenu
//---------------------------

typedef struct
  {
    ID_tokenu typ;
    int cislo;            // pokud je potreba ulozit cele cislo
    double desetine;      // pokud je potreba ulozit desetine cislo
    char* data;           // pokud je potreba ulozit retezec
  } token;

//hlavicka funkce simulujici lexikalni analyzator
token getNextToken();
