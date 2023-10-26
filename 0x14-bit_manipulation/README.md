Bitwise Operators:

C provides several bitwise operators, including & (AND), | (OR), ^ (XOR), ~ (NOT), and << (left shift) and >> (right shift).
These operators allow you to manipulate and inspect individual bits of integer data types.
Bitwise AND (&):

Used to set specific bits to 0 while keeping others unchanged.
Example: bitwise_result = number & bitmask;
Bitwise OR (|):

Used to set specific bits to 1 while keeping others unchanged.
Example: bitwise_result = number | bitmask;
Bitwise XOR (^):

Used to toggle specific bits.
Example: bitwise_result = number ^ bitmask;
Bitwise NOT (~):

Inverts all the bits in a number.
Example: bitwise_result = ~number;
Left Shift (<<) and Right Shift (>>):

Shifts the bits left or right by a specified number of positions.
Example: shifted_result = number << 2;
Masking:

Bitwise operations can be used for masking (selecting specific bits) and clearing (setting specific bits to 0).
Setting and Clearing Bits:

To set a specific bit to 1, use OR: number |= (1 << bit position);
To clear a specific bit to 0, use AND with the complement: number &= ~(1 << bit position);
Checking Bits:

To check if a specific bit is set, use AND: if (number & (1 << bit position)) { /* Bit is set */ }
Bit Manipulation for Optimization:

Bit manipulation is often used for optimizing code, such as working with hardware registers, compression algorithms, or data packing.
Portability Considerations:
Be aware of data type sizes, endianness, and signed vs. unsigned when working with bitwise operations to ensure portability.
Documentation and Comments:
When performing complex bit manipulation, provide clear comments to explain the purpose and logic.
Bit manipulation is a powerful tool, but it should be used judiciously and with care to maintain code readability and portability.





