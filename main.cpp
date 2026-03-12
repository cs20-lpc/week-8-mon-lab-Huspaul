#include "ArrayStack.hpp"
#include <iostream>

int main() {
    try {
        ArrayStack<int> s(5);

        s.push(10);
        s.push(20);
        s.push(30);

        std::cout << "Initial stack:\n";
        std::cout << s << std::endl;

        std::cout << "Peek: " << s.peek() << std::endl;

        s.pop();

        std::cout << "\nAfter pop:\n";
        std::cout << s << std::endl;

        s.rotate(Stack<int>::RIGHT);

        std::cout << "\nAfter rotate RIGHT:\n";
        std::cout << s << std::endl;

        s.rotate(Stack<int>::LEFT);

        std::cout << "\nAfter rotate LEFT:\n";
        std::cout << s << std::endl;
    }
    catch (std::string e) {
        std::cout << "Error: " << e << std::endl;
    }

    return 0;
}