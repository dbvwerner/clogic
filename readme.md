# clogic 
clogic is in progress. Please check back soon.

### Overview
A lightweight framework for testing hardware at the system level. Designed to be function at multiple levels of abstraction. End goal is to provide user with a way to design gates using IC chips with minimal effort, and allow for timing and functional testing to be ran at the chip level and at the gate level. 

This is not a replacement for Verilog, just simply a fun experiment to see how far I can take my knowledge of C++ and hardware. The syntax should be similar to structural Verilog, but I hope to be able to incorporate some elements of behavioral Verilog as well.

clogic will also provide support for testing with SEU's and statistical analysis of error propagation at a system level. Users will be able to create a design with C++ code by wiring up modules, and then inserting bit flips using the clogic Fault Analyzer (CFA). Statistics such as the average number of affected gates, chance of logic masking, and Hamming distance between expected and actual values in logic and memory modules will be provided.