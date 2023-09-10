#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 1 (Failure)
 */
int main(void)
{
    const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    ssize_t written = write(STDERR_FILENO, message, sizeof(message) - 1); // Write to stderr (file descriptor 2)

    if (written == -1) {
        // Error occurred while writing
        return 1;
    }

    return 1; // Return 1 as required
}
