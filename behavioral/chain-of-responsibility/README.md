# Chain of Responsibility

Chain of Responsibility pattern passes a request into a chain of objects - each
object processes the request and decides whether to pass to the next object.

## Code

`Logger` is an abstract class implemented by `ConsoleLogger`, `FileLogger`, and
`EmailLogger`. `Logger` provides `AddNext()` to chain another `Logger`. When the
caller calls `Log()`, the logger writes log and asks the next logger does the
same if needed.

## Reference

- https://en.wikipedia.org/wiki/Chain-of-responsibility_pattern
- https://www.geeksforgeeks.org/chain-responsibility-design-pattern/
