#include <iostream>

using namespace std;

int main()
{
    int data[] = {4, 3, -2};
    int curr = 0;
    int near = data[0];
    // find the element nearest to zero
    for (int i = 0; i < sizeof(data); i++)
    {
        curr = data[i] * data[i];
        if (curr <= (near * near))
        {
            near = data[i];
        }
    }
    cout << near;
}
