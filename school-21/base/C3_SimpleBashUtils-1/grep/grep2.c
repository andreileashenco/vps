//#include "grep.h"

#include <getopt.h>
#include <regex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pattern_add(arguments* arg, char* pattern) {
    //?
}


void add_reg_from_file(arguments* arg, char** filepath) {
  FILE* f = fopen(filepath, "r");  // r режим чтения
  if (f == NULL) {
    if (!arg->s) perror(filepath);
    exit(1);
  }
  char* line = NULL;
  size_t menlen = 0;
  int read = getline(&line, &menlen, f);
  while (read != -1) {
    read = getline(&line, &menlen, f);
  }
}
free(line);
fclose(f);

arguments argument_parser(int argc, char** argv) { 
  arguments arg = {0};  
  int opt; 
  while ((opt = getopt(argc, argv, "e:ivclnhsf:o")) != -1) {
    switch (opt) {
    case 'e': 
        arg.e = 1; //после флага е регулярные выражения
        arg.pattern = optarg;// в переменную patern сохраняем глобальную переменную optarg
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

void output_line(char* line, int n) {//вывод линии по символу
    for (int i = 0; i < n; i++) {
        putchar(line[i]);
    }
    //?
}
//обработка строки
void processLine(char) {
//?
  }

//обработка файла
void processFile(arguments arg, char* path, regex_t* reg) {
  FILE* f = fopen(path, "r");
  if (f == NULL) {
    if (!arg.s)
    perror(path);
    exit(1);
  }
  char* line = NULL;
  size_t menlen = 0;
  int read = 0;
  int line_count = 0;
  int c = 0;
  read = getline(&line, &menlen, f);
  //?
  while (read != -1) {
    int result = regexec(reg, line, 0, NULL, 0); 
   if (result == 0 && !arg.v) || (arg.v && result != 0)) {
    if(!arg.c && !arg.l){
    if(arg.n) printf("%d:",line_count);
    output_line(line,read);
    }
    c++;
    }
    read = getline(&line, &menlen, f);
    line_count++;
    free(line);
    if (arg.c && !arg.l) printf("%d\n",c);
    if(arg.l) printf("%s\n",path);
    fclose(f);
  }
  //вывод из всех файлов
  void output(arguments arg, int argc, char** argv) {
    regex_t re;
    int error = regcomp(&re, arg.pattern, arg.i);
    if (error) perror("Error");
    for(int i = optind; i < argc; i++) {
      processFile[arg, argv[i], &re]
    }
  }

//p.e '-e', '-i', '-v','-c','-l','-n'
//p.3 '-h','-s', '-f', '-o'

int main(int argc, char** argv) {
  arguments arg = arguments_parser(argc, argv);
  output(arg, argc,  argv);
  return 0;
}
