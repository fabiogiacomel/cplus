#include <iostream>

using namespace std;

int main()
{
    string pagina;
    string titulo;
    string elementoH1;
    string paragrafo;

    cout << "Titulo da pagina.: ";
    cin >> titulo;

    cout << "H1 da pagina.: ";
    cin >> elementoH1;

    cout << "Digite um paragrafo.: ";
    cin >> paragrafo;

    pagina  = "<!DOCTYPE html><html><head><title>";
    pagina += titulo;
    pagina += "</title></head><body><h1>";
    pagina += elementoH1;
    pagina += "</h1><p>";
    pagina += paragrafo;
    pagina += "</p></body></html>";

    cout << pagina;

    return 0;
}
