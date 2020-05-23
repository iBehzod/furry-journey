#include <stdio.h>

struct Card
{
    int face;
    int shape;
    int color;
};

int main() {
    struct Card deck[52] = { {1,0,0}, {2,0,0}};
    printf("%d\n", deck[0].face);
    printf("%d", deck[1].face);
    return 0;

}
 