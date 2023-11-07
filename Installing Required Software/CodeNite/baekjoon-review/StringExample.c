#include <stdio.h>

int main() {
    char st[100];
    int t;
    scanf("%d", &t); 
    
    int k;
    for (k = 0; k < t; k++) {
        scanf("%s", st);
        char first_c, last_c;
        
        int i, length = 0;
        for (i = 0; st[i] != '\0'; i++) {
            first_c = st[0];
            last_c = st[i];
            length++;
        }
        
//        printf("%d", length);
        printf("%c%c\n", first_c, last_c);
    }
    
    return 0;
}