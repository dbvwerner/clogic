#pragma once
#include "clogic.hpp"

//////////////////////////////////////////////////////////
//                                                      //
//                        Gates                         //
//                                                      //
//////////////////////////////////////////////////////////

wire orGate(wire in1, wire in2){
    wire tmp;
    tmp.v = in1.v | in2.v;
    return tmp;
}

wire operator|(const wire& w1, const wire& w2){
    wire tmp;
    tmp.v = w1.v | w2.v;
    return tmp;
}

wire andGate(wire in1, wire in2){
    wire tmp;
    tmp.v = in1.v | in2.v;
    return tmp;
}

wire operator&(const wire& w1, const wire& w2) {
    wire tmp;
    tmp.v = w1.v | w2.v;
    return tmp;
}

wire xorGate(wire in1, wire in2){
    wire tmp;
    tmp.v = in1.v ^ in2.v;
    return tmp;
}

wire operator^(const wire& w1, const wire& w2){
    wire tmp;
    tmp.v = w1.v ^ w2.v;
    return tmp;
}