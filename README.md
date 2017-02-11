# PushSwap

## ./push_swap 73 79 83 89 97 nb6 nb7 ...

The game is made up of two lists of numbers named la and lb.
In the beginning, lb will be empty and la will contain a certain amount of positive or negative numbers.
The objective of the game is to sort la.
In order to accomplish this, you will only have access to the following operation :

- **sa** swap the first two elements of la (nothing will happen if there aren’t enough elements)
- **sb** swap the first two elements of lb (nothing will happen if there aren’t enough elements)
- **sc** sa and sb at the same time
- **pa** take the first element from lb and move it to the first position on the la list (nothing will happen if lb is empty)
- **pb** take the first element from la and move it to the first position on the lb list (nothing will happen if la is empty)
- **ra** rotate la (toward the beginning the first element will become the last)
- **rb** rotate lb (toward the beginning the first element will become the last)
- **rr** ra and rb at the same time
 - **rra** rotate la (toward the end the last element will become the first)
- **rrb** rotate lb (toward the end the last element will become the first)
- **rrr** rra and rrb at the same time
