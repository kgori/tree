#include <iostream>
#include "node.h"
using namespace std;


int main() {
    InnerNode x{};
    InnerNode y{};
    LeafNode a{};
    LeafNode b{};
    LeafNode c{};
    LeafNode d{};

    x[0]->id=4;
    x[1]->id=5;
    x[2]->id=6;
    y[0]->id=7;
    y[1]->id=8;
    y[2]->id=9;
    a[0]->id=0;
    b[0]->id=1;
    c[0]->id=2;
    d[0]->id=3;

    hookup(a[0], x[0], 0.6);
    hookup(b[0], x[1], 0.5);
    hookup(c[0], y[0], 0.3);
    hookup(d[0], y[1], 0.2);
    hookup(x[2], y[2], 0.1);

    postorder(x[0]);
    preorder(x[0]);
    return 0;
};
