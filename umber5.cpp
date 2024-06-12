#include <iostream>

// تعریف تابع inRange برای عدد
int inRange(int x, int low, int high) {
    if (x > low && x < high) {
        return 0; // در صورتی که x بین low و high باشد
    }
    else if (x >= high) {
        return 1; // در صورتی که x بیشتر یا مساوی high باشد
    }
    else {
        return -1; // در صورتی که x کوچکتر یا مساوی low باشد
    }
}

// تعریف تابع inRange برای کاراکتر
int inRange(char x, char low, char high) {
    if (x > low && x < high) {
        return 0; // در صورتی که x بین low و high باشد
    }
    else if (x >= high) {
        return 1; // در صورتی که x بیشتر یا مساوی high باشد
    }
    else {
        return -1; // در صورتی که x کوچکتر یا مساوی low باشد
    }
}

int main() {
    int result1 = inRange(5, 2, 8); // برای اعداد
    int result2 = inRange('c', 'a', 'f'); // برای کاراکترها

    std::cout << "Result 1: " << result1 << std::endl; // خروجی برای اعداد
    std::cout << "Result 2: " << result2 << std::endl; // خروجی برای کاراکترها

    return 0;
}
