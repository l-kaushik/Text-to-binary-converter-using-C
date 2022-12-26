# Text-to-binary-converter-using-C
A simple program to convert your each text into binary format using C.

# Description
## What is a binary?
Well, binary is the language that computer understand, also known as machine language. 
Binary contains 2 characters or symbols or states: 0 and 1.
Using this program I've try to explore, what actually the computer sees or deals with, when I enter anykind of textual or symbolic input.

# How this program works?
For understanding the working mechanism of this program, you require some prerequisite: **The Basic Knowledge Of Binary Number System And C**.

### Let's start from **main()**:-
* ```C 
  void main()
  {
    char input[50];
    int len;

    printf("Enter your text:- ");
    len = strlen(gets(input));

    for (int i = 0; i < len; i++)
    {
        int num = 0;

        num = input[i];
        deciToBi(num);
        printf(" ");
    }
  } 
  ```
* ```C
   len = strlen(gets(input));
   ```
   In this line, taking user input using `gets()` function and storing it in `input`. 
   And at the same time storing the length of the inputed string in `len` using `strlen()` function.

* After that there is a **for loop** whose cycles are 1 less than the length of the string, because indexing of any array in C is start from 0.
* Inside the for loop, sending each character one by one to the `deciToBi();` with argument `num`. Where num is storing the ascii of single character.
* This is all, what the main function is doing.

### Now the **deciToBi()**:-

* ```C

    void deciToBi(int decimal)
    {
        int deci = decimal, i, k, temp[8], result = 0;
        long int pten = 10000000;

        for (i = 0; i < 8; i++)
            {
                temp[i] = deci % 2;
                deci = deci / 2;
            }
        for (i = 7; i >= 0; i--)
            {
                printf("%d", temp[i]);
            }
        }
    }
  ```
* The first loop
  ```C
   for (i = 0; i < 8; i++)
            {
                temp[i] = deci % 2;
                deci = deci / 2;
            }
  ```
  will generate the required binary of the character.
  
  And the second loop
  ```C
  for (i = 7; i >= 0; i--)
            {
                printf("%d", temp[i]);
            }
        }
  ```
  will print the binary.
  
* After this, the program will return to main and will print a space and then loop will send to next cycle and keep going until condition false.
  
* This is all, what this program is doing.

## An example
* Input
  ``` Enter your text:- Github```
  
* Output
  ``` 01000111 01101001 01110100 01101000 01110101 01100010 ```
  
# Important thing to remember
If you going to use this program in an old IDE like **TurboC** then make sure to add `conio.h` header file and also the `clrscr();` and `getch();` function.
