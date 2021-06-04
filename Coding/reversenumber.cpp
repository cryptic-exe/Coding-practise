#include <iomanip>
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int lastdigit;

    int reverse = 0;
    int no_of_digits = 0;

    while(n!=0) {
        ++no_of_digits;
        lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;
        n = n / 10;
    }
 
    std::cout << std::setw(no_of_digits) << std::setfill('0') << reverse << '\n';
}