# Prototype

Prototype Pattern creates objects by cloning a pre-built object.

## Code

In `main.cc`, we pre-build different types of `Document` on start including
`Resume` and `Letter`. Then, when the user picks the types of document he/she
want to use, we simply copy the corresponding pre-built document and start to
use. This approach eliminates the user-percieved overhead in initiating the
document.

## Reference

- https://stackoverflow.com/questions/13887704/whats-the-point-of-the-prototype-design-pattern
- http://www.cplusplus.com/forum/beginner/236974/
