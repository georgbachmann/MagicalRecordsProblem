MagicalRecordsProblem
=====================


I have following Problem:

First up... i use MagicalRecord for the whole CoreData thing

- I have two Entities: A and B
- They have a relation between each other
- I create one instance of Entity A
- I create several instances ob Entity B and set the relation
- I don't call [[NSManagedObjectContext defaultContext] save];
 - It's fine
 - The relation is ok... I can check it using the findByAttribute method
- If I call this save then the relation is destroyed...
  - the same check using findByAttribute does not find results any more

I have absolutely no clue what I am doing wrong or if it's a bug in CoreData / MagicalRecord...

I made a sample project showing the problem.
You can see the problem by following this steps:

- click "create"
- click "add"
- click "check"
- see the log output for results
- click "save"
- click "check" again and see the problem in the log :)


Any help is really appreciated!!!
Thanks a lot!



