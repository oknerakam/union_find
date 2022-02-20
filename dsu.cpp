#include"dsu.h"

void forest::Make_Set() {
    for (int i = 0; i < 100000; i++) {
        p[i] = i;
        rk[i] = 1;
    }
}
int forest::Find_x(int v) {
    if (p[v] == v) {
        return v;
    }
    else {
        return p[v] = Find_x(p[v]);
    }
}
bool forest::Union(int a, int b) {
    int ra = Find_x(a), rb = Find_x(b);

    if (ra == rb) {
        return false;
    }
    else {
        if (rk[ra] < rk[rb]) {
            p[ra] = rb;
        }
        else if (rk[rb] < rk[ra]) {
            p[rb] = ra;
        }
        else {
            p[ra] = rb;
            rk[rb]++;
        }

        return true;
    }
}
