#include <iostream>

#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    //Assignment
    
string stringGreetings = "Hello Jesus 45.45777";
stringstream ss(stringGreetings);

string greetings;
string name;
int number;
float digits;

ss >> greetings >> name >> number >> digits;

//writing to a file
ofstream outFile("output.txt");
outFile << "Greetings: " << greetings << endl;
outFile << "Name: " << name << endl;
outFile << "Number: " << number << endl;
outFile << "Digits: " << digits << endl;

//reading from the file
ifstream inFile("output.txt");
if(inFile.is_open()){
    string line;
    while(getline(inFile, line)){
        cout << line << endl;
    }
    inFile.close();
} else {
    cout << "Unable to open file" << endl;
}


cout<<"Greetings"<<greetings<<endl;
cout<<"Name"<<name <<endl;
cout<<"Number"<<number <<endl;
cout<<"Digits:"<< digits <<endl;



    return 0;
}