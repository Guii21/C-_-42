#include <unistd.h>

int main(void) {
    int i = 1;

    while (i <= 100) {
        // 1. Múltiplo de 4 e 7 ao mesmo tempo
        if (i % 4 == 0 && i % 7 == 0) {
            write(1, "buzzfizz\n", 9);
        } 
        // 2. Múltiplo apenas de 4
        else if (i % 4 == 0) {
            write(1, "buzz\n", 5);
        } 
        // 3. Múltiplo apenas de 7
        else if (i % 7 == 0) {
            write(1, "fizz\n", 5);
        } 
        // 4. Número normal (conversão direta para string)
        else {
            char c[4];
            int temp = i;
            
            if (temp == 100) {
                write(1, "100\n", 4);
            } else {
                if (temp >= 10) {
                    c[0] = (temp / 10) + '0'; // Dezena
                    c[1] = (temp % 10) + '0'; // Unidade
                    c[2] = '\n';
                    write(1, c, 3);
                } else {
                    c[0] = temp + '0';        // Unidade única
                    c[1] = '\n';
                    write(1, c, 2);
                }
            }
        }
        i++;
    }
    
    return 0;
}
