#include "clogic.hpp"
#include <cstdlib>
#include <ctime>
#include <utility>
#include <vector>

// 1-Bit Full Adder
// Inputs: A, B, Cin
// Outputs: S, Cout
std::pair<wire,wire> FullAdder(wire a, wire b, wire cin){
    wire w[5];
    // S Generation
    w[0] = xorGate(a,b);
    w[1] = xorGate(w[0],cin);   // S Result
    // Cout Generation
    w[2] = andGate(a,b);
    w[3] = andGate(w[0],cin);
    w[4] = orGate(w[2],w[3]);   // Cout Result
    // Results
    return {w[1],w[4]};
}

// Inputs x, y, cin, N-bits
// Output: S, Cout
std::pair<std::vector<wire>,wire> RippleCarryAdder(std::vector<wire> x, std::vector<wire> y, wire cin, U64 N){
    // Create result wires
    // Setup wires
    std::vector<wire> s; // S Result
    std::vector<wire> ci; // Carries 0: Cin, N+1: Cout
    s.resize(N, wire{});
    ci.resize(N+1, wire{});

    ci[0] = cin;

    // Ripple
    for(size_t i = 0; i < N; ++i){
        auto res = FullAdder(x[i],y[i],ci[i]);
        s[i] = res.first;
        ci[i+1] = res.second;
    }

    // Results
    return {s,ci[N+1]};
}

void testbench(){

}

int main(int argc, char* arvg[]){
    // This is testing set up
    srand(time(0));
    testbench();
    
}