While (i<=numero)
  soma = soma +i
  i = i +1
  }
  return soma;
  
  Exercicio 8
  time 1 = 1 3 1
  time 2 = coloca a 
  
  	
Atividades para fazer em sala:

1 - Execute e explique o que é feito no código abaixo:

#include <iostream>

using namespace std;

int main()
{
     int numero; // usada para leitura da sequencia //
     int quadrado; // guarda o quadrado do numero lido //

     cout << endl << "\tCalculo do quadrado de um número\n";
     cout << "\nDigite o número que você deseja saber o quadrado ou zero para sair:\n";
     cin >> numero;

     while (numero != 0) {
          quadrado = numero * numero;
          cout << "O quadrado do numero " << numero << " é "<< quadrado <<" \n";
          cin >> numero;
     }

    return 0;
