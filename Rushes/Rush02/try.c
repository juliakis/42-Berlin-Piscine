#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <ctype.h>

#define BUFFER_SIZE 4096

typedef struct {
    long long key;
    char *value;
} HashMap;

// Function to write a string to stdout
void ft_putstr(char *str) {
    while (*str)
        write(1, str++, 1);
}

// Function to trim leading and trailing spaces
char *trim_spaces(char *str) {
    while (*str && isspace((unsigned char)*str)) str++;
    char *end = str;
    while (*end) end++;
    while (end > str && isspace((unsigned char)*(end - 1))) end--;
    *end = '\0';
    return str;
}

// Function to parse the dictionary file
int parse_dictionary(HashMap **map, const char *filename) {
    int fd = open(filename, O_RDONLY);
    if (fd < 0) {
        write(2, "Dict Error\n", 11);
        return -1;
    }
    
    char buffer[BUFFER_SIZE];
    int bytes_read = read(fd, buffer, BUFFER_SIZE - 1);
    close(fd);
    if (bytes_read <= 0) {
        write(2, "Dict Error\n", 11);
        return -1;
    }
    buffer[bytes_read] = '\0';
    
    *map = malloc(50 * sizeof(HashMap));
    if (!*map) return -1;
    
    int index = 0;
    char *line = buffer;
    while (*line) {
        char *sep = line;
        while (*sep && *sep != ':') sep++;
        if (!*sep) break;
        *sep = '\0';
        long long key = atoll(trim_spaces(line));
        char *value = trim_spaces(sep + 1);
        
        (*map)[index].key = key;
        (*map)[index].value = malloc(100);
        int i = 0;
        while (value[i] && i < 99) {
            (*map)[index].value[i] = value[i];
            i++;
        }
        (*map)[index].value[i] = '\0';
        
        index++;
        while (*sep && *sep != '\n') sep++;
        if (*sep) line = sep + 1;
    }
    return index;
}

// Lookup function
char *lookup(HashMap *map, int size, long long key) {
    for (int i = 0; i < size; i++) {
        if (map[i].key == key) return map[i].value;
    }
    return NULL;
}

// Recursive function to convert number to words
void convert_to_words(HashMap *map, int size, long long num) {
    if (num == 0) {
        ft_putstr("zero\n");
        return;
    }
    
    char *word = lookup(map, size, num);
    if (word) {
        ft_putstr(word);
        write(1, "\n", 1);
        return;
    }
    
    if (num >= 100) {
        convert_to_words(map, size, num / 100);
        ft_putstr(" hundred ");
        num %= 100;
    }
    if (num > 20) {
        ft_putstr(lookup(map, size, (num / 10) * 10));
        write(1, " ", 1);
        num %= 10;
    }
    if (num > 0) {
        ft_putstr(lookup(map, size, num));
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv) {
    if (argc < 2 || argc > 3) {
        write(2, "Error\n", 6);
        return 1;
    }
    
    const char *dict_file = (argc == 3) ? argv[1] : "numbers.txt";
    long long number = atoll(argv[argc - 1]);
    if (number < 0) {
        write(2, "Error\n", 6);
        return 1;
    }
    
    HashMap *map;
    int size = parse_dictionary(&map, dict_file);
    if (size < 0) {
        write(2, "Dict Error\n", 11);
        return 1;
    }
    
    convert_to_words(map, size, number);
    
    for (int i = 0; i < size; i++) free(map[i].value);
    free(map);
    
    return 0;
}

