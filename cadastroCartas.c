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


printf("Programa Cadastro de Cartas SuperTrunfo:\n");
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

//imprimir Carta
printf("Carta:(%s) %s - %s\n", codCarta, estado,cidade);
printf("Populacao:%d\n",populacao);
printf("KM:%f\n",areaKM);
printf("Pontos Turisticos:%d\n", pontoTuristico);



}

