#include <iostream>
#include "Linked_list.hpp"

int main(int argc, char *argv[]) {
    using namespace Data_struct::Linked_list;
    List list(argv[1]);
    std::cout << list.length();
}