#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    int x;
    int y;

    cout << "Enter the first integer" << endl;
    cin >> x;
    cout << "Enter the second integer" << endl;
    cin >> y;

    if(x < y){
        cout << "The second integer is bigger than the first integer. Proceed to next step" << endl;
    } else{
        cout << "The second integer is not bigger than the first integer. Quit program" << endl;
        return 0;
    }

    int sum;
    sum = x;

    while(x < y){
        x++;
        sum = sum + x;
    }

    cout << "The sum is: " << sum << endl;
    return 0;
}