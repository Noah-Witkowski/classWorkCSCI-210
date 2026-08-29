#include <iostream>
#include <cmath>
using namespace std;
int main(){
    
    int score1, score2, score3;
    double average;

    cout << "Please enter 3 test grades,"
         << "I will give an average." << endl;
    
    cin >> score1;
    cin >> score2;
    cin >> score3;
    
    cout << "You entered: " << score1 << score2 << score3 << endl;
    average = (score1 + score2 + score3) / 3;
    cout << "Your average is: " << average << endl;
    
    return 0;
}