#ifndef LINKED_LIST
#define LINKED_LIST

#include <memory>

namespace Linked_list {

struct Node {
    using node_ptr = std::shared_ptr<Node>;
    using value_type = int;

    Node() : Node(0, nullptr) {}
    Node(int value, Node* next) : value_(value), next_(next) {}
    Node(const Node&) = default;
    Node& operator=(const Node&) = default;

    value_type value_;
    node_ptr next_;
};  //struct Node

class List {
public:
    using value_type = Node::value_type;
    using node_ptr = Node::node_ptr;
    using pos_type = int;

    List() : head_(std::make_shared<Node>()) {}
    bool empty() const {return !node_->value_;}
    List& insert(pos_type pos, value_type insert_value);
    List& remove(pos_type pos);
    List& modify(pos_type pos, value_type modified_value);
    List& check(pos_type pos) const;
    List& erase();
private:
    node_ptr head_;
    node_ptr node_;
    bool vaild_pos(pos_type pos) const {return pos <= head_->value_;}
    List& find_node(pos_type pos) const;
};  //class Linked_list

}   //namespace Linked_list

#endif