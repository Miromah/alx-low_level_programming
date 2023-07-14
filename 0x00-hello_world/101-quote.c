#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * main - Entry point
 *
 * Description: A C program that prints with the put function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
const char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, message, strlen(message));
return 1;
}
