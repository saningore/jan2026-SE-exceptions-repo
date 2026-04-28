#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
    //exception handling
    cout<<"enter the numerator " << endl;
    int num;
    cin>>num;
    cout<<"enter the denominator " << endl;
    int den;
    cin>>den;
    try
    {        if(den == 0){
            throw runtime_error("division by zero is not allowed");
        }
        /* code */
    }
    catch(const std::runtime_error& e)
    {
        //std::cerr << e.what() << '\n';
        cout<<e.what() << endl;
    }
    catch(const std::exception& e)
    {
        //std::cerr << e.what() << '\n';
        cout<<e.what() << endl;
    }
    
    double result = num/den;
    cout<<"the result is " << result << endl;

    return 0;
}