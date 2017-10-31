#include <invalidsaltexception.h>

InvalidSaltException::InvalidSaltException() {
}

InvalidSaltException::InvalidSaltException(const InvalidSaltException& orig) {
}

InvalidSaltException::~InvalidSaltException() throw() {
    // Nothing to do here for now.
}

const char* InvalidSaltException::what() const throw(){
    return "Invalid salt.";
}
