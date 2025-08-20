# Introductory Object-Oriented Programming Exercises – Unicamp

This repository contains a collection of independent C++ programs developed as part of the undergraduate course **Object-Oriented Programming I**, offered by the University of Campinas (Unicamp).  
The main goal is to reinforce foundational programming concepts using the C++ language, through practical problem-solving exercises.

Each program is self-contained and focuses on a specific topic such as classes, inheritance, polymorphism, operator overloading, templates, and memory management.

---

## Contents

### Exercise Lists
Grouped exercises covering progressive small topics in object-oriented programming:

- **List1-Exercises**: Introductory problems, class creation, methods and attributes.  
- **List2-Exercises**: Inheritance and polymorphism basics.  
- **List3-Exercises**: Advanced exercises using everything else, with overriding, inheritance and polymorphism.  

### Standalone Programs
Independent projects demonstrating key concepts:  

- **Program-RegionOperatorOverloading**  
  - `Region.hpp`, `Region.cpp`, `main.cpp`  
  Demonstrates operator overloading (`operator<`, `operator<<`) for the `Region` class.  

- **Program-RegionSorting**  
  - `Region.hpp`, `Region.cpp`, `main.cpp`  
  Implements insertion sort for a vector of `Region` objects, ordered by area.  

- **Program-ShapeStack**  
  - `Shape.hpp`, `Circle.hpp`, `Square.hpp`, `Triangle.hpp`, `Pilha.hpp`, `Pilha.cpp`, `main.cpp`  
  Polymorphic stack of geometric shapes (`Circle`, `Square`, `Triangle`) with runtime area calculation.  

- **Program-StackExceptionHandling**  
  - `Stack.hpp`, `main.cpp`  
  Stack implementation with exception handling for overflow, underflow, and invalid arguments.  

- **Program-TemplateStack**  
  - `Pilha.hpp`, `Pilha.cpp`, `main.cpp`  
  Template-based stack implementation supporting generic types.  

- **Program-UniquePtrArtifacts**  
  - `Artifact.hpp`, `main.cpp`  
  Demonstrates memory management and resource safety using `std::unique_ptr`.  

---

## How to Compile and Run

Each program is self-contained and can be compiled using a standard C++ compiler such as **g++**:

```bash
cd Program-ProgramFolder
g++ main.cpp ... -o program
./program
