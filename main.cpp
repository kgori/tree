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

    hookup(a[0], x[0], 0.6);
    hookup(b[0], x[1], 0.5);
    hookup(c[0], y[0], 0.3);
    hookup(d[0], y[1], 0.2);
    hookup(x[2], y[2], 0.5);

    return 0;
}