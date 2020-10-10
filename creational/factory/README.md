# Factory

This examples demostrates two related design patterns:

- **Factory Method** creates an object without exposing the creation code to client,
and the client uses the same common interface to create new type of object.

- **Abstract Factory** produce families of related objects without specifying the
concreate classes.

## Code

`World` creates different types of `Vehicle` without knowing the details of how
they are created. Instead, `VehicleFactory` takes care of the creation details.
This helps us decouple the creation code from the user.

Note that `Car` and `Bike` are created differently in the code as `Bike` needs
additional parameters. With factory method, we hide these details inside the
factory. As a result, the caller, `World`, doesn't have to know about it.

## Reference

- https://refactoring.guru/design-patterns/factory-method/cpp/example
- https://www.geeksforgeeks.org/design-patterns-set-2-factory-method/
- https://stackoverflow.com/questions/5739611/what-are-the-differences-between-abstract-factory-and-factory-design-patterns
