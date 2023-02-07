## Purpose

Clone existing objects with code-agnostic logic eg based on their classes


## Issue

* In case you want to copy an object, you would normally make a new instance and copy all the required fields

__Caveat:__

There might be some provate fields and thus some invisible to you stuff

* You might also not want to be dependent upon a single class

* You might also know only the interface of the object and not the concrete class

## Reasoning

* Delegate the cloning process into the objects themselves by declaring a common interface.

* Just make an interface with a single method, __clone__!

## When to use

* When the code shouldnt depend on the actual objects you want to clone.

Eg some 3rd party library, you shouldnt depend on them even if you wanted to

* Reduce subclassing via looking up for an appropriate prototype.

The prototype pattern lets you use a sert of pre-built objects configured in various ways.

## Pros

* Decoupled cloning

* No repeated initialization code

* Complex objects are easier to produce

* Solve the issue with configuration presets

## Cons

* Circular references are trickier to solve