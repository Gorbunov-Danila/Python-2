#include <iostream>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 178; i++) {
        sum += i;
        std::cout << "����� ����� �� 1 �� " << i << ": " << sum << std::endl;
    }
    return 0;
}