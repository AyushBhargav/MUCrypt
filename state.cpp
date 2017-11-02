#include <state.h>
#include <string>

State::State()
{
    this->n_hashing = 16;
    this->openingDelimiter = "$$$$$";
    this->closingDelimiter = "#####";
}

void State::setSalt(string salt) {
    this->salt = salt;
}

void State::setPassword(string password) {
    this->password = password;
}

string State::getSalt() {
    return this->salt;
}

string State::getPassword() {
    return this->password;
}

int State::getN_hashing() {
    return this->n_hashing;
}

string State::getOpeningDelimiter() {
    return this->openingDelimiter;
}

string State::getClosingDelimiter() {
    return this->closingDelimiter;
}
