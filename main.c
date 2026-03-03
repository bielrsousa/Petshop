#include<stdio.h>
#include<locale.h>
	char op, nome[11][30],nome1[11][30],nome2[11][30],telefone[15][30];
	int menu,opcao2[11],opcao3[11],opcao4[11],opcao5[11];
	int i,q,u,y,p,h,l;
	char senha[10]= "patinha",senha1[10];

void seu_primeiro_nome(){	
	i++;
		printf("\nCADASTRO Nº%i\n",i);
		printf("Nome do cliente: ");
		fflush(stdin);
		fgets(nome[i], 30, stdin);
		printf("Nome do pet: ");
		fflush(stdin);
		fgets(nome1[i], 30, stdin);
		printf("Telefone: ");
		fflush(stdin);
		fgets(telefone[i], 30, stdin);
	q = q+1;
}

int main(){
	setlocale(LC_ALL,"");
	op = 's';
	while (op = 's') {
	
	printf("Digite a senha: ");
	scanf("%s", senha1);
	while (strcmp(senha, senha1) == 0){
		system("cls");
		printf("\nSuper_Petshop_Gabriel_RibeiroADS\t\n");
		printf("MENU");
		printf("\n1 - Cadastrar cliente ");
		printf("\n2 - Agendar banho/tosa ");
		printf("\n3 - Marcar consulta ");
		printf("\n4 - Imprimir relatorio ");
		printf("\n5 - Sair \n");
		scanf("%i",&menu);
		switch(menu){
	case 1:
		seu_primeiro_nome();
		system("cls");
		printf("\tSuper_Petshop_Gabriel_RibeiroADS\t\n");	
		
	break;
		
	case 2:
		system("cls");
		printf("\tSuper_Petshop_Gabriel_RibeiroADS\t\n");
		y++;
		p++;
		printf("\nCADASTRO Nº%i\n",y);
		printf("Nome do pet: ");
		fflush(stdin);
		fgets(nome2[p], 30, stdin);
		printf("1- Banho\n2- Tosa\n3- Banho e tosa\n");
		scanf("%i",&opcao2[p]);
		
		switch(opcao2[p]){
		case 1:
			printf("Banho agendado para o %s",nome2[p]);
			printf("\n- - - - - - - - - - -\n");
			u = u+1;
			
			break;
		
		case 2:
			printf("Tosa agendada para o %s",nome2[p]);
			printf("\n- - - - - - - - - - -\n");
			u = u+1;
			
			break;
			
		case 3:
			printf("Banho e tosa agendado para o %s",nome2[p]);
			printf("\n- - - - - - - - - - -\n");
			u = u+1;
			
			break;
			}
		break;
		
	case 3:
		system("cls");
		printf("\tSuper_Petshop_Gabriel_RibeiroADS\t\n");
		l++;
		printf("Qual cliente deseja agendar: \n");
		for(i=1; i<=q; i++){
			printf("Cadastros Nº%i\n",i);
			printf("Cliente: %s",nome[i]);
		}
			scanf("%i",&opcao3[l]);	
		printf("\nQual data\n[1] - Quarta\n[2] - Quinta\n");
			scanf("%i",&opcao4[l]);
		printf("\nQual o DR\n[1] - Dr.Gabriel \n[2] - Dr.Fabiano\n");
			scanf("%i",&opcao5[l]);
		h = h+1;
		break;
		
	case 4:
		y=1;
		system("cls");
		printf("\tSuper_Petshop_Gabriel_RibeiroADS\t\n");
		printf("\nCADASTROS REALIZADOS\n");
		for (i=1; i<=q; i++){
			printf("- - - - - - - - - - - - -\n");
			printf("Cadastro nº%i\n",i);
			printf("Nome do cliente: %s",nome[i]);
			printf("Nome do pet: %s",nome1[i]);
			printf("Telefone: %s\n",telefone[i]);
		}
			printf("\nBanhos/Tosas agendadas\n");
		for (p=1,y=0; p<=u; p++){
			y++;
			
			printf("\n- - - - - - - - - - - - -\n");
			printf("Cadastro nº%i\n",y);
			printf("Nome do pet: %s",nome2[p]);
			if (opcao2[p] == 1){
			printf("Marcado: Banho\n");
			}if (opcao2[p] == 2){
			printf("Marcado: Tosa\n\n");
			}if (opcao2[p] == 3){
			printf("Marcado: Banho e tosa\n");
			}
		}
		printf("\nConsultas Agendadas\n\n");
		i=1;
		for(l=1; l<=h; l++){
			printf("\nNome: %s",nome[i]);
			if(opcao4[l] == 1){
			printf("Data: 4ª feira");
			}if(opcao4[l] == 2){
			printf("Data: 5ª feira");
			}
			if(opcao5[l] == 1){
			printf("\nDr: Gabriel Ribeiro");
			}if(opcao5[l] == 2){
			printf("\nDr: Fabiano\n");
			};
			i++;
		}
		system("pause");
		break;
	case 5:
		system("cls");
		printf("\t\t\t|Volte sempre ao Super_Petshop_Gabriel_RibeiroADS\n");
	
		return 0;
		break;
	default:
		system("cls");
		printf("\tSuper_Petshop_Gabriel_RibeiroADS\t\n");
		printf("Opcão recusada\n");
		system("pause");
}
	

}
	system("cls");
	printf("Senha inválida\nTente novamente!\n");	
}
}
