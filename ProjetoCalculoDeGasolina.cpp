#include <iostream>  // Biblioteca usada para mostrar e ler informações na tela
using namespace std; // Permite usar comandos como "cout" e "cin" sem precisar escrever "std::"

int main() {
    // Declaração das variáveis (onde guardamos informações)
    float distancia, consumo, preco, dinheiro;

    // Explicação para o usuário e leitura dos dados
    cout << "Digite a distancia da viagem (em km): ";
    cin >> distancia; // o usuário digita a distância que vai percorrer

    cout << "Digite quantos km o carro faz por litro: ";
    cin >> consumo; // o usuário informa quantos km o carro roda com 1 litro

    cout << "Digite o preco do combustivel (em reais): ";
    cin >> preco; // o usuário informa quanto custa 1 litro de combustível

    cout << "Digite quanto dinheiro voce tem: ";
    cin >> dinheiro; // o usuário informa quanto dinheiro tem para gastar

    // Cálculo de quantos litros serão necessários
    float litros = distancia / consumo; // divide a distância pelo consumo
    // Exemplo: 200 km / 10 km/l = 20 litros

    // Cálculo do custo total da viagem
    float custo = litros * preco; // multiplica os litros pelo preço do combustível

    // Mostra os resultados na tela
    cout << "\nVocê vai precisar de " << litros << " litros de combustivel." << endl;
    cout << "O custo total da viagem sera de R$ " << custo << endl;

    // Verifica se o dinheiro é suficiente
    if (dinheiro >= custo) {
        cout << "Parabens! Voce CONSEGUE fazer a viagem com o dinheiro que tem." << endl;
    } else {
        cout << "Infelizmente voce NAO CONSEGUE fazer a viagem com o dinheiro que tem." << endl;
    }

    return 0; // Finaliza o programa
}