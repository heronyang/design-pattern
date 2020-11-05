# Strategy Pattern

Strategy Patterns allows code to select an algorithm at runtime.

## Code

`Cache` allows users to get and put data identified by a key. We implement
`Cache` with disk and with memory, called `DiskCache` and `MemoryCache`. The
program decides which to use based on the size of the file, if it's big, it uses
`DiskCache`; otherwise, `MemoryCache`.

## Reference

- https://en.wikipedia.org/wiki/Strategy_pattern
- https://stackoverflow.com/questions/370258/real-world-example-of-the-strategy-pattern
