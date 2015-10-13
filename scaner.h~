// ---------------------------------
// knihovna pro lexikální analyzátor
// ---------------------------------
// Autor: xklhuf00

//chyba lexikálního analyzátoru

#define LEX_ERROR    -1

//klicova slova

#define Kauto         10  // auto
#define Kcin          11  // cin
#define Kcout         12  // cout
#define Kdouble       13  // double
#define Kelse         14  // else
#define Kfor          15  // for
#define Kif           16  // if
#define Kint          17  // int
#define Kreturn       18  // return
#define Kstring       19  // string
                        
//operatory 

#define plus          20  // +
#define minus         21  // -
#define mensi         22  // <
#define Ocout         23  // <<
#define mensirovno    24  // <=
#define prirad        25  // =
#define rovno         26  // ==
#define nerovno       27  // !=
#define vestsi        28  // >
#define Ocin          29  // >>
#define vetsirovno    30  // >=
#define nasobeni      31  // *
#define dělení        32  // /

//jednotlive znaky

#define Lzavorka      33  // (
#define Pzavorka      34  // )
#define Lslozena      35  // {
#define Pslozena      36  // }
#define carka         37  // ,
#define strednik      38  // ;
#define radkovyKom    39  // //
#define Zkomentar     40  // /*
#define Kkomentar     41  // */

// identifikatory

#define celecislo     42  // int    - cele cislo
#define desetine      43  // double - desetinne cislo
#define retezec       44  // string - retezec znaku ""
#define id            45  // identifikator 

// chyba 

#define Typ_CHYBA     46  // posilame v pripade chyby (pri spatne alokaci)

//specialni znaky

#define END_OF_FILE   47

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
void setSourceFile(FILE *f);
int getNextToken(string *attr);
