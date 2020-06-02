#define ex8
#include <stdio.h>



#ifdef ex1

//1.Ler um número inteiro e imprimir seu sucessor e seu antecessor.

main(void)
{int A,B,C;
 printf("Digite um num inteiro:");
 scanf("%d",&A);
 B=A+1;
 C=A-1;
 printf("\n O numero anterior e %d",C);
 printf("\n O numero sucessor e %d\n",B);
system("pause");
}
#endif // ex1


#ifdef ex2
//2.	Receber um valor qualquer do teclado e imprimir esse valor com reajuste de 10%.
main(void)
{ float A,P,R;
printf("\n Digite um valor qualquer:");
scanf("%f",&A);
P=A*0.1;
R=A+P;
printf("\n O valor com reajuste e %f",R);


system("pause");

}

#endif // ex2

#ifdef ex3
//3.	Informar um preço de um produto e calcular novo preço com desconto de 9%.
main(void)
{float A,B;
printf("\n Digite o preco de um produto:");
scanf("%f",&A);
B=9*A/100;
A=A-B;
printf("\n O novo preco e: %f",A);
system("pause");

}

#endif // ex3



#ifdef ex4
//4.	 Cálculo de um salário líquido de um professor.
//Serão fornecidos valor da hora aula, número de aulas dadas e o % de desconto do INSS.
void main()
{float A,B,INSS,SALARIOLIQUIDO;

   do
    {printf("\n Digite o valor da aula:");
     scanf("%f",&A);
       if(A<=0)
       {printf("Numero invalido");}
    }while (A<=0);


    do
      {printf("digite o numero de aulas dadas: ");
      scanf("%f",&B);
      if(B<=0)
      {printf("Numero invalido");}
    }while (B<=0);



    do
      {printf("\nDigite a porcentacem do desconto do inss:");
      scanf("%f",&INSS);
      if(INSS<=0)
      {printf("numero invalido");}
    }while(INSS<=0);

SALARIOLIQUIDO=(A*B)-INSS;
printf("O salario liquido e: %f",SALARIOLIQUIDO);






system("pause");

}
#endif // ex4

#ifdef ex5

//5.	 Ler uma temperatura em graus Celsius e transformá-la em graus Fahrenheit.
void main(){
float GC,FA,F;
printf("\n Digite a temperatura em graus celsus:");
scanf("%f",&GC);
F=(GC*1.8)+32;
printf("\n Essa temperatura transformada em Fahrenheit eh: %f",F);

system("pause");

}
#endif // ex5

#ifdef ex6


//6.	Faça um programa que receba o ano do nascimento de uma pessoa e o ano atual, calcule e mostre:
//a.	A idade dessa pessoa
//b.	Quantos anos essa pessoa terá em 2020.

void main(){
   float AN,AA,IDADE,IDADEF;

   printf("Digite o seu ano de nascimento: ");
   scanf("%f",&AN);

   do
    {printf("Digite o ano atual : ");
    scanf("%f",&AA);
    if(AA<0)
    {printf("Numero invalido ");}
    }while(AA<0);


    IDADE=AA-AN;
    printf("\n A sua idade eh : %.0f",IDADE);//observe o ponto depois da porcentagem e o 0, significa que nao vai aparecer os numeros depois da virgula
    IDADEF=2020-AN;
    printf("\n Em 2020 sua idade sera: %.0f \n",IDADEF);


system("pause");

   }

#endif // ex6

#ifdef ex7

//7.	O custo ao consumidor de um carro novo é a soma do preço da fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
//a.	O valor correspondente ao lucro do distribuidor
//b.	O valor correspondente aos impostos
//c.	O preço final do veículo

void main(){
float PF,PL,LUCROD,VALORI,TOTALIMPOSTO,VALORFINAL;
do{
printf("\nDigite o preco de fabrica do produto: ");
scanf("%f",&PF);
if (PF<=0)
  {printf("\nNumero invalido, digite novamente ");}
}while(PF<=0);

do{
printf("\nDigite o porcentual de lucro do distribuidor:");
scanf("%f",&PL);
if(PL<=0)
   {printf("\nnumero invalido, digite novamente");}
}while(PL<=0);

LUCROD=PF*PL/100;

printf("\nO lucro do distribuidor eh de: %f",LUCROD);

do{
printf("\nDigite o valor do imposto:");
scanf("%f",&VALORI);
if(VALORI<0)
{printf("Numero invalido, digite novamente");}
}while(VALORI<0);

TOTALIMPOSTO=(LUCROD+PF)*(VALORI/100);
VALORFINAL=TOTALIMPOSTO+PF+LUCROD;
printf("O valor total do produto e : %f",VALORFINAL);



system("pause");
}

