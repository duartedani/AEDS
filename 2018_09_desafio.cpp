
/****************

Exercício Desafio (2 pontos)
1 - Uma empresa precisa cadastrar alguns dados de seus funcionarios e fazer alguns calculos.
O primeiro requisito e o preenchimento de informacoes do funcionario:
Para isso, emplemente uma coleta de informacoes, para os seguintes dados:
 
 -Nome                     -Estado
 -CPF                      -Cidade
 -Nacionalidade            -Rua
 -Identidade               -Número
 -País                     -Salario
 
2 - Uma vez que as informacoes foram fornecidas, verifique se o funcionario é do Brasil.
Caso seja, imprima um texto com essa informacao para o funcionario do RH.
 
 
 3- Faca o calculo do desconto em folha, devido ao INSS, segundo a tabela abaixo:
 
 ___________________________________________
| Salario (reais)           |    Desconto    |
| até 1693,72               |     8%         |
| de 1693,73 até 2.822,90   |     9%         |
 acima de 2.822,91          |     11%        |
 
 Imprima todos os dados do funcionario.
 Verifique qual será o cargo na carteira de trbalho do funcionario:
      Level 1 - Salário até 1500 - Estagiário
      Level 2 - Salario ate 1501 - 2000 - Dev Junior
      Level 3 - Salario ate 2001 - 4000 - Dev Pleno
      Level 4 - Salario ate 4001 - 7000 - Dev Sênior
      Level 5 - Salario ate 7001 - 10000 - GP
      Level 6 - Salario ate 1001 - 15000 - GP Sênior
      Level 7 - Salario ate 15001 - 30000 - Deretor de TI 
      Level 8 - Salario ate 30001 - 50000 - Diretor de TI Sênio
      Level 9 - Salario ate 50001- 100000 - Presidente 
    
************************************************************************************/
Porque o cin nao guarda vetor ?
       
       #include <iostream>
       using namespace std;

int main()
{
  string nome;
  string cpf ;
  string nacionalidade;
  float identidade;
  string pais;
  string estado;
  string cidade;
  string rua;
  int numero;
  float salario;
  
cout <<"Digite o nome do funcionário?"<<"\n";
        getline(cin,nome);
cout <<"Digite o CPF de "<< nome<<"?"<<"\n";
        getline(cin,cpf);
cout <<"Digite a identidade de "<< nome<<"?"<<"\n";
        cin >> identidade;
cout <<"Digite a nacionalidade de "<< nome<<"?"<<"\n";
      cin>>nacionalidade;    
cout <<"Digite o estado de "<< nome<<"?"<<"\n";
        cin >> estado;  
cout <<"Digite o cidade de "<< nome<<"?"<<"\n";
       cin >> cidade;       
cout <<"Digite é o endereço de "<< nome<<"?"<<"\n";
      cin >> rua;   
cout <<"Digite o número do endereço "<< nome<<"?"<<"\n";
      cin >>numero; 
cout <<"Digite o número do salario "<< nome<<"?"<<"\n";
      cin >> salario; 
} 


