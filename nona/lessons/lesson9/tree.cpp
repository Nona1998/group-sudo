#include <iostream>
int main () {
    int h;
    std::cout <<"Please, enter the height of the tree: ";
    std::cin >>h;
    //tree left up
   /* for (int i = 1; i <= h; i++) {
        for (int n = 1; n <= i; n++) {
            std::cout <<"^";
        }
        std::cout <<std::endl;
    }*/
    //tree left down
    /*for (int i = 1; i <= h; i++) {
        for (int n = h; n >= i; n--) {
            std::cout <<"^";
        }
        std::cout <<std::endl;
    }*/
    //tree right down
   /* for (int i = 1; i <= h; i++) {
        for (int n = 1; n <= i; n++) {
            std::cout <<" ";
        }
        for (int m = h; m >= i; m--) {
            std::cout <<"^";
        }
        std::cout <<std::endl;
    }*/
    //tree right up
    /*for (int i = 1; i <= h; i++) {
        for (int m = h; m >= i; m--) {
            std::cout <<" ";
        }
        for (int n = 1; n <= i; n++) {
            std::cout <<"^";
        }
        std::cout <<std::endl;
    }*/
    //tree up
   /* for (int i = 1; i <= h; i++) {
        for (int n = h; n >= i; n--) {
            std::cout <<" ";
        }
        for (int m = 1; m <= i; m++) {
            std::cout <<"^";
        }
        for (int e = 2; e <= i; e++) {
            std::cout <<"^";
        }
        for (int f = h; f >= i; f--) {
            std::cout <<" ";
        }
        std::cout <<std::endl;
    }*/
    //tree down
    for (int i = 1; i <= h; i++) {
        
        for (int f = 1; f <= i; f++) {
            std::cout <<" ";
        }
        for (int e = h - 1; e >= i; e--) {
            std::cout <<"^";
        }
        for (int n = h; n >= i; n--) {
            std::cout <<"^";
        }
        for (int m = 1; m <= i; m++) {
            std::cout <<" ";
        }
        std::cout <<std::endl;
    }
    return 0;
}

