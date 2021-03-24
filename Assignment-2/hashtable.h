#define SIZE 1<<12
#define MAX_KEY 1<<5
#define MAX_VALUE 1<<8
#define THREADS 1
#define LINE_LENGTH 100000

unsigned long hash(unsigned char *str){
    unsigned long hash = 5381;
    int c;
    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    return hash;
}

//char ** find (char * word, char ** sentences);
//void insert(char * word, char * sentence);
//void remove(char * word);
