#include <iostream>

struct box {
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void output(box bx){
    std::cout << bx.maker << std::endl;    
    std::cout << bx.height << std::endl;    

    std::cout << bx.width << std::endl;    
    std::cout << bx.length << std::endl;    
    std::cout << bx.volume << std::endl;    


}

void calcu(box *bx) {
    bx -> volume = bx -> height * bx -> length * bx -> width;







}

int main() {
    box bx = {"Jay", 0.49, 2.94, 0.49, 0.0};

    output(bx);
    calcu(&bx);

    std::cout << "\n--\n";
    output(bx);

    return 0;
}
