#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

#define NUM_FILES 2

struct FileLines {
    char** lines;
    int numLines;
};

typedef struct FileLines fLine;


int countLines(const char* path) { // function to count lines
    int numLines = 0;
    char line[MAX_LINE_LENGTH] = { 0 };

    FILE* file = fopen(path, "r");

    if (!file)
    {
        perror(path);
    }

    while (fgets(line, MAX_LINE_LENGTH, file))
    {
        numLines++;
    }

    if (fclose(file))
    {
        perror(path);
    }

    return numLines;
}

fLine parseFile(const char* path, int linesCount) { //func to malloc enough memory
    char line[MAX_LINE_LENGTH] = { 0 };

    fLine result;
    result.lines = (char**)malloc(sizeof(char*) * linesCount);
    result.numLines = linesCount;

    FILE* file = fopen(path, "r");

    if (!file)
    {
        perror(path);
    }

    int idx = 0;
    for (; fgets(line, MAX_LINE_LENGTH, file); idx++) {
        size_t lineLen = strlen(line);
        result.lines[idx] = (char*)malloc(lineLen + 1);

        strcpy(result.lines[idx], line);
        result.lines[idx][lineLen] = '\0';
    }

    if (fclose(file))
    {
        perror(path);
    }
    return result;
}

void printCPHelper(fLine* filesLines, int numFiles, int fileIdx, char** fileLinesState) {
    if (fileIdx >= numFiles)
        return;

    if (fileIdx != numFiles - 1) {
        for (int idx = 0; idx < filesLines[fileIdx].numLines; idx++) {
            char** currentFileLines = filesLines[fileIdx].lines;
            fileLinesState[fileIdx] = currentFileLines[idx];
            printCPHelper(filesLines, numFiles, fileIdx + 1, fileLinesState);
        } // for every line itterating current file
        return;
    }

    const int lastFileIdx = numFiles - 1;

    for (int idx = 0; idx < filesLines[lastFileIdx].numLines; idx++) {
        char** lastFileLines = filesLines[lastFileIdx].lines;
        fileLinesState[fileIdx] = lastFileLines[idx];
        for (int i = 0; i < numFiles; i++) {
            char* test = fileLinesState[i];
            printf("%.2s", test);
        }
        printf("\n");    }
}

void printCP(fLine* filesLines, int numFiles) {
    char** fileLinesState = (char**)malloc(sizeof(char*) * NUM_FILES);
    printCPHelper(filesLines, numFiles, 0, fileLinesState);
}

int main()
{
    int f1Lines = countLines("D:\\c\\txtReader\\col.txt"); // name of the files
    int f2Lines = countLines("D:\\c\\txtReader\\row.txt");

    fLine f1 = parseFile("D:\\c\\txtReader\\col.txt", f1Lines);
    fLine f2 = parseFile("D:\\c\\txtReader\\row.txt", f2Lines);

    fLine filesLines[NUM_FILES] = { f1, f2};

    printCP(filesLines, NUM_FILES); // number of files 
}

// Не успях да алокирам заделената памет
// Не успях да го направя да се въвеждат от конзолата
