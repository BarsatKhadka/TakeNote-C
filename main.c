#include <unistd.h>

int main(void) {
    char c;

    //read is a system level thing. It takes (fd- file descriptor as first param , where to store (variable's address)- second parameter and byte per request
    // as third param)

    //Currently we are at cannonical mode in terminal , meaning the user input goes only when you press enter.
    while(read(STDIN_FILENO, &c, 1) == 1);
    return 0;
}