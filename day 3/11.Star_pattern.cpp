#include <iostream>

int main() {
    int rows = 6; 
    
    for (int i = 0; i < rows; i++) {
        
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        
        std::cout << std::endl; 
    }
    
    return 0;
}
