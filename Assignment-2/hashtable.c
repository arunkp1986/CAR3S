#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hashtable.h"


struct hashtable{
    char key[MAX_KEY];
    char value[MAX_VALUE];
};

int main(int argc, char * argv[]){
    
    if(argc != THREADS+1){
        perror("Pass input files");
        exit(-1);
    }
    
    FILE * fptr = fopen(argv[1],"r");
    if(fptr == NULL){
        perror("file open");
        exit(1);
    }
    char * line;
    size_t len = 0;
    ssize_t nread;

    while ((nread = getline(&line, &len, fptr)) != -1) {
               
               //fwrite(line, nread, 1, stdout);
        char * token = strtok(line, ",");
        while( token != NULL){
            printf("%s\n",token);
            token = strtok(NULL,",");

        }
           }

    //fread(line,sizeof(char),10,fptr);
    /*
    struct hashtable * ha = (struct hashtable *)malloc(sizeof(hashtable)*SIZE);
    if(!ha){
        perror("malloc");
        exit(1);
    }*/
free(line);
fclose(fptr);
    return 0;

}
