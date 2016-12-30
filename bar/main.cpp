#include <iostream>
#include <string>
#include "Foo.h"

int main() {

    Foo foo = Foo();

    std::cout << foo.sayFoo() << "bar" << std::endl;

    exit(0);
}

