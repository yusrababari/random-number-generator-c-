#include <iostream>//includes the input/output library 
#include <cstdlib>//includes the standard library utilities

using namespace std;// allows you to write cout instead of std:cout

int main() {
    //cout sends output to the console
    //end1 moves to a new line
    cout << "Random Number Generator:" << endl;
    //outputs "Random Number Generator"
    
    cout << rand() << endl;// rand() generates a random number
    // rand() generates a random number 
    // the number is printed to the screen
    //cout sends output to the console
    //end1 moves to a new line
    
    
    int randomNumber = rand() % 101;//creates an integer variable named randomNumber
    // rand() generates a random number
    // from 0 to 100
    //as dividing by 101, means the remainder can never reach 101
   //outputs the randomNumber between 0 and 100
    cout << randomNumber << endl;
   
    return 0;
}
