# indru2025
I am 1st year student in enginnering
# indru2025
I am 1st year student in enginnering
#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(){
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x){
        a = x;
        b = 0;
    }
    void printnumber()
    {
        cout << "Your number is " << a << " +" << b << "i" << endl;
    }
};
int main()
{
    complex c1(4, 5);
    c1.printnumber();

    complex c2(5);
    c2.printnumber();
    return 0;

    complex c3;
    c3.printnumber();

    return 0;
}
