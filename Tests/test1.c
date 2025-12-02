#include <assert.h>

int sum(int a, int b); 

int main() {
    assert(sum(2, 3) == 5);
    assert(sum(-10, 20) == 10);
    assert(sum(0, 0) == 0);
    assert(sum(100, 300) == 400);

    printf("All test cases passed!\n");
    return 0;
}
