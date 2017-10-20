#include "InvalidSaltException.h"

InvalidSaltException::what()
{
    return "Invalid salt.";
}
