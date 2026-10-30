1.Overview

A cache memory simulator implemented in C to demonstrate the working principles of a direct-mapped cache, including memory address decomposition, cache-line mapping, hit/miss detection, and cache performance analysis.
Overview

Cache memory is a small, high-speed memory located between the CPU and main memory. It stores frequently accessed data and instructions to reduce average memory access latency.

This project implements a Direct-Mapped Cache Simulator in C to model how memory addresses are mapped to cache lines and how cache hits and misses are determined.

The simulator provides a practical understanding of fundamental Computer Organization and Architecture (COA) concepts through software implementation.

2.Objectives

Understand the organization and operation of cache memory.

Implement direct-mapped cache organization using C.

Understand memory address decomposition into Tag, Index, and Block Offset.

Simulate cache hit and cache miss conditions.

Implement cache-line lookup and update operations.

Analyze cache performance using hit and miss statistics.

3. Cache Architecture

The current version follows a direct-mapped cache organization.

In direct mapping, each block of main memory can map to exactly one specific cache line.

The mapping is determined by:
Cache size=N

Cache block size= 4 Bytes

No. of cache lines=N/4

Memory block number=address/block size

Index=Memory block%cache lines

Tag= block number/

4.Cache Configuration
Parameters                    Configuration

Cache organization  :          Direct Mapped  

Implementation Language :       C

Address width   :              8 bits

Cache capacity   :             16 bytes

Block size      :              4 bytes

No. of cache lines   :         4

Write handling       :         Read only handling

5.Address Decomposition

A 8-bit memory address is divided into three fields:

Tag: Identifies the memory block stored in a cache line.

Index: Identifies the cache line to be accessed.

Block Offset: Identifies the byte position within a cache block.

For the current configuration:

Number of bits=8

Tag=4

Index=2

Block Offset=2

Total

4+2+2=8 bits

4. Working Principle

The simulator follows the basic cache access sequence:

Receive a memory address.

Extract the Tag, Index, and Block Offset.

Use the Index to locate the corresponding cache line.

Check whether the cache line is valid.

Compare the stored Tag with the requested Tag.

If both conditions match, register a Cache Hit.

Otherwise, register a Cache Miss and update the cache line with the requested block.

Cache Hit Condition

A cache hit occurs when:

The selected cache line contains valid data.

The stored Tag matches the requested Tag.

Otherwise, the access is classified as a cache miss.

5. Performance Metrics

The simulator uses cache access statistics to evaluate cache performance.

Hit Rate= No. of hits/total no. of accesses

Miss Rate= No. of miss/total no. of accesses

These metrics help understand how effectively the cache serves memory requests.

6. Technologies Used
   
Programming Language: C

Core Concepts: Computer Organization and Architecture, Cache Memory, Memory Addressing, Direct Mapping

Data Structures: Arrays and Structures

Development Concepts: Bitwise Operations, Memory Management, Conditional Logic

7. Project Structure

Direct-Mapped-Cache-Simulator/
│
├── main.c
├── README.md
└── .gitignore

The structure can be updated as additional source files and test cases are introduced.

8. How to Compile and Run

Prerequisites

A C compiler (GCC recommended).

A terminal or command-line environment.

Compilation

gcc main.c -o cache_simulator

Execution

./cache_simulator

On Windows:

cache_simulator.exe

Update the source filename or execution instructions if your implementation uses a different entry point or command-line arguments.

9. Learning Outcomes

Through this project, I explored:

The relationship between main memory and cache memory.

Direct-mapped cache organization and memory block placement

Tag, Index, and Offset extraction using address bits.

Cache-line validity and tag comparison.

Hit/miss detection and cache updates.

The relationship between cache organization and memory access performance.

Applying C programming concepts to simulate hardware-related architectural behavior.

10. Future Improvements

Potential extensions to the simulator include:

Implementing Set-Associative Cache Mapping.

Exploring different cache associativities, such as 2-way and 4-way.

Implementing replacement policies such as LRU.

Introducing write-through and write-back policies.

Comparing cache performance under different configurations.

Evaluating the effect of cache size and block size on hit rate.

Project Status

Version 1.0 – Direct-Mapped Cache Simulation

The current version focuses on implementing the fundamental behavior of a direct-mapped cache using C. More advanced cache organizations and replacement policies are reserved for future extensions.

Author: Anwesa Panda

Domain: Computer Organization and Architecture | C Programming | Computer Architecture |Electronics
