/*
Fa�a um programa que leia 2 v�riaveis e um string de comando
se o comando for igual a add o programa deve somar as duas variaveis
se o comando for igual a sub o programa deve diminuir as duas v�riaveis
*/

#include <iostream>

using namespace std;

int main()
{
    /*

     Uma variavel � um espa�o na memoria RAM

    */

                          // Declara��o de V�riaveis
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
        Se comando igual a string add ent�o somar a e b
    */

    if(comando=="add"){
        cout << a + b;      // N�o foi declarada uma variavel resultado
    }

    /*
        Se comando igual a string sub ent�o diminuir a e b
    */


    if(comando=="sub"){
        cout << a - b;
    }

    return 0;
}
