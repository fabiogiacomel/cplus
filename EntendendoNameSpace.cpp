#include <iostream>

using namespace std;

namespace escola
{
    string nome = "CEEP";
    namespace aluno {
        string nome;
    }
    namespace professor {
        string nome;
    }
}
int main()
{
    cout << escola::nome << endl;
    escola::aluno::nome = "Joao";
    escola::professor::nome = "Fabio";

    cout << escola::aluno::nome << endl;
    cout << escola::professor::nome << endl;

    return 0;
}
