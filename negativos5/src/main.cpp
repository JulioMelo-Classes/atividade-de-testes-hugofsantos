#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.
    int countNegatives = 0;
    int number = 0;

    for(int i=0;i<SIZE;i++){
        cin >> number;

        countNegatives = (number<0)?countNegatives+1:countNegatives;
    }
    cout << countNegatives;

    return 0;
}
