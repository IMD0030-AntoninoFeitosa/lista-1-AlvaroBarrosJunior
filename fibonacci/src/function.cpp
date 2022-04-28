#include "function.h"

namespace function{ // não é necessário definir um namespace

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    std::vector <unsigned int> seq_fib;

    if (n > 1){
        seq_fib.push_back(1);
        seq_fib.push_back(1);

        while(seq_fib[seq_fib.size()-1] + seq_fib[seq_fib.size()-2] < n){
            seq_fib.push_back(seq_fib[seq_fib.size()-1] + seq_fib[seq_fib.size()-2]);
        }
    }
    // TODO: adicione o seu código aqui.

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return seq_fib;
}
}
