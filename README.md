
# 42 Get Next Line
![Language](https://img.shields.io/static/v1?label=language&message=c&color=blue) ![Licence](https://img.shields.io/badge/license-MIT-green) ![Score](https://42-project-badge.glitch.me/users/rpinto-r/project/get-next-line) [![norminette](https://github.com/ricardoreves/42-get-next-line/actions/workflows/norminette.yml/badge.svg)](https://github.com/ricardoreves/42-get-next-line/actions/workflows/norminette.yml) 

## 🪧 Overview
### Description
Whether it's a file, stdin, or even later a network connection, you'll always need a way to read the contents line by line. It's time to start working on this function, which will be essential for your future projects.

### Goal
This project will not only allow you to add a very convenient function to your collection, but it will also make you learn a highly interesting new concept in C programming: static variables.

## 📷 Preview
```
[line:01]                                          
[line:02]                                          
[line:03]                                          
[line:04]               @@@@@@@*   ,@@@@@@ @@@@@@@ 
[line:05]             @@@@@@@      ,@@@    @@@@@@@ 
[line:06]          &@@@@@@#        ,@      @@@@@@@ 
[line:07]        @@@@@@@                 ,@@@@@@@  
[line:08]     %@@@@@@%                 @@@@@@@.    
[line:09]   @@@@@@@                  @@@@@@@       
[line:10]  @@@@@@@@@@@@@@@@@@@@@,  ,@@@@@@@      @ 
[line:11]  @@@@@@@@@@@@@@@@@@@@@,  ,@@@@@@@   @@@@ 
[line:12]                @@@@@@@,  ,@@@@@@@ @@@@@@ 
[line:13]                @@@@@@@,                  
[line:14]                @@@@@@@,                  
[line:15]                                          
[line:16]                                          
[line:17]                                          
```

## 🚀 Getting Started

### Installation
1. Clone the project.
```
git clone git@github.com:ricardoreves/42-get-next-line.git
```
2. Navigate to the project directory.
```
cd 42-get-next-line
```

## 🕹 Usage
1. implementation of `get_next_line()` function
```c
#include "get_next_line.h"

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	*line;

	if (argc != 2)
		printf("Error: a file path is required\n");
	else
	{
		i = 0;
		fd = open(argv[1], O_RDONLY);
		while (++i)
		{
			line = get_next_line(fd);
			if (!line)
				break ;
			printf("[line:%.2d]%s", i, line);
			free(line);
		}
		close(fd);
	}
	return (0);
}
```
2. Compile program and create executable
```
gcc -Wall -Werror -Wextra main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=42 -o prog
```
3. Run program with a file path
```
./prog file-to-read.txt
```
 
## 📚 References
- [linux.die.net](https://linux.die.net/man/3/open) - open(3) Linux manual page
- [linux.die.net](https://linux.die.net/man/3/read) - read(3) Linux manual page
- [geeksforgeeks.org](https://www.geeksforgeeks.org/static-variables-in-c/) - Static Variables in C
- [geeksforgeeks.org](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/) - Input-output system calls in C | Create, Open, Close, Read, Write

## 🧰 Tools
- [github.com](https://github.com/Tripouille/gnlTester) - gnlTester (2019+). Tester for the get next line project of 42 school (with personalized leaks checking on mac, using valgrind on linux)

## 📝 License
Distributed under the MIT License. See [LICENSE](LICENSE) for more information.


