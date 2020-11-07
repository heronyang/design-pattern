# Observer

Observer Pattern allows observers to be notified on changes in an observable object.

## Code

`CourseWebsite` (an `Obserable` object) allows `Student`s to register as an
`Observer`. When `CourseWebsite` has a new state update, e.g. `PutAnnoucement()`
is called, it notifies all registered `Observer` by calling its `Update()`.

## Example

```
CourseWebsite course_website;

Student olivia("Olivia");
Student liam("Liam");
course_website.AddObserver(olivia);
course_website.AddObserver(liam);

course_website.PutAnnoucement("New assignment is released!");
```

Output:

```
This is Olivia. I just received an update from the course website saying: New
assignment is released!
This is Liam. I just received an update from the course website saying: New
assignment is released!
```

## Reference

- https://stackoverflow.com/questions/10069299/observer-design-pattern
- https://stackoverflow.com/questions/13744450/when-should-we-use-observer-and-observable
