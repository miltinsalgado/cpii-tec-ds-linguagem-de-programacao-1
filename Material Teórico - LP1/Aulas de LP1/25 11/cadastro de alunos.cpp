#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>

struct TAluno
{
	char matr[10];
	char nome[50];
	int cargo;
	char sexo;
	int turma;
};

FILE *arq, *arqOut;
struct TAluno aluno;

main()
{
	char opc;
	
	while(1)
	{
		system("cls");
		printf("\n 1 - Inserir;");
		printf("\n 2 - Listar agrupado por turma;");
		printf("\n 3 - Gerar arquivos por turma;");
		printf("\n 4 - Listar por turma");
		printf("\n 5 - Sair.\n");
		printf("\n Opcao: ");
		opc = getche(); //scanf("%d", &opc);
		
		switch(opc)
		{
			case '5': exit(1);
			case '1':{
				system("cls");
				printf("\n Digite a matricula->");
				scanf("%s", &aluno.matr);
				printf("\n Digite o nome->");
				scanf("%s", &aluno.nome);
				
				do{
					printf("\n Digite o sexo (M/F)->");
					aluno.sexo=toupper(getche()); // M A
				}while((aluno.sexo != 'M') && (aluno.sexo != 'F'));
				
				do{
					printf("\n Digite a turma(1 - IN110, 2 - IN112, 3 - IN210, 4 - IN212, 5 - IN313, 6 - IN315)->");
					scanf("%d", &aluno.turma);
				}while((aluno.turma) < 1 || (aluno.turma > 6));
				
				arq = fopen("alunos.dat", "a+");
				fwrite(&aluno, sizeof(struct TAluno), 1, arq);
				fclose(arq);
				fflush(stdin);
				
				break;
			}
			
			case'2':{
				system("cls");
				arq = fopen("alunos.dat", "r");
				//printf("\nTurma IN110\n");
				for(int i = 1; i <= 6; i++)
				{
					if(i == 1)
						printf("\nTurma IN110\n");
					else if(i == 2)
						printf("\nTurma IN112\n");
					else if(i == 3)
						printf("\nTurma IN210\n");
					else if(i == 4)
						printf("\nTurma IN212\n");
					else if(i == 5)
						printf("\nTurma IN313\n");
					else if(i == 6)
						printf("\nTurma IN315\n");
						
					while(!feof(arq))
					{
						fread(&aluno, sizeof(struct TAluno), 1, arq);
						if(aluno.turma == i)
						{
							if(!feof(arq))
								printf("%s - %s\n", aluno.matr, aluno.nome);
						}
					}
					rewind(arq);
				}
				fclose(arq);
				
				system("pause");
				break;		 
			}
			
			case '3':{
				system("cls");
				arq = fopen("alunos.dat", "r");
				//printf("\nTurma IN110\n");
				for(int i = 1; i <= 6; i++)
				{
					if(i == 1)
						arqOut = fopen("in110.dat", "w+");
					else if(i == 2)
					{
						arqOut = fopen("in112.dat", "w+");
						if(!arqOut)
						{
							printf("\n Problema na criação do arquivo da turma IN112!");
						}
					
					}
					else if(i == 3)
						arqOut = fopen("in210.dat", "w+");
					else if(i == 4)
						arqOut = fopen("in212.dat", "w+");
					else if(i == 5)
						arqOut = fopen("in313.dat", "w+");
					else if(i == 6)
						arqOut = fopen("in315.dat", "w+");
						
					while (!feof(arq))
					{
						fread(&aluno, sizeof(struct TAluno), 1, arq);
						if(aluno.turma == i)
						{
							if(!feof(arq))
								fwrite(&aluno, sizeof(TAluno), 1, arqOut);
						}
					}
					fclose(arqOut);
					rewind(arq);
				}
				fclose(arq);
				
				system("pause");
				break;
			}
			
			case '4':{
				do
				{
					printf("\n Digite a turma (1 - IN110, 2 - IN112, 3 - IN210, 4 - IN212, 5 - IN313, 6 - IN315)");
					scanf("%d", &aluno.turma);
				} while((aluno.turma<1) || (aluno.turma >6));
				
				if(aluno.turma == 1)
					arq = fopen("in110.dat", "r");
				else if(aluno.turma == 2)
					arq = fopen("in112.dat", "r");
				else if(aluno.turma == 3)
					arq = fopen("in210.dat", "r");
				else if(aluno.turma == 4)
					arq = fopen("in212.dat", "r");
				else if(aluno.turma == 5)
					arq = fopen("in313.dat", "r");
				else if(aluno.turma == 6)
					arq = fopen("in315.dat", "r");
					
				while(!feof(arq))
				{
					fread(&aluno, sizeof(struct TAluno), 1, arq);
					if(!feof(arq))
						printf("% s - %s\n", aluno.matr, aluno.nome);
				}
				system("pause");
				fclose(arq);
				
				break;
			}
		}
	}
}
