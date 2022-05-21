
## 01. Intro 

**Problem 1:** Program that will print “Hello World”.

| Input | Output     | 
| :-------- | :------- | 
|     | Hello World | 

```c
#include<stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}
```

**Problem 2:** Program that will use newline/tab and print the following segment:

| Input | Output     | 
| :-------- | :------- | 
|     | Hello World | 
|     | This is my first program.           C is fun. |

```c
#include<stdio.h>
int main()
{

    printf("Hello World\n");
    printf("This is my first program.\tC is fun.");
    return 0;
}

```

**Problem 3:** Program that will print the following segment:

| Input | Output     | 
| :-------- | :------- | 
|     | The question is - “How to write a \comment/ in C programming language?” | 

```c
#include<stdio.h>
int main()
{
    printf("This question is-\"How to write a \\comment/ in C programming language?");
    return 0;
}
```

**Problem 4:** Program that will declare an integer, a floating point number, a character. Then it will initialize them with values and print those values.



```c
#include<stdio.h>
int main()
{
    int a=5;
    float b=3.141593;
    char c='a';
    printf("The integer value:%d\n",a);
    printf("The floating point value:%f\n",b);
    printf("The character:%c\n",c);
    return 0;
}

```

**Problem 5:** Program that will do the followings:
- a)	Declare a variable uninitialized
- b)	Declare and  initialize a variable in one statement
- c)	Declare and initialize multiple variables with different values in one statement
- d)	Declare and initialize multiple variables with the same value in one statement



| Input | Output     | 
| :-------- | :------- | 
|  20   | My age is: 20 | 
|  21   | My age is: 21 |

```c
#include<stdio.h>
int main()
{
    int a;
    int b=3;
    int c=2,d=5;
    int e=10,f=10;
    return 0;
}

```

