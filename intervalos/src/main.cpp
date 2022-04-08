/*!
 * @brief This code implements the Intervalos programming problem
 * @author Álvaro Barros Jr
 * @data April, 8th 2022
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iomanip>
using std::setprecision;

int main(void)
{
    int x;
    int intervalo0a25=0, intervalo25a50=0, intervalo50a75=0, intervalo75a100=0, intervaloFora=0, total;
    float porcentagem0a25, porcentagem25a50, porcentagem50a75, porcentagem75a100, porcentagemFora;
    while (cin >> std::ws >> x)
    {
        if (x >= 0 && x < 25){
            intervalo0a25++;
        } else if(x >= 25 && x < 50){
            intervalo25a50++;
        } else if(x >= 50 && x < 75){
            intervalo50a75++;
        } else if(x >= 75 && x < 100){
            intervalo75a100++;
        } else {
            intervaloFora++;
        }
    }

    total = intervalo0a25+intervalo25a50+intervalo50a75+intervalo75a100+intervaloFora;

    porcentagem0a25 = (float) intervalo0a25/total*100;
    porcentagem25a50 = (float) intervalo25a50/total*100;
    porcentagem50a75 = (float) intervalo50a75/total*100;
    porcentagem75a100 = (float) intervalo75a100/total*100;
    porcentagemFora = (float) intervaloFora/total*100;

    cout << endl;

    cout << setprecision(4) << porcentagem0a25 << endl;
    cout << setprecision(4) << porcentagem25a50 << endl;
    cout << setprecision(4) << porcentagem50a75 << endl;
    cout << setprecision(4) << porcentagem75a100 << endl;
    cout << setprecision(4) << porcentagemFora << endl;

    return 0;
}
