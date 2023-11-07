#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i;
    int st[n];
    int min, max;
    
    for (i = 0; i < n; i++) {
        scanf("%d", &st[i]);
    
        if (i == 0) max = min = st[i];
        if (st[i] > max) max = st[i];
        if (st[i] < min) min = st[i];
    }
    
    printf("%d %d", min, max);
    
    return 0;
}