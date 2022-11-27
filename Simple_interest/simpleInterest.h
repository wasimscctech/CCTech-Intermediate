#include <stdexcept>

class interest
{
    double intRate, pricipal;
    int year;

public:
    float simpleInterest(double p, double r, int y)
    {   
        if(p<0 || r<0 || y<0) {
            throw std::invalid_argument( "received negative value" );
        }
        pricipal = p;
        intRate = r;
        year = y;
        return (p * r * y)/100;
    }
};