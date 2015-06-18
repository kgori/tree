//
// Created by Kevin Gori on 18/06/15.
//

#include "node.h"
void hookup(node* a, node* b, double length) {
    a->out = b;
    b->out = a;
    a->brlen = b->brlen = length;
}

void postorder(node* n) {
    for (node* c=n->next; c != n; c=c->next) {
        postorder(c->out);
    }
    std::cout << n->id << std::endl;
}
