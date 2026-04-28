#include <iostream>
#include <stdexcept>

using namespace std;

//Custom exceptions
class MyExceptions: public exception{
    public:
        const char* what() const noexcept override{
            return "this is a custom exception";
        }
};

int main(){
    cout<<"enter the numerator " << endl;
    int num;
    cin>>num;
    cout<<"enter the denominator " << endl;
    int den;
    cin>>den;
    try
    {        if(den == 0){
            throw MyExceptions();
        }
        /* code */
    }
    
    catch(const MyExceptions& e)
    {
        //std::cerr << e.what() << '\n';
        cout<<e.what() << endl;
    }
    
    double result = num/den;
    cout<<"the result is " << result << endl;
    return 0;
}