# clogic 

## About
clogic is in progress. Mind the construction tape!

## Plans
A framework for designing simple hardware at the system level and logical abstraction layer. Essentially, users will be able to drag and drop pieces of a design such as an entire processor (Z80, Intel 8080, etc.), combine them with logical components (74LS series IC's, etc.), and add external memory. An ideal version of this framework will allow simulation of an entire Microcontroller and 

Code that uses clogic will have a similar style to structural Verilog. 

Future plans also include building up other tools that use clogic. Netlist generators between gates and higher-level components, fault tolerance analyzers, and timing estimators are some applications I have in mind. 

## Why C++? Why not Verilog?
Verilog will not work well with the modularity planned for this project. Additionally, Verilog lacks in having a good framework for library code. With the current plans of the project, C++ seems like a good language for building efficient and modular code. I'm using this an experiment as to how far I can take my knowledge of both C++ and hardware.