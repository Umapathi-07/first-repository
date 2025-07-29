//program to print "welcome to ds" without printf statement
#include <unistd.h>
int main() {
    const char *message = "Welcome to DS\n";
    write(1, message, 14); // 1 = stdout, 14 = length of message
    return 0;
}

