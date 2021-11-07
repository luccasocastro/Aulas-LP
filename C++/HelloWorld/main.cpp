#include <iostream>

using namespace std;

class OlaMundo{
    private:
    string frase;

    public:

    void sayHello(){
        cout << "Hello, "<< getPhrase() << endl;
    }

    string getPhrase(){
        return frase;
    }

    void setPhrase(string ffrase){
        frase = ffrase;
    }
};

int main(){
    OlaMundo ola;
    string oi;
    cout << "Informe um valor: " << endl;
    cin >> oi;
    ola.setPhrase(oi);
    ola.sayHello();
    
    return 0;
}