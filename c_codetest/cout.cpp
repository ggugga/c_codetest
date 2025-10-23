//cout은 C++에서 표준 출력 스트림 객체입니다.
//printf 대용으로 사용될 수 있지만, 소숫점, 포맷이 복잡한 문자열은 printf가 더 간결할 수 있습니다.
//다음 소스코드를 이해하시고, 줄바꿈 문제를 빈 칸에 넣어주세요.

#include <iostream>

int main() {
    double n1 = 3.141592;
    double n2 = 3.1;

    std::cout << std::fixed;
    std::cout.precision(3);

    std::cout << n1 << std::endl; //문제 1
    std::cout << n2 << std::endl; //문제 2

    return 0;
}