#endif // ex7


#ifdef ex8


//8.	Elabore um programa que efetue o cálculo do reajuste de salário de um funcionário.
//Considere que o funcionário deve receber um reajuste de 15% caso seu salário seja menor que 800 reais. Se o salário for maior ou igual a 800 e menor ou igual a 1000, seu reajuste será de 10 %;
//caso seja maior que 1000, o reajuste deve ser de 5%. Ao final do programa deve apresentar o valor antigo e o novo salário.
void main(){
    float SAL;


printf("Digite o seu salario:");
scanf("%f",&SAL);
if(SAL<800){
SAL=SAL+(SAL*0.15);
}
else
if(SAL<=1000){
SAL=SAL+(SAL*0.10);
}
else{
SAL=SAL+(SAL*0.05);
}

printf("O seu salario atual e de %.2f",SAL);






system("pause");

}


#endif // ex8

#ifdef  ex9

//9.	Leia quatro valores referentes às notas escolares de um aluno e exiba uma mensagem dizendo que ele foi aprovado se a média for maior ou igual a 5. Caso contrário informe que ele está reprovado. Apresente junto à mensagem o valor da média obtida pelo aluno independente de ter sido aprovado ou não.
// As notas deverão ser maiores ou iguais a zero e menores ou iguais a dez.
main(){
float NP1,NP2,NP3,NP4,MEDIA;
do{
printf("Digite a sua primeira nota :");
scanf("%f",&NP1);
if(NP1<0 || NP1>10)
{printf("numero invalido, digite novamente\n");}
}while(NP1<0 || NP1>10);

do{
printf("Digite a sua segunda nota:");
scanf("%f",&NP2);
if(NP2<0 || NP2>10)
{printf("numero invalido, digite novamente\n");}
}while(NP2<0 || NP2>10);

do{
printf("Digite a sua terceira nota:");
scanf("%f",&NP3);
if(NP3<0 || NP3>10)
{printf("numero invalido, digite novamente\n");}
}while(NP3<0 || NP3>10);

do{
printf("Digite a sua quarta nota:");
scanf("%f",&NP4);
if(NP4<0 || NP4>10)
{printf("numero invalido, digite novamente \n");}
}while(NP4<0 || NP4>10);

MEDIA=(NP1+NP2+NP3+NP4)/4;

printf("A sua media final e %f",MEDIA);
if(MEDIA>=5)
{printf("\n APROVADO");}
else
{printf("\n REPROVADO");}








system("pause");

}

#endif // ex9

#ifdef ex10


//10.	Receba dois números, o primeiro deve ser maior que 10 e menor que 25, o segundo deve ser maior ou igual a zero,
//o terceiro deve ser a soma dos dois primeiros e o quarto é o produto dos três números anteriores. Calcule e exiba a soma dos quadrados de cada um dos quatro números.
// Caso o resultado seja menor que 50000, solicite novos dados.
main(){
 float A,B,C,D,RESULTADO;
do{
 do{
  printf("Digite um numero maior que 10 e menor que 25: ");
  scanf("%f",&A);
  if(A<10 || A>25)
  {printf("Numero invalido, digite novamente");}
  }while (A<10 || A>25);

  do{
  printf("Digite um numero maior ou igual a 0: ");
  scanf("%f",&B);
  if(B<0)
  {printf("Numero invalido, digite novamente");}
  }while (B<0);

  C=A+B;
  D=A*B*C;
  RESULTADO=(A*A)+(B*B)+(C*C)+(D*D);

  if(RESULTADO<50000)
 {printf("Resultado menor que 5000, insira novos dados");}
}while(RESULTADO<50000);
  printf("A soma dos quadrados de cada numero e %.3f",RESULTADO);







system("pause");
 }




#endif // ex10
