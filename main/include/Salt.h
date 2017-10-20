#ifndef SALT_H
#define SALT_H

template <class T>
class Salt
{
    public:
        virtual T saltedValue(T key);
    protected:
        int seedValue;
        virtual void setSeed();
        virtual T generateSalt();
};

#endif // SALT_H
