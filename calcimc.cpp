/*AULA7*/
#include <iostream>
#include <cmath>

using namespace std;

double calcularIMC(double peso, double altura) {
    return peso / pow(altura, 2);
}

void mostrarClassificacao(double imc) {
    cout << "Seu IMC é: " << imc << endl;
    
    if (imc < 18.5) {
        cout << "Você está abaixo do peso." << endl;
    } else if (imc < 25) {
        cout << "Você está com peso normal." << endl;
    } else if (imc < 30) {
        cout << "Você está com sobrepeso." << endl;
    } else if (imc < 35) {
        cout << "Você está com obesidade grau I." << endl;
    } else if (imc < 40) {
        cout << "Você está com obesidade grau II." << endl;
    } else {
        cout << "Você está com obesidade grau III." << endl;
    }
}

int main() {
    double peso, altura;

    cout << "CALCULADORA DE IMC" << endl;
    cout << "Digite seu peso (exemplo: 95.3 ): ";
    cin >> peso;

    cout << "Digite sua altura (exemplo: 1.75): ";
    cin >> altura;

    double imc = calcularIMC(peso, altura);
    mostrarClassificacao(imc);

    return 0;
}