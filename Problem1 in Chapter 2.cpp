#include<iostream>
using namespace std;
int main()
{
    const int FAHRENHEIT=-32;
    const int CILSIUS=5.9;
    float fahrenheit,celsius;
    cout<<"\nconvert farenheit to silcius:";
    cin>>fahrenheit;
    celsius=(5.9)*(fahrenheit-32);
    cout<<"\n The result is:"<<celsius;
    return 0;
}
