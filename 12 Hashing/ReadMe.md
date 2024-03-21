# Hashing 
- Hashing is a technique of mapping a large set of arbitrary data to tabular indexes using a hash function. It is a method for representing dictionaries for large datasets.

- It allows lookups, updating and retrieval operation to occur in a constant time.

- A hash function is used for mapping each element of a dataset to indexes in the table.


## Hash-Table:
The Hash table data structure stores elements in key-value pairs where
    - key : Unique integer that is used for indexing the values 
    - value: data that is associated with keys 


## Hash Function:
- let h(k) is a hash-function that generates the key for storing the new index. 
- h(k) will give us a new index to store the element linked with k.

## Hash Collision:
When hash function generate the same index for mutiple keys, there will be conflict to store that value in hash table, such condition is calle hash-collision. 

Two ways to solve hash-collisions:
    1. Collision Resolution by Chaining 
    2. OpenAddressing : Linear/Quadratic Probing and Double Hashing
    


# Topics Covered 
# Examples 