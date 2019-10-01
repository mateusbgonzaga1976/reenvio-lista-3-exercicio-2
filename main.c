#include <stdio.h>
#include <stdlib.h>

int main(){

    char str1[100];
    printf("Digite um texto com no maximo 100 caracteres:\n");
    gets(str1);
    int vogal = 0;

    for(int i = 0; i < sizeof(str1) && str1[i] != '\0'; i++){
        if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u'){
            vogal++;
        }
        if(str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U'){
            vogal++;
        }
    }

    printf("Foram contadas um total de %d vogais no texto.\n", vogal);

    system("pause");
    return 0;
}


