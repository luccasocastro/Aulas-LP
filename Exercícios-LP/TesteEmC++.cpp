#include <iostream>

using namespace std;

int main(void){

int idade, dia, mes, ano;
    
cout << "Salve galera" << endl;

cout << "Informe sua idade\n";
cin >> idade;

cout << "Voce tem " << idade << " anos\n";

cout << "Agora informe sua data de nascimento (dd/mm/aaaa)\n";
cin >> dia >> mes >> ano;

cout << "Voce nasceu em " << dia << " de " << mes << " de " << ano;

}