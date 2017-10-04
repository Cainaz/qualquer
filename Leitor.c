#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

#define MAX_FILENAME 255

uint8_t *lerArquivo(const char narq,uint8_t *memory, int pc){
    FILE *fp = fopen(narq, "rb");
    if (fp == NULL)
    {
      puts ("Error 404 not found \n");
      fclose (fp);
    }
    fread(memory, 1,256,fp);
    fclose(fp);
    return memory;
}

void carregarMemoria(uint8_t memory[], int pc){
    for(int i=0; i < sizeof(memory[]); i++){
        if (memory[i] != NULL){
            switch(memory[i]){
                case 0: //nop
                break;
                case 10: //sta
                break;
                case 20: //lda
                break;

            }
        
        }
    }
    
}

void simular(){

}

int main(int argc, char argv[]){
    //funções de base

    uint8_t memory[256];


    if(argc!=3){
        puts("sintaxe: neander <prog.bin> pc");
        exit(0);
    }
    char narq[MAX_FILENAME+1];
    strncpy(narq, argv[1], MAX_FILENAME);
    int pc = atoi(argv[2]);
    printf("%s:%d\n",narq,pc);

    uint8_t *lerArquivo(const char narq, uint8_t *memory,int pc);
    void carregarMemoria(uint8_t memory[],int pc);
    void simular();
    
return 0;
}