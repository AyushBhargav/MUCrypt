#ifndef TIMESALTGENERATION_H
#define TIMESALTGENERATION_H

class TimeSaltGeneration : public Salt<string>
{
    public:
        TimeSaltGeneration(int length = 512);
        virtual ~TimeSaltGeneration();
    protected:
    private:
        int saltLength;
};

#endif // TIMESALTGENERATION_H
