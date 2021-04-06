#include <iostream> 
int fdig;
int sdig;
int pword;
//string for words

int main()
{
    using std::cout;
    using std::cin;
    


    
    
    cout << "PANDA INDUSTRIES, Please enter password";
    cin >> pword;
    if (pword == 6056){
    cout << "Welcome back Finn, what is the first digit you would like to multiply?";
    cin >> fdig;
    cout << "Now second digit";
    cin >> sdig;
    cout << fdig * sdig;
    }
    else {cout << "Incorrect";


    
    }


}

