/*
Faça um programa que leia 2 váriaveis e um string de comando
se o comando for igual a add o programa deve somar as duas variaveis
se o comando for igual a sub o programa deve diminuir as duas váriaveis
*/

#include <iostream>

using namespace std;

int main()
{
    /*

     Uma variavel é um espaço na memoria RAM

    */

                          // Declaração de Váriaveis
    int a;                // Variavel a declarada com o tipo Inteiro
    int b;

    string comando;       // O tipo String pode guardar uma palavra

    cout << "Digite A.: "; // Escreva
    cin >> a;              // Leia a variavel a
    cout << "Digite B.: ";
    cin >> b;
    cout << "Digite o comando.: ";
    cin >> comando;         // Leia a variavel comando

    /*
        Se comando igual a string add então somar a e b
    */

    if(comando=="add"){
        cout << a + b;      // Não foi declarada uma variavel resultado
    }

    /*
        Se comando igual a string sub então diminuir a e b
    */


    if(comando=="sub"){
        cout << a - b;
    }

    return 0;
}
