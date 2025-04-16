#pragma once
#include "clogic_defs.hpp"

//////////////////////////////////////////////////////////
//                                                      //
//                        Wires                         //
//                                                      //
//////////////////////////////////////////////////////////


// A wire is the most primitive element of clogic. Wires
// hold the logical value currently on that wire (0,1) and
// can only be changed by gates or by the user setting
// the value using an assign statement.
// TODO
// Future versions of clogic will likely have timing
// properties associated with each wire.
class wire{
public:
    wire();
    wire(bool);

    bool v; // Value in the wire
    U64 wire_num; // Instatiation # of this wire
private:
};

wire::wire() : v{false}{}

wire::wire(bool v_) : v{v_} {}

wire& wire::operator=(const wire& other){
    if(this != &other){
        this->v = other.v;
    }
}

// A bus is just a group of wires
class bus{

};

//////////////////////////////////////////////////////////
//                                                      //
//                        Gates                         //
//                                                      //
//////////////////////////////////////////////////////////

// Gates perform operations on wires, returning the value
// of their operation back to the wire that was set equal
// to them.

wire orGate(wire in1, wire in2){
    wire tmp;
    tmp.v = in1.v | in2.v;
    return tmp;
}

wire andGate(wire in1, wire in2){
    wire tmp;
    tmp.v = in1.v | in2.v;
    return tmp;
}

wire xorGate(wire in1, wire in2){
    wire tmp;
    tmp.v = in1.v ^ in2.v;
    return tmp;
}

//////////////////////////////////////////////////////////
//                                                      //
//                       Registers                      //
//                                                      //
//////////////////////////////////////////////////////////


// Register Level abstraction for clogic. 
class reg{

};

//////////////////////////////////////////////////////////
//                                                      //
//                         Module                       //
//                                                      //
//////////////////////////////////////////////////////////


// clogic will provide pre-built modules that perform
// operations (such as Full Adders or Multipliers) and are
// quickly deployable.
class module{

};

//////////////////////////////////////////////////////////
//                                                      //
//                         Chip                         //
//                                                      //
//////////////////////////////////////////////////////////

// The highest abstraction layer of clogic, the chip
// level. 
class chip{
    
};

