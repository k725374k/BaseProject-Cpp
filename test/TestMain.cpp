#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
    assert(getTriangleType(4, 3, 5) == 0);
    assert(getTriangleType(5, 3, 4) == 0);
    assert(getTriangleType(3, 4, 5) == 0);
    assert(getTriangleType(3, 4, 6) == -1);
    assert(getTriangleType(1, 1, 2) == -2);
    assert(getTriangleType(7, 8, 9) == 1);
}

void testDrawCardcount() {
    assert(drawCardcount(5) == 1);
    assert(drawCardcount(20) == 4);
    assert(drawCardcount(100) == 20);
    assert(drawCardcount(-5) == -1);
}

int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    return 0;
}
