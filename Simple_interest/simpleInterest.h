class interest
{
    float intRate, pricipal;
    int year;

public:
    float simpleInterest(float p, float r, int y)
    {
        pricipal = p;
        intRate = r;
        year = y;

        return (p * r * y)/100;
    }
};