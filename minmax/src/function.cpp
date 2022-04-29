#include "function.h"
#include <limits>
using namespace std;

/*!
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */
namespace function  // não é necessário definir um namespace
{    
    pair<int, int> min_max(int V[], size_t n)
    {
        int max = 0;
        int min = 0;
        // faltou tratar o caso n == 0 retornando {-1,-1}

        for (int i=0; i<n; i++){
            if (V[max] <= V[i]){
                max = i;
            }
            if (V[min] > V[i]){
                min = i;
            }
        }
        return {min, max};
    }
}
