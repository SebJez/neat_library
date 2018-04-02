#include "goldenoaks_genetics.h"
using namespace goldenoaks;

template<typename t_weight>
goldenoaks::ConnectionGene<t_weight>::ConnectionGene(unsigned int innovationNumber, unsigned int fromNode,
	unsigned int toNode, t_weight connectionWeight = t_weight(0), bool enable = true)
	:inn(innovationNumber), from(fromNode), to(toNode), enabled(enable), weight(connectionWeight) {}


