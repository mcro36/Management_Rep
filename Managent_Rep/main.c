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
} membro;


int main(void) {
    

    void cadastrar_membro();
    
    cadastrar_membro();
    
    
   
}

void cadastrar_membro(){
    
    int i;
    
    printf("\n---------- Cadastrar novo Membro -----------\n\n\n");
    
    printf("Digite o nome do membro:\n");
    
    fgets(membro.nome, 30, stdin);
    printf("%s", membro.nome);
    fflush(stdin);
    
    fgets(membro.identf_desp1, 10, stdin);
    printf("%s", membro.identf_desp1);
    fflush(stdin);
    
    fgets(membro.identf_desp2, 10, stdin);
    printf("%s", membro.identf_desp2);
    fflush(stdin);
    
    fgets(membro.identf_desp3, 10, stdin);
    printf("%s", membro.identf_desp3);
    fflush(stdin);
    
    fgets(membro.identf_desp4, 10, stdin);
    printf("%s", membro.identf_desp4);
    fflush(stdin);
    
    fgets(membro.identf_desp5, 10, stdin);
    printf("%s", membro.identf_desp5);
    fflush(stdin);
    
    
    printf("Digite o valor das despesas segindo a ordem acima ->\n");
    
    for (i= 0; i <= 5; i++) {
        scanf("%f", membro.valor_identf[i]);
        printf("%s %f", membro.identf_desp1, membro.valor_identf[i]);
        
    }
    
}





