#include "main.h"

/**
 * append_txt_to_file - Appends txt at the end of a file.
 * @filename: A pointer to the name of the file.
 * @txt_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_txt_to_file(const char *filename, char *txt_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (txt_content != NULL)
	{
		for (len = 0; txt_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, txt_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
