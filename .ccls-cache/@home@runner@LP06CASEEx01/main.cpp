/* Uma das principais utilidades do comando switch…case sempre foi  avaliar escolhas feitas pelo usuário através de menus. Elabore um programa para exibir um menu onde o usuário possa escolher uma das seguintes funções para efetuar um cálculo: raiz quadrada, exponencial e módulo. Veja um exemplo de como deve ficar o visual do programa */
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int op;
double x, y;
cout << "MENU" << endl;
cout << "----" << endl << endl;
cout << "1 - raiz quadrada" << endl;
cout << "2 - exponencial" << endl;
cout << "3 - modulo" << endl << endl;
cout << "Escolha uma opcao: "; cin >> op;
cout << endl;
if (op>=1 && op<=3)
{
cout << "Digite o valor de x: ";
cin >> x;
}
cout << endl;
switch (op){
case 1:
if (x>=0)
{   y = sqrt(x);
    cout << "y = " << y;}
else
cout << "x nao pode ser negativo!";
break;
case 2:
y = exp(x);
cout << "y = " << y;
break;
case 3:
y = fabs(x);
cout << "y = " << y;
break;
default:
cout << "Opcao invalida!";
}
cout << endl << endl;}
