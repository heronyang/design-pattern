# State

State Pattern allows the object to alter its behavior when its internal state
changes.

## Code

`Process` has a current `ProcessState` and, when a state-changing action happens
to the process, it forwards the call the current `ProcessState`. The
`ProcessState` - implemented by `RunningProcessState`, `StoppedProcessState`,
and `StoppedProcessState` - moves sets the current state of `Process` to the
next expected one.

## Diagram

![](https://github.com/heronyang/design-pattern/raw/master/behavioral/state/diagram.png)

## Note

**Extensibility**

The example code contains 3 states and 3 actions. So, there are 9 combinations
of <`current state`, `action`>. It's possible to write in a single file or class
that makes all the decision, but with the design in this example, we exact the
decision to each process state class, which is easy to maintain and scale.

**Encapsulation**

`Process::SetState` is a public method in the code so the implementations of
`ProcessState` can use that to set the current state to the next; however, it
exposes the availability for callers to mutates the state directly without
gaurd. I think this part can be improved.

## Reference

- https://en.wikipedia.org/wiki/State_pattern
- https://www.robertlarsononline.com/2017/05/11/state-pattern-using-cplusplus/
- https://stackoverflow.com/questions/32427684/what-are-the-possible-states-for-a-docker-container
- https://google.aip.dev/216
