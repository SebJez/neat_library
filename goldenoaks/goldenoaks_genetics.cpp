#include "goldenoaks_genetics.h"
using namespace goldenoaks;

template<type t_activationParameters>
goldenoaks::NodeGene<t_activationParameters>::NodeGene(unsigned int id, char type, t_activationParameters activationParameters)
{
	nodeID = id;
	nodeType = type;
	activationData = activationParameters;
}

template<type t_activationParameters>
unsigned int goldenoaks::NodeGene<t_activationParameters>::id()
{
	return nodeID;
}

template<type t_activationParameters>
char goldenoaks::NodeGene<t_activationParameters>::type()
{
	return nodeType;
}

template<type t_activationParameters>
t_activationParameters goldenoaks::NodeGene<t_activationParameters>::activationParameters()
{
	return activationData;
}


ConnectionGene::ConnectionGene(unsigned int innovationNumber, unsigned int from, unsigned int to, float weight, bool enable)
{
	innovNumber = innovationNumber;
	fromNode = from;
	toNode = to;
	connectionWeight = weight;
	enabled = enable;

}