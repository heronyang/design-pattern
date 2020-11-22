# Facade

Facade Pattern provides a simple interface that hides implementation details. 

## Code

`Computer` only exposes a single method - `Start()` which is super easy for the
user to use. However, internally, `Computer` has `Memory`, `Disk`, and `CPU`. On
`Start()`, these components are called and complex operations are executed.

## Note

Facade Pattern doesn't look like a design pattern to me, instead, it's more like
a design principle that we should always follow at different level. For example,
for any class, we should try to expose the minimum methods in its header.

## Reference

- https://en.wikipedia.org/wiki/Facade_pattern
- https://medium.com/@andreaspoyias/design-patterns-a-quick-guide-to-facade-pattern-16e3d2f1bfb6
