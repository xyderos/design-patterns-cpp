## Purpose

Create groups of objects without explicitly specifying the type.

## Reasoning

Explicitly declare interfaces **for each product and group**. Then declare **the abstract factory interface and its corresponding sub-factories**. Keep in mind that we need to return **abstract types**, eg a **car** or a **truck**, not a scania or a saab.

## When to use

* When you need to work with various kinds of groups and do not need dependency upon specific objects.