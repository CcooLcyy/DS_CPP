#ifndef LINKED_LIST_
#define LINKED_LIST_

#include <memory>
#include <string>

namespace Data_struct {
namespace Linked_list {
struct Node {
    using node_ptr = std::shared_ptr<Node>;
    using value_type = int;

    Node() : Node(0, nullptr) {}
    Node(value_type value, node_ptr next) : value_(value), next_(next) {}

    value_type value_;
    node_ptr next_;
};  //struct Node

class List {
public:
    using value_type = Node::value_type;
    using node_ptr = Node::node_ptr;
    using pos_type = long;

    List() : List(0) {}
    // 用0填满给定长度的链表
    List(int length) : head_(std::make_shared<Node>()) {
        for(int i = 0; i != (length); i++) {
           insert(1, 0);
        }
    }
    List(char *length) : List(std::stoi(length)) {}
    bool empty() const {return !node_->value_;}
    bool insert(pos_type pos, value_type insert_value) {
        if(find_node(pos)) {
            auto node = find_node(pos);
            auto new_node = std::make_shared<Node>(insert_value, node->next_);
            node->next_ = new_node;
            head_->value_++;
            return true;
        } else {
            return false;
        }
    }
    List& remove(pos_type pos);
    List& modify(pos_type pos, value_type modified_value);
    List& check(pos_type pos) const;
    int length() const {return head_->value_;}
    List& erase();
private:
    node_ptr head_;
    node_ptr node_;
    node_ptr find_node(pos_type pos) const {
        if(pos <= head_->value_+1) {
            node_ptr list_node = head_;
            for(auto i = 0; i != pos - 1; i++) {
                list_node = list_node->next_;
            }
            return list_node;
        } else {
            return nullptr;
        }
    }
};  //class Linked_list
}   //namespace Linked_list
}   //namespace Data_struct

#endif