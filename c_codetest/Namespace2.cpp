//연습문제
//namespace는 이름 충돌을 방지하고자 사용되는 문법입니다.
//다음 C++ 코드에서 빈칸(_____)에 들어갈 알맞은 코드를 채우세요.

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
    Animal::sound(); //빈칸채우기 1
    Dog::sound(); //빈칸채우기 2

    return 0;
}