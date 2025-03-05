# 📜 Get Next Line - Efficient File Reading in C

[Spanish version 🇪🇸](README_es.md)

**Get Next Line (gnl)** is a C function that allows reading files line by line efficiently. It can handle text files, standard input, and multiple file descriptors simultaneously.

## 📌 **Features**
✅ Reads files line by line without loading everything into memory.  
✅ Works with any type of file and `stdin`.  
✅ Supports multiple file descriptors simultaneously.  
✅ Implemented following the **Norminette** standards.  

## 🛠️ **Functionality**
`get_next_line` reads a file until it encounters a newline (`\n`) or the end of the file (`EOF`). It uses a **dynamic buffer** to efficiently manage memory and avoid unnecessary system loads.

## 📄 **Project Structure**
```
📂 gnl_rpaparoni/
 ├── get_next_line.c      # Main implementation
 ├── get_next_line.h      # Header file
 ├── get_next_line_utils.c # Auxiliary functions
 ├── Makefile             # Quick compilation
```

## 🔧 **Installation and Usage**
### 1️⃣ **Clone the repository**
```bash
git clone https://github.com/rpaparoni/gnl_rpaparoni.git
cd gnl_rpaparoni
```
### 2️⃣ **Compile the project**
```bash
make
```
This will generate the object file `get_next_line.o`, ready to be linked in any program.

### 3️⃣ **Usage example**
```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
    int fd = open("file.txt", O_RDONLY);
    char *line;
    
    while ((line = get_next_line(fd)))
    {
        printf("%s\n", line);
        free(line);
    }
    close(fd);
    return 0;
}
```

### 4️⃣ **Compile with `get_next_line`**
```bash
gcc main.c get_next_line.c get_next_line_utils.c -o program
```

## 📜 **License**
This project is open source and can be freely used.
  
🐙 **GitHub:** [rpaparoni](https://github.com/rpaparoni)

