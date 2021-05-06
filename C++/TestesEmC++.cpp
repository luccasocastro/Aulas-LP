#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void){

int op;
float num1, num2;

cout << "Digite o primeiro numero: ";
cin >> num1;

cout << "Digite o segundo numero: ";
cin >> num2;

cout << "Escolha uma operacao:\n1--Adicao\n2--Subtracao\n3--Divisao\n4--Multiplicacao\n0--Sair\n";
cin >> op;

while(op != 0){
switch(op){
    case 1:
    cout << "O resultado eh: " << num1 + num2 << "\n";
    system("pause");
    system("cls");
    break;

    case 2:
    cout << "O resultado eh " << num1 - num2 << "\n";
    system("pause");
    system("cls");
    break;

    case 3:
    cout << "O resultado eh " << num1 / num2 << "\n";
    system("pause");
    system("cls");
    break;

    case 4:
    cout << "O resultado eh " << num1 * num2 << "\n";
    system("pause");
    system("cls");
    break;

    default:
    cout << "O numero digitado nao eh aceito";
    system("pause");
    system("cls");
    break;

}

cout << "Digite o primeiro numero: ";
cin >> num1;

cout << "Digite o segundo numero: ";
cin >> num2;

cout << "Escolha uma operacao:\n1--Adicao\n2--Subtracao\n3--Divisao\n4--Multiplicacao\n0--Sair\n";
cin >> op;
}
}