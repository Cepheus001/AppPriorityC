#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    char *CharArray[argc - 1];

    for (int i = 0; i <= argc; i++ ) {
        CharArray[i - 1] = argv[i];
    }


    char str1[500] = "wmic process where name=";
    char str2[500] = " call setpriority ";

    strcat(str1, "'");
    strcat(str1, CharArray[0]);
    strcat(str1, "'");
    strcat(str2, CharArray[1]);
    strcat(str1, str2);

    system(str1);
    
    return 0;

}