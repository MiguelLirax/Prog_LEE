#include <stdio.h>
#include <stdlib.h>

int leitura_palavra(void){
    char linha[300];
    FILE *apontador_localidades;

    apontador_localidades = fopen("localidades1.txt", "r");

    if (apontador_localidades == NULL){
        fprintf(stdout, "Ocorreu um erro ao abrir o ficheiro localidades.");
    }

    fgets(linha, 300, apontador_localidades);
    fprintf(stdout, "\linha: %s", linha);
    fclose(apontador_localidades);


    int lng_lido;
    int lat_lido;
    char char_lido;
    char palavra[40];
    int latitude[15];
    int longitude[15];
    int i = 0;

    while(char_lido != ' '){
        char_lido = linha[i];
        palavra[i] = linha[i];
        char_lido = palavra[i];
        i++;
        //printf("fim da func1");

    }
    i++;
    while(lat_lido != ' '){
        lat_lido = linha[i];
        latitude[i] = linha[i];
        lat_lido = latitude[i];
        i++;
        //printf("fim da func2");
    }
    i++;
    while(lng_lido != ' '){
        lng_lido = linha[i];
        longitude[i] = linha[i];
        lng_lido = longitude[i];
        i++;
        //printf("fim da func3");
    }

    //printf("fim da func");
    printf("print palavra: %s", palavra);
    printf(" %d", latitude);
    printf(" %d", longitude);
}





int leitura_linha(void){
    char linha[300];
    FILE *apontador_localidades;

    apontador_localidades = fopen("localidades1.txt", "r");

    if (apontador_localidades == NULL){
        fprintf(stdout, "Ocorreu um erro ao abrir o ficheiro localidades.");
    }

    fgets(linha, 300, apontador_localidades);
    fprintf(stdout, "\linha: %s", linha);
    fclose(apontador_localidades);
}

int leitura_texto(void){
}





int main()
{
    //leitura_linha();
    leitura_palavra();

    printf("\n fim do main!\n");
    return 0;
}
