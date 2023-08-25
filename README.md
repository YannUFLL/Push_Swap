# Push_Swap Project at 42 School Mulhouse

## 🎯 Objective

The objective of this project is to sort a stack of integers in ascending order using two stacks, `a` and `b`, and a specific set of operations. The aim is to do so with the least number of operations possible while adhering to the coding standards of 42 School.

## 🌟 Core Features

- **Efficient Sorting**: Utilizes a unique algorithm that pushes numbers by slices of similar numbers, like 14 and 18 or 98 and 87, before sorting them in stack `b`.
- **Versatility**: Handles a random amount of negative and/or positive numbers without duplication.
- **Error Handling**: Robust error checks including integer validation and duplicate checking.
- **Minimal Operations**: Strives to sort the stack with the lowest possible number of operations.

## 🛠 Technologies & Protocols

- **Language**: C
- **Norm Compliance**: Adheres to the 42 School Norm.
- **Memory Management**: No memory leaks, all heap-allocated spaces are freed.
- **Makefile**: Includes rules for `$(NAME)`, `all`, `clean`, `fclean`, and `re`.
- **Testing**: Strong emphasis on creating test programs to validate the solution.
  
## ⚙️ Getting Started

1. **Clone the Repository**
    ```
    git clone [Your Repository Link]
    ```

2. **Navigate to Directory**
    ```
    cd Push_Swap
    ```

3. **Compile the Program**
    ```
    make all
    ```

4. **Run the Program**
    ```
    ./push_swap [Your List of Integers]
    ```
