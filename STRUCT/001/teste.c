#include <stdio.h>

struct s_gean{
    int idade;
};

int main() {

    struct s_gean gean = {3};

    printf("%d \n", gean.idade);

    return 0;
}