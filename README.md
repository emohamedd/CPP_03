# C++ Inheritance Exercises

These C++ exercises focus on the concept of inheritance, which is a fundamental aspect of object-oriented programming (OOP). Inheritance allows you to create new classes based on existing classes, enabling code reuse and the creation of class hierarchies.

## Purpose of the Exercises

The purpose of these exercises is to teach you how to create and work with classes that inherit properties and behaviors from other classes. You will implement three classes, each building upon the previous one, to demonstrate the principles of inheritance. Let's explore the exercises and their objectives:

### Exercise 00: ClapTrap Class

**Objective**: Create a base class called `ClapTrap` with specific attributes and member functions. The purpose is to demonstrate the basics of class creation and function implementation.

**Attributes**:
- `name`: The name of the ClapTrap.
- `hitPoints`: The health of the ClapTrap, initialized to 10.
- `energyPoints`: The energy points of the ClapTrap, initialized to 10.
- `attackDamage`: The attack damage of the ClapTrap, initialized to 0.

**Member Functions**:
1. `attack(const std::string& target)`: Perform an attack on the specified target.
2. `takeDamage(unsigned int amount)`: Reduce the ClapTrap's hit points.
3. `beRepaired(unsigned int amount)`: Restore hit points.

### Exercise 01: ScavTrap Class

**Objective**: Create a derived class called `ScavTrap` from the `ClapTrap` class. Inheritance is used to build on the existing ClapTrap class while adding unique attributes and a special member function.

**Attributes**:
- Inherits attributes from `ClapTrap`.
- Overrides attribute values, such as `hitPoints`, `energyPoints`, and `attackDamage`.

**Member Functions**:
1. Inherits member functions from `ClapTrap`.
2. Adds a special function `guardGate()`, unique to the ScavTrap.

### Exercise 02: FragTrap Class

**Objective**: Create another derived class called `FragTrap` from the `ClapTrap` class. Inheritance is again used to build on the ClapTrap class, but with different overrides and additional functionality.

**Attributes**:
- Inherits attributes from `ClapTrap`.
- Overrides attribute values, similar to `ScavTrap`.

**Member Functions**:
1. Inherits member functions from `ClapTrap`.
2. Adds a special function `highFivesGuys()`, unique to the FragTrap.

## Inheritance in C++

Inheritance in C++ is a powerful OOP concept that allows you to create new classes based on existing classes. Here are some examples of how inheritance works:

### Base Class

```cpp
class Animal {
public:
    void speak() {
        std::cout << "Animal speaks." << std::endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks." << std::endl;
    }
};
```
In this example, the Dog class is derived from the Animal class. It inherits the speak() method and adds its own method bark(). An instance of Dog can both speak and bark.

Constructor Chaining
In C++, constructors and destructors are also inherited. Proper constructor chaining ensures that the base class's constructor is called before the derived class's constructor, and the destructors are called in reverse order.