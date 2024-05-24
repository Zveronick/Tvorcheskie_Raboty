#ifndef HASH_H
#define HASH_H

#include <QString>

unsigned int hash(const QString& password) {
    QByteArray ba = password.toUtf8();
    const char* c_str = ba.data();

    unsigned int h = 0;
    for (unsigned int i = 0; i < strlen(c_str); i++) {
        h = (h << 5) + h + c_str[i];
    }
    return h;
}

#endif // HASH_H
