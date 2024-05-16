# Bitset in C++

Bitset is a container provided by the Standard Template Library (STL) in C++ that allows for the efficient representation and manipulation of a fixed-size sequence of bits. It is useful for operations at the bit level, such as bitwise operations.

## Key Features of bitset:

### Initialization:

- From a string: A bitset can be initialized from a binary string where each character is '0' or '1'.
- From an integer: A bitset can also be initialized from an integer (decimal) value, which will be converted to its binary representation.

### Bitwise Operations:

- bitset supports standard bitwise operations like AND (&), OR (|), XOR (^), NOT (~), as well as bit shifts (<<, >>).

### Access and Manipulation:

- Individual bits can be accessed and manipulated using array-like indexing.
- Methods like set(), reset(), flip() can be used to modify bits

You can take reference from [here](bitset.cpp). 