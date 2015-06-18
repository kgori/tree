//
// Created by Kevin Gori on 18/06/15.
//

#ifndef TREE_NODE_H
#define TREE_NODE_H

#include <memory>
#include <string>
#include <array>
#include <iostream>

class node;
class nodeInfo;

using nodeUPtr = std::unique_ptr<node>;
using infoUPtr = std::unique_ptr<nodeInfo>;

enum class Orientation{UP, DOWN};

constexpr size_t LEAFSIZE = 1;
constexpr size_t INNERSIZE = 3;

struct node {
    node* next = nullptr;
    node* out = nullptr;
    double brlen;
    Orientation orientation;
    std::string a = "a";
};

struct nodeInfo {
    std::string label;
};

class InnerNode {
    std::array<nodeUPtr, 3> nodes;
    infoUPtr info;
public:
    InnerNode() {
        for (size_t i=0; i < 3; ++i ) nodes[i] = std::make_unique<node>();
    }
    node* operator[](size_t i) { return nodes[i].get(); };
    const node* operator[](size_t i) const { return nodes[i].get(); };
};

class LeafNode {
    std::array<nodeUPtr, 1> nodes;
    infoUPtr info;
public:
    LeafNode() {
        nodes[0] = std::make_unique<node>();
    }
    node* operator[](size_t i) { return nodes[i].get(); };
    const node* operator[](size_t i) const { return nodes[i].get(); };
};


/*
 * Hooks up NodeA to NodeB, each of type InnerNode or LeafNode.
 * Index i is the number of the internal nodes of A and B
 * to hook up (always 0 for a leaf)
 */
void hookup(node* a, node* b, double length=1);

#endif //TREE_NODE_H
