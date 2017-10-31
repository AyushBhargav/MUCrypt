#ifndef INVALIDSALTEXCEPTION_H
#define INVALIDSALTEXCEPTION_H

#include <exception>
using namespace std;

class InvalidSaltException : public exception {
public:
    InvalidSaltException();
    InvalidSaltException(const InvalidSaltException& orig);
    ~InvalidSaltException() throw();
    virtual const char* what() const throw();
};


#endif // INVALIDSALTEXCEPTION_H
