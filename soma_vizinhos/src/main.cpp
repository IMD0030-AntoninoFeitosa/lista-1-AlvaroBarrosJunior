/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author Álvaro Barros Júnior
 * @data April, 8th 2022
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    int m, n;
    int soma = 0;

    cin >> m >> n;

    if (n > 0){
        for (int i=m ; i < m+n; i++){
            soma += i;
        }
    } else if (n < 0){
        for (int i=m ; i > m+n; i--){
            soma += i;
        }
    } else {
        soma = m;
    }

    cout << soma << endl;

    return 0;
}
