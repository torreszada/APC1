#include <stdio.h>

int main() { 
    
    for(int i=0; i<10; i++) {
        printf("%i\n", i);
    }
    
    for(int i = 9; i>=0; i--) {
        printf("%i\n", i);
    }

    for(;;) {
        printf("Ao infinito e alem!\n");
        break; // Para evitar loop infinito, remova o break para ver o loop infinito
    }
    
    

    return 0; 
}