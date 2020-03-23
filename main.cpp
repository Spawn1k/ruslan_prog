#include <iostream>
#include <stdbool.h>

bool check(int m) { //check if digits inside a number are in right order
    int last;
    while (m > 0) {
        last = m % 10;
        m = (int)(m / 10);
        if ((last >= m % 10) && (m != 0)) {
            return false;
        }
    }
    return true;
}
int main() {
    int num;
    bool res;
    std::cin >> num; //number of elements in massive
    int *mass = new int[num]; //memory init for massive
    for (int i = 0; i < num; i++) {
        mass[i] = i + 1;
        res = check(mass[i]); //check if OK with digits
        if ((res == 1) || (mass[i] < 10)) {
            std::cout << mass[i] << " ";
        }
    }
    delete [] mass; //memory cleaning
    return 0;
}
