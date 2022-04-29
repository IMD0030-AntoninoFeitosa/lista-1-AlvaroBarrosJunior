#include <iostream>
#include <array>

using namespace std;

/*!
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
namespace function  // não é necessário definir um namespace
{
    template <size_t SIZE>
    void reverse(array<string, SIZE> &arr)
    {
        // não deveria ser criado um vetor, desse modo, o vetor arr não é modificado
        array<string, arr.size()> novoArr;

        for (int i=1; i<=arr.size(); i++){
            novoArr[arr.size() - i] = arr[i];
        }

        for (int i=1; i<=arr.size(); i++){
           cout<<novoArr[i]<<", ";
        }
        cout<<endl;
    }
}
