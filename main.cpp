#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout<<"Введите число: ";
    long long bigNumber;
    std::cin>>bigNumber;

    bigNumber=abs(bigNumber);

    bool rightNumber=((bigNumber > -10000000000) && (bigNumber < 10000000000));

    int digits=0;

    while (rightNumber) {
        ++digits;
        bigNumber/=10;
        rightNumber=bigNumber>0;
    }

    if (digits==0) {
        std::cout<<"Слишком много цифр!";
    } else {
        std::cout<<"Цифр в числе: "<<digits;
    }


}
