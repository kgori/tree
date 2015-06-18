//
// Created by Kevin Gori on 18/06/15.
//

#include "node.h"
void hookup(node* a, node* b, double length) {
    a->out = b;
    b->out = a;
}
