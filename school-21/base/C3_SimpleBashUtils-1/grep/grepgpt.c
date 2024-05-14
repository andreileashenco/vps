#include <getopt.h>
#include <regex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int e;
    char* pattern;
    int i;
    int v;
    int c;
    int l;
    int n;
    int h;
    int s;
    int f;
    int o;
} arguments;

void pattern_add(arguments* arg, char* pattern) {
    // Add pattern handling code here if needed
}

void add_reg_from_file(arguments* arg, char* filepath) {
    FILE* f = fopen(filepath, "r");  // Open file in read mode
    if (f == NULL) {
        if (!arg->s) perror(filepath);
        exit(1);
    }
    char* line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, f)) != -1) {
        // Process each line if needed
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
                arg.i = 1;
                break;
            case 'v':
                arg.v = 1;
                break;
            case 'c':
                arg.c = 1;
                break;
            case 'l':
                arg.c = 1;
                arg.l = 1;
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
    if (arg.pattern == NULL) {
        arg.pattern = argv[optind];
        optind++;
    }
    return arg;
}

void output_line(char* line, int n) {
    for (int i = 0; i < n; i++) {
        putchar(line[i]);
    }
    // Add newline if needed
    putchar('\n');
}

void processLine(char* line) {
    // Process each line if needed
}

void processFile(arguments arg, char* path, regex_t* reg) {
    FILE* f = fopen(path, "r");
    if (f == NULL) {
        if (!arg.s)
            perror(path);
        exit(1);
    }
    char* line = NULL;
    size_t len = 0;
    ssize_t read;
    while ((read = getline(&line, &len, f)) != -1) {
        int result = regexec(reg, line, 0, NULL, 0);
        if (result == 0)
            output_line(line, read);
    }
    free(line);
    fclose(f);
}

void output(arguments arg, int argc, char** argv) {
    regex_t re;
    int error = regcomp(&re, arg.pattern, 0);
    if (error)
        perror("Error");
    for (int i = optind; i < argc; i++) {
        processFile(arg, argv[i], &re);
    }
}

int main(int argc, char** argv) {
    arguments arg = argument_parser(argc, argv);
    output(arg, argc, argv);
    return 0;
}
