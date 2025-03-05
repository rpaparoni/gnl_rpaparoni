# 📜 Get Next Line - Lectura de archivos eficiente en C

**Get Next Line (gnl)** es una función en C que permite leer archivos línea por línea de manera eficiente. Es capaz de manejar archivos de texto, la entrada estándar y múltiples descriptores de archivos simultáneamente.

## 📌 **Características**
✅ Lee archivos línea por línea sin cargar todo en memoria.  
✅ Funciona con cualquier tipo de archivo y `stdin`.  
✅ Soporta múltiples descriptores de archivos simultáneamente.  
✅ Implementado siguiendo las normas de la **Norminette**.  

## 🛠️ **Funcionamiento**
`get_next_line` lee un archivo hasta encontrar un salto de línea (`\n`) o el final del archivo (`EOF`). Utiliza un **buffer dinámico** para manejar eficientemente la memoria y evitar cargas innecesarias en el sistema.

## 📄 **Estructura del proyecto**
```
📂 gnl_rpaparoni/
 ├── get_next_line.c      # Implementación principal
 ├── get_next_line.h      # Archivo de cabecera
 ├── get_next_line_utils.c # Funciones auxiliares
 ├── Makefile             # Compilación rápida
```

## 🔧 **Instalación y Uso**
### 1️⃣ **Clonar el repositorio**
```bash
git clone https://github.com/rpaparoni/gnl_rpaparoni.git
cd gnl_rpaparoni
```
### 2️⃣ **Compilar el proyecto**
```bash
make
```
Esto generará el archivo objeto `get_next_line.o`, listo para ser enlazado en cualquier programa.

### 3️⃣ **Ejemplo de uso**
```c
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main()
{
    int fd = open("archivo.txt", O_RDONLY);
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

### 4️⃣ **Compilar con `get_next_line`**
```bash
gcc main.c get_next_line.c get_next_line_utils.c -o programa
```

## 📜 **Licencia**
Este proyecto es de código abierto y puede ser utilizado libremente.
 
🐙 **GitHub:** [rpaparoni](https://github.com/rpaparoni)

