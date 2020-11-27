# Command

Command Pattern encapsulate all information needed to perform an action into a
single method. Different implements can override the method differently and the
callers are unaware of the implementations.

## Code

`Command` is an interface that exposes `Execute()`, implemented by
`AttackCommand` and `DefenseCommand`. `Game` is the caller of different `Command`
implementations and is unware how each command is handled as all of them expose
the same interface. As a result, `Game` can easily map different buttons to
execute different commands.

## Note

I noticed two properties about Command Pattern:

- "Commands are an object-oriented replacement for callbacks." With Command
  Pattern, we can implement a flow that triggers a method - say `Execute()` -
  when a target event happens. `Execute()` then plays the same role as callbacks.
- Command Pattern enables us to 'undo' an action. To implement 'undo', 
  1. Other than `Execute()`, each command object should also implement `Undo()`
  which does the action to undo an `Execute()`, then
  2. We push the executed Command objects into a stack. When the caller wants
     to 'undo', we pop one Command ojbect from the stack and call its `Undo()`.

## Reference

- https://en.wikipedia.org/wiki/Command_pattern
- https://gameprogrammingpatterns.com/command.html
