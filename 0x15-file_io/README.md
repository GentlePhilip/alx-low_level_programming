0. Writing a function that reads a text file and prints it to the POSIX standard output
With a prototype  ssize_t read_textfile(const char *filename, size_t letters);
1. Writing a function that creates a file  with Prototype: int create_file(const char *filename, char *text_content);
2. Writing a function that appends text at the end of a file.Prototype: int append_text_to_file(const char *filename, char *text_content);
3. Writing a program that copies the content of a file to another file.Usage: cp file_from file_to 
4. Writing a program that displays the information contained in the ELF header at the start of an ELF file.Usage: elf_header elf_filename
Displayed information: (no less, no more, do not include trailing whitespace)
Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address 
