#include <iostream>

int test() {
    int *p = nullptr;
    *p = 10;
}

int main() {
    std::cout << "hello world" << std::endl;
  std::cout << "test code coverity" << std::endl;
	test();
}
