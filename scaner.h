// ---------------------------------
// knihovna pro lexikální analyzátor
// ---------------------------------
// Autor: xklhuf00

//chyba lexikálního analyzátoru

#define LEX_ERROR    -1

//klicova slova

#define K.auto        10  // auto
#define K.cin         11  // cin
#define K.cout        12  // cout
#define K.double      13  // double
#define K.else        14  // else
#define K.for         15  // for
#define K.if          16  // if
#define K.int         17  // int
#define K.return      18  // return
#define K.string      19  // string

//operatory 

#define plus          20  // +
#define minus         21  // -
#define mensi         22  // <
#define O.cout        23  // <<
#define mensirovno    24  // <=
#define prirad        25  // =
#define rovno         26  // ==
#define nerovno       27  // !=
#define vestsi        28  // >
#define O.cin         29  // >>
#define vetsirovno    30  // >=
#define nasobeni      31  // *
#define dělení        32  // /

//jednotlive znaky

#define L.zavorka     33  // (
#define P.zavorka     34  // )
#define L.slozena     35  // {
#define P.slozena     36  // }
#define carka         37  // ,
#define strednik      38  // ;
#define radkovy.Kom   39  // //
#define Komentar.Z    40  // /*
#define Komentar.K    41  // */

// identifikatory

#define celecislo     42  // int    - cele cislo
#define desetine      43  // double - desetinne cislo
#define retezec       44  // string - retezec znaku ""
#define id            45  // identifikator 

// chyba 46

#define Typ_CHYBA     46  // posilame v pripade chyby (pri spatne alokaci)

//specialni znaky

#define END_OF_FILE   47

//hlavicka funkce simulujici lexikalni analyzator
void setSourceFile(FILE *f);
int getNextToken(string *attr);
