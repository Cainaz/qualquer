#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_FILENAME 255

void lerArquivo(const char narq,int pc){
    FILE *fp = fopen(narq, "rb");
    if (fp == NULL)
    {
      puts ("Error\n");
      fclose (fp);
    }

    fclose(fp);
    return 0;
}

bool carregarMemoria(){
    
}

void simular(){

}

int main(int argc, char argv[]){
    //funções de base

    u_int8_t memory[256];


    if(argc!=3){
        puts("sintaxe: neander <prog.bin> pc");
        exit(0);
    }
    char narq[MAX_FILENAME+1];
    strncpy(narq, argv[1], MAX_FILENAME);
    int pc = atoi(argv[2]);
    printf("%s:%d\n",narq,pc);

    void lerArquivo(const char narq, u_int8_t memory,int pc);
    bool carregarMemoria();
    void simular();

    
return 0;
}