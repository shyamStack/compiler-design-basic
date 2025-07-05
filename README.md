# compiler-design-basic
*COMPANY*: CODTECH IT SOLUTIONS PVT.LTD
**NAME*: SHYAM CHARAN MURMU
*INTERN ID*: CT04DG256
*DOMAIN*: C LANGUAGE
*DURATION*: 4 WEEKS
*MENTOR*: NEELA SANTOSH KUMAR
# This C program is a simple lexical analyzer designed to identify and classify basic tokens in a snippet of source code. It focuses on recognizing keywords, identifiers, and operators from a user-provided input string. Lexical analysis is the first phase of a compiler, where the input source code is broken down into meaningful elements called tokens. This program serves as an introductory example of how lexical analysis works, making it a useful educational tool for students learning about compiler design or programming language processing.

The program begins by defining a list of common C language keywords such as `if`, `else`, `for`, `while`, `return`, `int`, and `float`. These are stored in a two-dimensional character array and are used to distinguish between reserved words and user-defined identifiers. Additionally, a string of common arithmetic and relational operators (`+`, `-`, `*`, `/`, `=`, `<`, `>`) is defined to help identify operator tokens during the scanning process.

The core logic of the program is implemented in the `main` function, which prompts the user to enter a line of source code. This input is read using `fgets` and then processed character by character. As the program scans each character, it builds words from sequences of alphanumeric characters. When a non-alphanumeric character is encountered, the accumulated word is checked to determine whether it is a keyword or an identifier. Keywords are recognized using the `isKeyword` function, which compares the word against the predefined list using `strcmp`. If the word is not a keyword, it is classified as an identifier.

Simultaneously, the program checks for operator characters using the `isOperator` function. This function compares each character against the list of known operators and prints a message if a match is found. This dual scanning approach allows the program to identify both word-based tokens and single-character operators in a single pass through the input string.

At the end of the input, if there is a remaining word that has not yet been processed, the program performs a final check to classify it as either a keyword or an identifier. This ensures that no valid token is missed due to the absence of a trailing delimiter.

Overall, this lexical analyzer provides a foundational understanding of how source code can be parsed into tokens. It demonstrates key concepts such as string manipulation, character classification using `isalnum`, and token recognition through comparison functions. While it is a simplified version of what a full compiler would use, it effectively illustrates the principles of lexical analysis and can be extended to support more complex token types, such as numbers, punctuation, or multi-character operators. This makes it a great starting point for anyone interested in building a basic compiler or interpreter.
# OUTPUT:-
<img width="1918" height="1021" alt="Image" src="https://github.com/user-attachments/assets/0e1f449a-610d-4e21-9a98-92ab70f301a7" />
