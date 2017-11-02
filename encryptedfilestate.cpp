#include "encryptedfilestate.h"

EncryptedFileState::EncryptedFileState(bool isParsed)
{
    this->isParsed = isParsed;
}

bool EncryptedFileState::getParsedStatus() {
    return this->isParsed;
}
