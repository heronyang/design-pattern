# Composite

Composite Pattern structures components into a tree structure and treat each
node and leaf uniformly.

## Code

`Employee` is an interface implemented by `Engineer` and `Manager`. `Manager`
has multiple direct reports where each report is an `Employee` - a `Engineer`
or another `Manager`. So, we build a tree structure here - `Manager` is a node
(or a leaf if he/she doesn't have any direct report), and `Engineer` is a leaf.

## Reference

- https://en.wikipedia.org/wiki/Composite_pattern
- https://dzone.com/articles/composite-design-pattern-in-java-1
