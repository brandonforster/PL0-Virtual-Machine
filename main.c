//Brandon Forster
//COP 3402: System Software
//Homework #4 (Procedures)
//31 July 2012

#include <stdio.h>
#include "vm.h"
#include "scanner.h"
#include "parser.h"

int main(int argc, char *argv[])
{
    int lexemeFlag=0;
    int genFlag=0;
    int traceFlag=0;
    
    int i;
    for (i=0; i< argc; i++)
    {
        if (strcmp(argv[i], "-l") ==0)
            lexemeFlag=1;
        
        if (strcmp(argv[i], "-a") ==0)
            genFlag=1;
        
        if (strcmp(argv[i], "-v") ==0)
            traceFlag=1;
    }
    scanner(lexemeFlag);
    parser(genFlag);
    vm(traceFlag);
    
/*   -l : print the list of lexemes/tokens (scanner output) to the screen
    ​ -a : print the generated assembly code (parser/codegen output) to the screen
    ​ -v : print virtual machine execution trace (virtual machine output) to the screen */
}