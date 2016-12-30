#include <string>
#include <stdio.h>
#include "../inc/Foo.h"

Foo::Foo() {
    this->foo = "foo";
}

std::string Foo::sayFoo() {
    return this->foo;
}

