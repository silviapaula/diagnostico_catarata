#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main(int argc, char **argv) {
    int opt;

    while((opt = getopt(argc, argv, "ifoh")) != -1){
        switch(opt) {
            case 'i':
                printf("Input de arquivo %d\n");
                break;
            case 'f':
                printf("Formato de imagem \n");
                break;
            case 'o':
                printf("Redirecionamento de saída \n");
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

    return 0;
}
