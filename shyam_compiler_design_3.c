#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
char keywords[][10] = {"if", "else", "for", "while", "return", "int", "float"}; 
char operators[] = "+-*/=<>"; 
int isKeyword(const char *word) { 
for (int i = 0; i < 7; i++) { 
if (strcmp(word, keywords[i]) == 0) 
return 1; 
} 
return 0; 
} 
int isOperator(char ch) { 
for (int i = 0; i < strlen(operators); i++) { 
if (ch == operators[i]) 
return 1; 
} 
return 0; 
} 
int main() { 
char inputCode[1000]; 
char word[50]; 
int i = 0, w = 0; 
printf("Enter source code below:\n"); 
fgets(inputCode, sizeof(inputCode), stdin); 
while (inputCode[i] != '\0') { 
if (isalnum(inputCode[i])) { 
word[w++] = inputCode[i]; 
} else { 
if (w > 0) { 
word[w] = '\0'; 
if (isKeyword(word)) 
printf("⮞ Keyword: %s\n", word); 
else 
printf("⮞ Identifier: %s\n", word); 
w = 0; 
} 
if (isOperator(inputCode[i])) { 
printf("⮞ Operator: %c\n", inputCode[i]); 
} 
} 
i++; 
} 
if (w > 0) { 
word[w] = '\0'; 
if (isKeyword(word)) 
printf("⮞ Keyword: %s\n", word); 
else 
printf("⮞ Identifier: %s\n", word); 
} 
return 0; 
} 
