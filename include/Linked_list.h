#ifndef LINKED_LIST
#define LINKED_LIST

#include <memory>

namespace Linked_list {

struct Node {
    using node_ptr = std::shared_ptr<Node>;
    Node() : Node(0, nullptr) {}
    Node(int value, Node* next) : value_(value), next_(next) {}

    int value_;
    std::shared_ptr<Node> next_;
};  //struct Node

class Linked_list {
public:
    Linked_list() : node(std::make_shared<Node>()) {}
    bool empty();
private:
    Node::node_ptr node;
    int size = 0;
};  //class Linked_list

}   //namespace Linked_list

#endif