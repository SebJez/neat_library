#include "goldenoaks_genetics.h"
using namespace goldenoaks;

goldenoaks::ConnectionGene::ConnectionGene(unsigned int innovationNumber, unsigned int fromNode,
	unsigned int toNode,  connectionWeight = 0.0, bool enable = true) : inn(innovationNumber), from(fromNode), to(toNode), enabled(enable), weight(connectionWeight) {}


