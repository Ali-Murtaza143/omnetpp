/*
 * lab10t1.cc
 *
 *  Created on: Jun 17, 2022
 *      Author: Ali Murtaza
 */

#include <omnetpp.h>
using namespace omnetpp;

class Node1: public cSimpleModule
{
protected:
          void initialize() override;
          void handleMessage(cMessage *msg) override;
};

Define_Module(Node1);

void Node1::initialize()
{
    if(strcmp("PC2", getName())==0)
    {
 cMessage *msg = new cMessage ("Hello ALi");
send(msg, "O_gate");

}
}


void Node1:: handleMessage (cMessage *msg)
{
send(msg, "O_gate");
}
