#pragma once
#include <map>
namespace goldenoaks
{
	/*! Single connection gene. \param t_weight type used for weights in the network (default: float).
	Data class (vector space), on which the nodes operate must allow multiplication
	by the weight (t_data::operator*(t_weight) must be defined) */

	class ConnectionGene
	{
	public:
		ConnectionGene(unsigned int innovationNumber, unsigned int, unsigned int to, float weight, bool enabled=true);
		unsigned int inn;    ///global innovation number
		unsigned int from;   ///id of the first node
		unsigned int to;     ///id of the second node
		bool enabled; ///decides whether the connection appears in the phenotype
		float weight;     ///connection's weight
	};
	
	/*! Single node gene. \param t_param type used for parameters of the activation function of a neuron (such as threshold).
	Float by default, can be any type or class (a container can be used to support multiple parameters)*/
	

	class NodeGene
	{
	public:
		NodeGene(unsigned int id, char type, float parameters);
		unsigned int id;    ///node id
		char type;          ///node type ('I' for input, 'H' for a hidden node, 'O' for output)
		t_param parameters; ///node's activation parameter/parameters (e.g. threshold)
	};


	class Genome
	{
	public:
		std::map<unsigned int, NodeGene> nodes;
		std::map<unsigned int, ConnectionGene> connections;
		bool hasFitness = false;
		float fitness;
		std::string species;
		unsigned int id;
	};
}