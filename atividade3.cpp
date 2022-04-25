#include <iostream>
#include <string.h>
using namespace std;
#include <math.h>

int main()
{
    //Elaborar um algoritmo que lê 3 valores a,b,c e verifica se eles formam ou não um triângulo. Supor
    //que os valores lidos são inteiros e positivos. Caso os valores formem um triângulo, calcular e
    //escrever a área deste triângulo. Se não formam triângulo escrever os valores lidos. 
    //(se a > b + c não formam triângulo algum, se a é o maior).
    
    
    //VARIAVEIS
    int a,b,c;
    bool problema;
    double sp,area;

    //COLETA DE INFOS
    cout << "digite A:";
    cin >> (a);

    cout << "digite B:";
    cin >> (b);

    cout << "digite C:";
    cin >> (c);

    //CONDICOES E CALC
    if (a > b + c)
    {
        problema = true;\
    }
    else if (b>a+c)
    {
        problema = true;
    }
    else if (c>a+b)
    {
        problema = true;
    }
    else
	{
		sp = (a+b+c)/2;
        area= sqrt(sp*(sp-a)*(sp-b)*(sp-c));
        cout << "Area: " << area;
	}

	if (problema)
	{
		cout << "houve um problema: nao e possivel formar um triangulo, pois um dos lados e maior que a soma dos demais\n\n";
        cout << "(" << a << "," << b << "," << c << ")";

	}
	
}

    
