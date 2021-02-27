
#include <stdio.h>

#include <stdlib.h>

#include <string.h>


//estructura
struct estudiante

{

    int cedula;

    char nombre[20];

    int semestre;

};



//base de datos que se esta utlizando
char currentDataBaseName[20];

int currentDataBaseSize = 0;

struct estudiante *pcurrentDataBase;

int currentDataBaseRegister = 0;



int main()
{
    

    
    return 0;
}


int makeDatabasefn(int size){

    int success = 0;

    pcurrentDataBase = (struct estudiante *) malloc( sizeof(struct estudiante)*size );

    if(pcurrentDataBase != NULL) success = 1;

    return success;

}

