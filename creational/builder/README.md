# Builder

Builder Pattern extracts the construction of a complex object from its user.

## Code

`DeliveryBuilder` exposes `AddPackage` to accumulate packages into a delivery
and exposes `Build()` to return the packed delivery.

## Note

### Abstraction used in the builder pattern

Few online examples - such as
[geeksforgeeks](https://www.geeksforgeeks.org/builder-design-pattern/) -
advocate the builder pattern help build different child objects with the same
build interface. E.g. `VehicleBuilder` is implemented by `CarBuilder` and
`BusBuilder` which builds `Car` and `Bus`. The caller - `YourBoss` - takes
whatever `VehicleBuilder` generates and starts to use it.

I disagree the above example is the main point of the builder pattern but the
use of abstraction in general. The above example simply says `YourBoss` can use
an object without knowing its concreate implementation. And, the object happened
to be the builders. On the other hand, the point of builder pattern is about
moving complex code for object construction into a standalone component.

### Comparing with Abstract Factory design pattern

Both Builder and Abstract Factory extract the construction code into a single
place. The responder of a [stackoverflow
post](https://stackoverflow.com/questions/757743/what-is-the-difference-between-builder-design-pattern-and-factory-design-pattern)
explained the difference very well: "the Builder is only needed when an object
cannot be produced in one step."

I agree with the above statement. Many builder examples I found online (e.g.
[RIP
tutorial](https://riptutorial.com/cplusplus/example/30166/builder-pattern-with-fluent-api))
simply takes a variable and passes it to the object as a member variable - which
I think the target object should just take the variables as constructor
parameters instead.

## Reference

- https://refactoring.guru/design-patterns/builder
- https://www.geeksforgeeks.org/builder-design-pattern/
- https://stackoverflow.com/questions/757743/what-is-the-difference-between-builder-design-pattern-and-factory-design-pattern
- https://riptutorial.com/cplusplus/example/30166/builder-pattern-with-fluent-api
