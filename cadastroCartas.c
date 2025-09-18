#include <stdio.h>

void flush_in()
{
   int ch;

   while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){}
}

int main () {

char estado[20];
char codCarta[4];
char cidade[20];
int populacao;
float areaKM;
int pontoTuristico;


char estado1[20];
char codCarta1[4];
char cidade1[20];
int populacao1;
float areaKM1;
int pontoTuristico1;

// solicitar primeira carta
printf("Programa Cadastro de Cartas SuperTrunfo:\n");
printf("vamos cadstrar a primeira carta\n");
printf("Informe o estado da sua carta:\n");
scanf("%s",&estado);
flush_in();

printf("Informe o codigo da sua carta:\n");
scanf("%s",&codCarta);
flush_in();

printf("Informe o cidade:\n");
scanf("%s",&cidade);
flush_in();

printf("Informe a populacao:\n");
scanf("%d",&populacao);
flush_in();

printf("Informe a Area em km:\n");
scanf("%f",&areaKM);
flush_in();

printf("Informe a quantidade pontos turisticos:\n");
scanf("%d",&pontoTuristico);
flush_in();

// solicitar segunda carta
printf("Programa Cadastro de Cartas SuperTrunfo:\n");
printf("vamos cadstrar a segunda carta\n");
printf("Informe o estado da sua carta:\n");
scanf("%s",&estado1);
flush_in();

printf("Informe o codigo da sua carta:\n");
scanf("%s",&codCarta1);
flush_in();

printf("Informe o cidade:\n");
scanf("%s",&cidade1);
flush_in();

printf("Informe a populacao:\n");
scanf("%d",&populacao1);
flush_in();

printf("Informe a Area em km:\n");
scanf("%f",&areaKM1);
flush_in();

printf("Informe a quantidade pontos turisticos:\n");
scanf("%d",&pontoTuristico1);
flush_in();

//imprimir Carta primeira carta 
printf("-----------------carta 1----------------\n");
printf("Carta:(%s) %s - %s\n", codCarta, estado,cidade);
printf("Populacao:%d\n",populacao);
printf("KM:%f\n",areaKM);
printf("Pontos Turisticos:%d\n", pontoTuristico);

//imprimir segunda carta 
printf("-----------------carta 2----------------\n");
printf("Carta:(%s) %s - %s\n", codCarta1, estado1,cidade1);
printf("Populacao:%d\n",populacao1);
printf("KM:%f\n",areaKM1);
printf("Pontos Turisticos:%d\n", pontoTuristico1);



}

