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

class List {
public:
    using value_type = Node::value_type;
    using node_ptr = Node::node_ptr;

    List() : head(std::make_shared<Node>()) {}
    bool empty() const {return !node->value_;}
    List& insert(int position, value_type insert_value);
    List& remove(int position);
    List& modify(int position, value_type modified_value);
    List& check(int position) const;
    List& erase();
private:
    node_ptr head;
    node_ptr node;
};  //class Linked_list

}   //namespace Linked_list

#endif