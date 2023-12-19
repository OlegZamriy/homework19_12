#include "string_intersection.h"
#include<iostream>

int main() {
    StringIntersection str1("xdbxdbxdb");
    StringIntersection str2("fbjfxbcbnxb");

    StringIntersection result = str1 * str2;

    std::cout << "Intersection: ";
    result.display();

    return 0;
}
