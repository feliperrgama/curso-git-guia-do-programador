#include <iostream>
#include <string>
#include <queue>
#include <locale>

using namespace std;

class Pessoa {
   private:
      string nome, cpf;
   public:
      Pessoa(){
         nome = "";
         cpf = "";
      }
      ~Pessoa(){
      }
      void get_dados(){
         cout << "\nNome: ";
         getline(cin >> ws, nome);
         cout << "CPF: ";
         getline(cin >> ws, cpf);
         cout << "\n";
      }
      void set_dados(){
         cout << "\nNome: " << nome;
         cout << "\nCPF: " << cpf;
         cout <<"\n";
      }
      string ret_nome(){
         return nome;
      }
      string ret_cpf(){
         return cpf;
      }
};

int main(){
   setlocale(LC_ALL, "portuguese");

   int i, decision;
   Pessoa a;
   string resp;
   queue<Pessoa> fila_pessoas;

   do{
      cout << "Seus dados:\n";
      a.set_dados();
      fila_pessoas.push(a);

      cout << "Deseja alocar mais dados? (s/n)\n -> ";
      cin >> resp;

      if(resp != "s" or resp != "si" or resp != "sim" or resp != "n" or resp != "no" or resp != "nao" or resp != "não"){
         cerr << "Ops, acho que você digitou errado. \n Tente outra vez!";
         cout << "\n< 1 > Tente outra vez";
         cout << "\n< 2 > Sair do programa";
         cout << "\n-> ";
         cin >> decision;

         if(decision == 1){
            main();
         }
         else {
            return 0;
            exit(0);
         }
      }
   }while (resp == "s" or resp == "sim" or resp == "si");

   cout << "Do you wanna see the people list? \n (s/n) -> ";
   cin >> resp;
   if(resp == "s"){
      while (!fila_pessoas.empty())
      {
         fila_pessoas.front().set_dados();
         cout << "================================================";
         fila_pessoas.pop();
      }  
   }
   

   return 0;
}