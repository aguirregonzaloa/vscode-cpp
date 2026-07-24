#include <iostream>

#include <optional>
#include <string>
#include "SimpleClass.hpp"

// optional can be used as the return type of a factory that may fail
std::optional<std::string> create(bool b)
{
    if (b)
        return "Godzilla";
    return {};
}

// std::nullopt can be used to create any (empty) std::optional
auto create2(bool b)
{
    return b ? std::optional<std::string>{"Godzilla"} : std::nullopt;
}

int main()
{
    SimpleClass sc;
    sc.print();
    /*lambda function simple example
    auto add = [](int x, int y) { return x + y; };
    int result = add(3, 4); // result is 7
    a lambda function (or lambda expression) is an anonymous,
    inline function object introduced in C++11 that allows you
    to define a function at the point where it is used.
  */
    // auto add = [](int x, int y)
    // { return x + y; };
    // int result = add(3, 4); // result is 7
    // std::cout << "Result: " << result << std::endl;

    std::cout << "create(false) returned "
              << create(false).value_or("empty") << '\n';

    // optional-returning factory functions are usable as conditions of while and if
    if (auto str = create2(false))
        std::cout << "create2(true) isreturned " << *str << '\n';
    else
        std::cout << "create2(false) is null" << std::endl;

    return 0;
}
