#include <stdio.h>
#include <stdarg.h>

void my_sum(char a, int count , ...) {
    va_list ap;
    va_start(ap, count);

    if (a == 'S') {
        for (int i=0;i<count;i++){
            char* HW = va_arg(ap, char*);
            printf("%s ", HW);
        }
        printf("\n");
    } else if (a == 'C') {
        for (int i=0;i<count;i++){
            char CNU = va_arg(ap, int);
            printf("%c",CNU);
        }
        printf("\n");
    } else if (a == 'D') {
        int total = 0;
        
        for(int i=0;i<count;i++) {
            total += va_arg(ap, int);
        }
        printf("%d\n", total);
    }
    va_end(ap);

}

int main() {
    my_sum('S', 2, "Hello", "World");
    my_sum('C', 3, 'C', 'N', 'U');
    my_sum('D', 4, 10, 20, 30, 40);

    return 0;
}
