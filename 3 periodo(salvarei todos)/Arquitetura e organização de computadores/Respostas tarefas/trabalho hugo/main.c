#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "cpu.h"

void lerArquivo(const char *Arquivo){
    char i = 0;
    FILE *arquivo;
    arquivo = fopen(Arquivo, "r");
    if(arquivo == NULL){
        perror("Nao foi possivel abrir o arquivo");
        return;
    }
    char buffer[256];
    while(fgets(buffer,sizeof(buffer), arquivo)){
        buffer[strcspn(buffer, "\n")] = 0;
        //insere(buffer);
    }
    fclose(arquivo);


}
void printBinario(int num) { 
    printf("0b");
    for(int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");
}

void Busca(void) 
{
    mbr = 0;
    for (int i = 0; i < 4; i++){
        mbr = mbr << 8;
        mbr = mbr | memoria[(pc*4) + i];
    }
}

void Decodifica(void) 
{
    ir = mbr >> 27;
    if (ir == 2) {
        ro0 = mbr >> 23;
        ro0 = ro0 & 0b1111;
    }
    else if (ir >= 3 && ir <= 4){
        ro0 = mbr >> 23;
        ro0 = ro0 & 0b1111;

        ro1 = mbr >> 19;
        ro1 = ro1 & 0b1111;
    }
    else if (ir >= 5 && ir <= 6){
        ro0 = mbr >> 23;
        ro0 = ro0 & 0b1111;

        ro1 = mbr >> 19;
        ro1 = ro1 & 0b1111;

        mar = mar & 0b1111111111111111111;
    }
    else if (ir >= 7 && ir <= 13){
        ro0 = mbr >> 23;
        ro0 = ro0 & 0b1111;

        ro1 = mbr >> 19;
        ro1 = ro1 & 0b1111;

        ro1 = mbr >> 15;
        ro1 = ro1 & 0b1111;
    }
    else if (ir >= 14 && ir <= 15){
        ro0 = mbr >> 23;
        ro0 = ro0 & 0b1111;

        mar = mar & 0b11111111111111111111111;
    }
    else if (ir >= 16 && ir <= 23){
        ro0 = mbr >> 23;
        ro0 = ro0 & 0b1111;

        imm = imm & 0b11111111111111111111111;
    }
    else if (ir >= 24 && ir <= 30){
        mar = mar & 0b11111111111111111111111;
    }
    else {}
}

void Executa (void) 
{
    if (ir == 0) // HALT
    {
    }
    else if (ir == 1) // NO OPERATION
    {
        pc++;
    }
}

int main(void)
{
    lerArquivo("./operação1.txt");
    //lerArquivo("./operação2.txt");
    Busca();
    printBinario(mbr);
    Decodifica();
    Executa();
    printBinario(ir);
    printBinario(ro0);
    printBinario(ro1);
    printBinario(ro2);
    printf("\n%d", ir);
    return 0;
}