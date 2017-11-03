#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "Imagem.h"
#define TAM_STRING 25


int main(int argc, char **argv) {
    int opt;
    char nome[TAM_STRING], formato[TAM_STRING], saida[TAM_STRING];

    while((opt = getopt(argc, argv, "i:f:o:h")) != -1){
        switch(opt) {
            case 'i':
                snprintf(nome, 15, "%s", optarg); 
                break;
            case 'f':
                snprintf(formato, 15, "%s", optarg); 
                break;
            case 'o':
                snprintf(saida, 15, "%s", optarg); 
                break;
            case 'h':
                printf("-i   <input-image>\n"
                        "-f   <input-image-format>\n"
                        "-o   <diagnose-file>\n"
                        "-h   <help>\n");
                break;
                exit(0);
        }
    }

    if(strcmp(formato, "ppm") == 0){
        imagem_ppm(nome);
    }

    return 0;
}
