#ifndef LINKED_LIST
#define LINKED_LIST

#include <memory>

namespace Linked_list {

struct Node {
    using node_ptr = std::shared_ptr<Node>;
    using value_type = int;

    Node() : Node(0, nullptr) {}
    Node(int value, Node* next) : value_(value), next_(next) {}

    value_type value_;
    node_ptr next_;
};  //struct Node

class Linked_list {
public:
    using value_type = Node::value_type;
    using node_ptr = Node::node_ptr;

    Linked_list() : node(std::make_shared<Node>()) {}
    bool empty() const;
    Linked_list& insert(int position, value_type insert_value);
    Linked_list& remove(int position);
    Linked_list& modify(int position, value_type modified_value);
    Linked_list& check(int position) const;
    Linked_list& erase();
private:
    node_ptr node;
    int size = 0;
};  //class Linked_list

}   //namespace Linked_list

#endif