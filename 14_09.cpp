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

  exercicio 04 da aula passada
  if ((numero% 2) !=8){
    cout << "impar"
  }
    else{
      cout << "par"
        
    se fosse função
        string impar (int numero)
          if ((numero % 2)!= 0)
            return "impar";
    }
        else {
          return "par";
          
          
          exercico 05
            # include < iostream>
            using namespace std
              int main ()
                  int num_dias = rand () % 30 + 1  / gera um numero que pode variar de 0 a 30, por causa do incremento de 1
                  int controle = 0;
                  
          int venda_paes [num_dias] // criei um vetor que o tamanho dele é o numero de dias
            for (controle =0; controle < num_dias-1; controle++){
              venda_paes [ controle] = rand()% 100 + 1 (100 é o numero de paes que foi vendido)
                cout << venda_paes [ controle] <<" " << controle << endl;
            }
          int max = venda_paes [0];
          int dia =0
         for (controle =1; controle < num_dias-1; controle++){
           if (max < venda_paes[controle)}
           dia = controle;
           max = venda_paes[controle];
         }
           }
                                cout << " o dia que vendeu mais foi:" << dia+1<< "e o numero de paes foi" << max;
                
                
                    
        
        
        
        cout << impar(numero)
