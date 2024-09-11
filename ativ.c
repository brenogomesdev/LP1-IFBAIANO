#include <stdio.h>
#include <stdlib.h>
 /*
//Q9

int comparação(int maior_numero,int menor_numero)
{
    int n;
    
       for(int i = 0; i < 10; i++) {
        int n = rand() %100; 
        printf("Número aleatório %d: %d\n", i+1, n);
        
   if(i == 0) {
            maior_numero = n;
            menor_numero = n;
        }

        if(n > maior_numero) {
            maior_numero = n;
        }
        if(n < menor_numero) {
            menor_numero = n;
        } 
    }
       
    printf("Menor Numero: %d\n", menor_numero);
    printf("Maior Numero: %d", maior_numero);
}
 
    
    

int main()
{
 
    int x,y,r;
    
    r= comparação(x,y);

    return 0;
}
*/

/*
//Q10

void rotina(double *x, double *y)
{
    printf("Digite um numero: ");
    scanf("%le",x);
    
    printf("Digite outro numero: ");
    scanf("%le",y);
}


int main()
{
    double a,b;
    
    rotina(&a,&b);
    
    printf("%le\n", a);
    printf("%le", b);
    
    return 0;
}
*/


/*
//Q11

int main()
{
    printf("Boa ");
    printf("noite ");
    printf("meu ");
    printf("consagrado ");
    return 0;
}
*/


/*
//Q12

int tconver(int a)
{
   int b= a/60; 
   
   return(b);
}

int main()
{
int seg,min,h;

printf("Digite o tempo em segundos: ");
scanf("%d",&seg);

min = tconver(seg);
h = tconver(min);

// ultrapassar de 60
if(seg >=60){seg= seg-60*(seg/60); min+1*(seg/60);}
if(min >=60){min= min-60*(min/60); h+1*(min/60);}

// diritos maiores que 9

if(h >= 10){printf("%d:",h);}else{printf("0%d:",h);}
if(min >= 10){printf("%d:",min);}else{printf("0%d:",min);}
if(seg >= 10){printf("%d:",seg);}else{printf("0%d:",seg);}

}

*/


/*
//Q13

int media(int a,int b, int c)
{
    int m;
    
    m=(a+b+c)/3;
    
    printf("Media: %d",m);
    
    return (m);
}

int main()
{
    int x,y,z,r;
    printf("Digite um numero: ");
    scanf("%d",&x);
    
    printf("Digite outro numero: ");
    scanf("%d",&y);
    
    printf("Digite outro numero: ");
    scanf("%d",&z);
    
    r= media(x,y,z);
    
    return 0;
}

*/



/*
//Q14

int TriangCheck(int a,int b, int c)
{
  if(a<b+c && b<a+c && c<a+b){
    
    printf("É Possivel formnar um triangulo");}else{printf("Não é Possivel formnar um triangulo"); return 0;}
    
    
if(a== b && b == c){printf("\nÉ um triangulo equilatero");}
else if(a!= b && b == c || b != c && c == a|| c!=a && a==b){printf("\nÉ um triangulo isoceles");} 
else {printf("\nÉ um triangulo escaleno");}
}

int main()
{
    int x,y,z;
    printf("Digite um numero: ");
    scanf("%d",&x);
    
    printf("Digite outro numero: ");
    scanf("%d",&y);
    
    printf("Digite outro numero: ");
    scanf("%d",&z);
    
TriangCheck(x,y,z);
    
    return 0;
}

*/



/*
//Q15

int main()
{
    int sal,h;
    printf("Digite o salario semanal: ");
    scanf("%d",&sal);
    
    printf("Digite as horas trabalhadas por semana: ");
    scanf("%d",&h);
    
  if(h> 60){sal=sal*2;}else if (h>40 && h <=60){sal=sal+(sal/2);}else{sal=sal;}
    
    printf("Salario: %d",sal);
    
    return 0;
}

*/


/*
//Q16

int main()
{
    int ta,tb,pon;
    
    
    
    printf("Diz o placar do time 1:");
    scanf("%d",&ta);

    printf("Diz o placar do time 2:");
    scanf("%d",&tb);

if(ta==3 && tb==2){pon= 20;}
else
    if(ta>tb && tb==2 || ta>tb && ta==3){pon= 15;}
    else
        if(ta>tb){pon= 10;}
        else
            if(ta==3 || tb==2){pon= 5;}
            else{pon= 0;}

    printf ("Placar final [3x2]! total de pontos: %d ",pon);
}

*/



/*
//Q17

#include <stdio.h>

int main() {
    int num, firstPart, secondPart, sum, square;

    printf("Números de 4 dígitos com a característica desejada:\n");
    
    for (num = 1000; num <= 9999; num++) {
        firstPart = num / 100;
        secondPart = num % 100;

        sum = firstPart + secondPart;
        square = sum * sum;

        if (square == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}


*/



/*
//Q18

#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
*/



/*
//Q19

int main()
{
    int nota,faltas,aulas,freq1,freq2;
    
    
    
    printf("Total de aulas: ");
    scanf("%d",&aulas);
    
    printf("Media do aluno: ");
    scanf("%d",&nota);
        if(nota > 100){nota=100;}
    
    printf("Total de faltas: ");
    scanf("%d",&faltas);
        if(faltas >= aulas){faltas= aulas;}
        
        
    freq1= (aulas*75)/100;
    freq2= aulas - faltas;

  printf ("Media final %d ",nota);
  printf ("Frequencia %d ",freq2);
    if(nota>=70 && freq2 >= freq1) {
        printf("1");
    }else {printf("0");}
    
    return 0;
}

*/


/*
//Q20

#include <stdio.h>

unsigned int inverte(unsigned int num) {
    unsigned int reversed = 0;
    
    while (num > 0) {
        unsigned int digit = num % 10;  // Obtém o último dígito
        reversed = reversed * 10 + digit;  // Adiciona o dígito ao número invertido
        num /= 10;  // Remove o último dígito do número original
    }
    
    return reversed;
}

int main() {
    unsigned int num;
    
    printf("Digite um número inteiro positivo: ");
    scanf("%u", &num);
    
    unsigned int result = inverte(num);
    
    printf("Número invertido: %u\n", result);
    
    return 0;
}


*/
