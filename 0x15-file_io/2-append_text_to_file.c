#include "main.h"

/**
 * append_text_to_file - function that creates a file.
 *
 * @filename: file to be created
 * @text_content: content in file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int letters;
	int perm;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters] != '\0'; letters++)
		;
	perm = write(file, text_content, letters);

	if (perm == -1)
		return (-1);

	close(file);

	return (1);
}
