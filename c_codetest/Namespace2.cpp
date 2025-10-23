//��������
//namespace�� �̸� �浹�� �����ϰ��� ���Ǵ� �����Դϴ�.
//���� C++ �ڵ忡�� ��ĭ(_____)�� �� �˸��� �ڵ带 ä�켼��.

#include <iostream>

namespace Animal {
    void sound() {
        std::cout << "Animal sound" << std::endl;
    }
}

namespace Dog {
    void sound() {
        std::cout << "Bark" << std::endl;
    }
}

int main() {
    Animal::sound(); //��ĭä��� 1
    Dog::sound(); //��ĭä��� 2

    return 0;
}