#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
    int n;
    cout<<" Enter a number here: "; //number to be converted
    cin>>n;
    cout<< " The binary form of "<<n<<" is: ";
    string OnesZeroes = ""; //String to store the remainders of the divisions. 
    while (n!=0) { //while n is not 0
        int rem = n%2; //remainder of divide by 2 operator
    if (rem == 0) {
        OnesZeroes = "0" + OnesZeroes; //Adds remainder to left of string in order to reverse the output.  Found this method of reversing the order of outputs online.
    }
    else {
        OnesZeroes = "1" + OnesZeroes;
    }
    n = n/2;
    }
    cout << OnesZeroes;
    return 0;
}
    