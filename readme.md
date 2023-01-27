## Purpose

Ensure that there is only one instance of a class.

## Reasoning

The creation member function acts as a constructor under the hood

## When to use

* A single instance should only be available within the program.

* Pretty good to be handling global resources, especially in a multithreaded environment!