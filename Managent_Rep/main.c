//
//  main.c
//  Managent_Rep
//
//  Created by rodrigo on 11/19/15.
//  Copyright © 2015 Rodrigo. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>



struct cadastro_individual {
    char nome[30];
    char identf_desp1[10];
    char identf_desp2[10];
    char identf_desp3[10];
    char identf_desp4[10];
    char identf_desp5[10];
    float valor_identf[5];
    
} membro, membros_rep[10];


int main(void) {
    
    int i;
    void cadastrar_membro();
    
    for (i = 0; i < 10; i++) {
        membros_rep[i] = cadastrar_membro();
    }
    
    
    
   
}

void cadastrar_membro(){
    
    int i;
    
    printf("\n---------- Cadastrar novo Membro -----------\n\n\n");
    
    printf("Digite o nome do membro:\n");
    
    fgets(membro.nome, 30, stdin);
    fflush(stdin);
    
    printf("Digite o nome das despesas individuais (maximo 5) ->\n");
    
    fgets(membro.identf_desp1, 10, stdin);
    fflush(stdin);
    
    fgets(membro.identf_desp2, 10, stdin);
    fflush(stdin);
    
    fgets(membro.identf_desp3, 10, stdin);
    fflush(stdin);
    
    fgets(membro.identf_desp4, 10, stdin);
    fflush(stdin);
    
    fgets(membro.identf_desp5, 10, stdin);
    fflush(stdin);
    
 //   printf("%s %s %s %s %s", membro.identf_desp1, membro.identf_desp2, membro.identf_desp3, membro.identf_desp4, membro.identf_desp5);
    
    
    printf("Digite o valor das despesas seguindo a ordem acima ->\n");
    
    for (i= 0; i < 5; i++) {
        scanf("%f", &membro.valor_identf[i]);
    }
        printf("%s %.2f  \n", membro.identf_desp1, membro.valor_identf[0]);
        printf("%s %.2f  \n", membro.identf_desp2, membro.valor_identf[1]);
        printf("%s %.2f  \n", membro.identf_desp3, membro.valor_identf[2]);
        printf("%s %.2f  \n", membro.identf_desp4, membro.valor_identf[3]);
        printf("%s %.2f  \n", membro.identf_desp5, membro.valor_identf[4]);

    

    
}





