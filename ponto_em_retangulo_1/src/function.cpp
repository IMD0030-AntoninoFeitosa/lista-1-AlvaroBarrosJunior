#include "function.h"

/*!
 * Verifica se um ponto está dentro de um retângulo.
 */

namespace function  // não é necessário definir um namespace
{
    location_t pt_in_rect(const Ponto &IE, const Ponto &SD, const Ponto &P)
    {
        if (P.x > IE.x && P.y > IE.y && P.x < SD.x && P.y < SD.y){
            return location_t::INSIDE;
        }
        else if (P.x >= IE.x && P.y >= IE.y && P.x <= SD.x && P.y <= SD.y){
            return location_t::BORDER;
        }
        else {
            return location_t::OUTSIDE;
        }
    }
}
