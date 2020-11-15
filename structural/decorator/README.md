# Decorator

Decorator Pattern adds behavior or state to an object at run-time.

## Code

`Print` is an interface implemented by `Photo` and `DecoratedPrint`. `Photo` is
simply an implementation of `Photo`. `DecoratedPrint` is an abstract class that
is expected to be overriden by different kinds of print decorators such as
`FramedPrint` and `LaminatedPrint`. `DecoratedPrint` has reference to the
wrappee (a `Print` that it is decorating on) so its concreate classes -
`FramedPrint` and `LaminatedPrint` - can only focus on decorating the wrappee
and pay no attention to how wrappee is owned.

## Note

Many online examples name the decorator class with `SomethingDecorator` directly,
which seems to violate Liskov Substitution Principle (LSP) to me. A subclass
should be able to replace its parent class; however, it's hard to say a
`SomethingDecorator` is a `Soemthing`. For example, [topping isn't a
pizza](https://stackoverflow.com/a/2707425/1610994). Instead, I think it's
better to name it as `XXXDecoratedSomething` e.g. `DecoratedPrint` in my example
code.

## Reference

- http://www.vincehuston.org/dp/decorator.html (Really good.)
- https://www.tutorialspoint.com/design_pattern/decorator_pattern.htm
- https://stackoverflow.com/questions/12854778/abstract-class-vs-interface-in-c
