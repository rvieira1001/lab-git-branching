/**
 * Arquivo: main.c
 * Descrição: Arquivo que implementa funcionalidades fundamentais para
 * o funcionamento dos computadores funcionais, tais como a funcionalidade
 * de imprimir olá coisas.
 *
 * Autores: Rafael, igor, vitor
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if ((argc > 2) && (strcmp(argv[2], "pt-br") == 0))
        printf("\nOlá, %s!", argv[1]);/* adiciondo pt br? */
    else
        printf("\nHello, %s!", argv[1]);
    
    return 0;
}
