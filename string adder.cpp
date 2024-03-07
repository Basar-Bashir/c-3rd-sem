#include <iostream>
#include <cstring>

class String {
private:
    static const int MAX = 80;
    char str[MAX];

public:
    String() {
        str[0] = '\0';
    }

    String(const char s[]) {
        strcpy(str, s);
    }

    void display() const {
        std::cout << str;
    }

    String operator+= (const String& s) {
        if (strlen(str) + strlen(s.str) < MAX) {
            strcat(str, s.str);
        } else {
            std::cout << "String is too long!" << std::endl;
        }
        return *this;
    }
};

int main() {
    String s1 = "Basar ";
    String s2 = "Bashir";
    String s3;

    std::cout << "s1: ";
    s1.display();
    std::cout << std::endl;

    std::cout << "s2: ";
    s2.display();
    std::cout << std::endl;

    s1 += s2;
    std::cout << "s1 after concatenation: ";
    s1.display();
    std::cout << std::endl;

    s3 = s1 += s2;
    std::cout << "s3: ";
    s3.display();
    std::cout << std::endl;

    return 0;
}