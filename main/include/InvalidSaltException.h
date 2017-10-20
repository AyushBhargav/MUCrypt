#ifndef INVALIDSALTEXCEPTION_H
#define INVALIDSALTEXCEPTION_H
#include <exception>

class InvalidSaltException : public exception
{
    public:
        const char* what() const throw;
};

#endif // INVALIDSALTEXCEPTION_H
