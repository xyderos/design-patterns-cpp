## Purpose

Clone existing objects with code-agnostic logic.

## Reasoning

Delegate the cloning process into the objects themselves.

## When to use

* When the code shouldnt depend on the actual objects you want to clone.

* Reduce subclassing via looking up for an appropriate prototype.