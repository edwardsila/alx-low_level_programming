#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *read_textfile - reads a text file and
 *prints it to the POSIX standard output
 *@filename: file pointer
 *@letters: number of letters it should read and print
 *Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL)
		return (0);
	FILE *file;

	file = fopen(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = (char *)malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	bytesRead = fread(file, buffer, letters);
	if (bytesRead == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, file);
	if (bytesWritten == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	if (bytesWritten != bytesRead)
		return (0);
	close(file);
	return (bytesRead);
}
