#include <stdio.h>
#include <string.h>

struct price{
    double price;
    char product[100];
    int no;
};

int main(){
    struct price i1 = {.price = 14.6, .product = "Box", .no = 3}; //Initialization using Designated Initializer List

    printf("The price of %d %s(es) is %0.2f where each %s cost %0.2f", i1.no, i1.product, i1.price*i1.no,i1.product,i1.price);
}
