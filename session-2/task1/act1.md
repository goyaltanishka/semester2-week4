# Task 1 - character arrays and strings

1. **character arrays are not strings**

Small example showing how character arrays differ from strings.

Question: 
- Explain why printing the array as a string (%s) causes a strange result.
- Hint: Think about how C data is stored in memory. 
- Test this by changing the second string to something other than "hello".

ANSWER  - while defining the character array we did not use the terminating character so the machine was showing hellohello instead of hello. When we add the terminating character we also need to change the lenght of the array from 5 to 6 cause the terminating character is now added to the array.