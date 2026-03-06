#include <stdio.h>

int main() {
    int notes[] = {5, 8, 9, 7, 10, 6};
    int n = sizeof(notes) / sizeof(notes[0]);
    
    printf("Notes superieures a 8:\n");
    for (int i = 0; i < n; i++) {
        if (notes[i] > 8) {
            printf("%d\n", notes[i]);
        }
    }
    
    return 0;
}