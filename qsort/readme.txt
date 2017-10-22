Implement qsort with standard lib stdlib.h

qsort(<arrayname>,<size>,sizeof(<elementsize>),compare_function);

The only thing that you need to implement is the compare_function, which takes in two arguments
 of type "const void", which can be cast to appropriate data structure, and then return one of these three values:

- negative, if a should be before b
- 0, if a equal to b
- positive, if a should be after b
