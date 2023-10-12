#include <stdio.h>
#include <unistd.h>

int main() {
    char *password = "password";
    char *salt = "MK";

    char *hashed_password = crypt(password, salt);

    printf("Hashed password: %s\n", hashed_password);
    
    return 0;
}

