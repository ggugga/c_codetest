//cout�� C++���� ǥ�� ��� ��Ʈ�� ��ü�Դϴ�.
//printf ������� ���� �� ������, �Ҽ���, ������ ������ ���ڿ��� printf�� �� ������ �� �ֽ��ϴ�.
//���� �ҽ��ڵ带 �����Ͻð�, �ٹٲ� ������ �� ĭ�� �־��ּ���.

#include <iostream>

int main() {
    double n1 = 3.141592;
    double n2 = 3.1;

    std::cout << std::fixed;
    std::cout.precision(3);

    std::cout << n1 << std::endl; //���� 1
    std::cout << n2 << std::endl; //���� 2

    return 0;
}