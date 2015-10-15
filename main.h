FILE *vstup;

enum {
  ERR_CODE_SUCC=0,	//Program proběhl správně
  ERR_CODE_LEX=1,	//Chyba lexikální analýzy
  ERR_CODE_SYN=2,		//Chyba syntaktické analýzy
  ERR_CODE_DEF=3,		//Chyba sémantiky pro nedefinovaná nebo pokus o redefinici proměnné nebo funkce
  ERR_CODE_COM=4,		//Chyba sématiky při výrazech nebo par funkce (int+string)
  ERR_CODE_TYPE=5,
  ERR_CODE_SEM=6,	
  ERR_CODE_NUM=7,
  ERR_CODE_INIT=8,	
  ERR_CODE_DIV=9,	
  ERR_CODE_OTH=10,	
  ERR_CODE_INTER=99	//Interní chyba interpreta
} ERROR_CODE;
