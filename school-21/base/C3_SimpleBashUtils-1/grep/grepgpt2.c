#include "grep.h"
#include <getopt.h>
#include <regex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pattern_add(arguments* arg, char* pattern) {
    // Добавление шаблона...
}

void add_reg_from_file(arguments* arg, char* filepath) {
    FILE* f = fopen(filepath, "r");
    if (f == NULL) {
        if (!arg->s)
            perror(filepath);
        exit(1);
    }
    char* line = NULL;
    size_t len = 0; // Переименование переменной
    ssize_t read = getline(&line, &len, f); // Исправление типа данных
    while (read != -1) {
        // Обработка строки из файла...
        read = getline(&line, &len, f);
    }
    free(line);
    fclose(f);
}

arguments argument_parser(int argc, char** argv) {
    arguments arg = {0};
    int opt;
    while ((opt = getopt(argc, argv, "e:ivclnhsf:o")) != -1) {
        switch (opt) {
        case 'e':
            arg.e = 1;
            arg.pattern = optarg;
            break;
        case 'i':
            arg.i = REG_ICASE;
            break;
        case 'v':
            arg.v = 1;
            break;
        case 'c':
            arg.c = 1;
            break;
        case 'l':
            arg.l = 1; // Исправление ошибки в установке флага l
            break;
        case 'n':
            arg.n = 1;
            break;
        case 'h':
            arg.h = 1;
            break;
        case 's':
            arg.s = 1;
            break;
        case 'f':
            arg.f = 1;
            break;
        case 'o':
            arg.o = 1;
            break;
        case '?':
            perror("ERROR");
            exit(1);
            break;
        }
    }
    if (arg.pattern == NULL && optind < argc) { // Исправление условия
        arg.pattern = argv[optind++];
    }
    return arg;
}

void output_line(char* line, int n) {
    for (int i = 0; i < n; i++) {
        putchar(line[i]);
    }
    // Возможно, здесь должен быть возврат каретки, чтобы строка выводилась корректно
    putchar('\n');
}

void processLine(char* line) {
    // Обработка строки...
}

void processFile(arguments arg, char* path, regex_t* reg) {
    FILE* f = fopen(path, "r");
    if (f == NULL) {
        if (!arg.s)
            perror(path);
        exit(1);
    }
    char* line = NULL;
    size_t len = 0; // Переименование переменной
    ssize_t read = 0; // Инициализация переменной
    int line_count = 0;
    int c = 0;
    read = getline(&line, &len, f);
    while (read != -1) {
        int result = regexec(reg, line, 0, NULL, 0);
        if ((result == 0 && !arg.v) || (arg.v && result != 0)) {
            if (!arg.c && !arg.l) {
                if (arg.n)
                    printf("%d:", line_count);
                output_line(line, read);
            }
            c++;
        }
        read = getline(&line, &len, f);
        line_count++;
    }
    if (arg.c && !arg.l)
        printf("%d\n", c);
    if (arg.l)
        printf("%s\n", path);
    fclose(f);
}

void output(arguments arg, int argc, char** argv) {
    regex_t re;
    int error = regcomp(&re, arg.pattern, arg.i);
    if (error)
        perror("Error");
    for (int i = optind; i < argc; i++) {
        processFile(arg, argv[i], &re); // Исправление синтаксической ошибки
    }
}

int main(int argc, char** argv) {
    arguments arg = argument_parser(argc, argv); // Исправление названия функции
    output(arg, argc, argv);
    return 0;
}
