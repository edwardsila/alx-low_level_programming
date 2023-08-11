#include "main.h"

/**
* append_text_to_file - appends a text at the end of a file.
* @filename: name of the file
* @text_content: NULL terminated string to add at the end of the file
*
* Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t len = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		if (write(f, text_content, len) != len)
		{
			close(f);
			return (-1);
		}
	}
		close(f);
		return (1);
}
