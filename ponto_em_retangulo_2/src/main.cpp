/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <vector>
#include <iostream>
#include "function.h"
using namespace std;


//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.

int main(void)
{
    function::Ponto IE, SD, p;
    function::location_t local;
    vector<int> vetor;

    int x;
    while (cin >> std::ws >> x)
    {
        vetor.push_back(x);
    }

    if (vetor.size() % 6 != 0)
    {
        cout << "Entrada incorreta!" << endl;
    }
    else
    {
        for (int i = 0; i < vetor.size(); i = i + 6)
        {
            IE.x = vetor[i];
            IE.y = vetor[i + 1];
            SD.x = vetor[i + 2];
            SD.y = vetor[i + 3];
            p.x = vetor[i + 4];
            p.y = vetor[i + 5];

            if (IE.x > SD.x)
            {
                int temp;
                temp = IE.x;
                IE.x = SD.x;
                SD.x = temp;
            }
            if (IE.y > SD.y)
            {
                int temp;
                temp = IE.y;
                IE.y = SD.y;
                SD.y = temp;
            }

            local = function::pt_in_rect(IE, SD, p); 
            cout << local << endl;
        }
    }

    

    return 0;
}
