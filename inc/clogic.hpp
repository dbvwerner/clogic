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
    bool v; // Value in the wire
    int wire_num; // Instatiation # of this wire
};

//////////////////////////////////////////////////////////
//                                                      //
//                        Gates                         //
//                                                      //
//////////////////////////////////////////////////////////

// Gates perform operations on wires, returning the value
// of their operation back to the wire that was set equal
// to them.
class gate{

};


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

