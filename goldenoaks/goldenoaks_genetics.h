#pragma once
#include <map>
namespace goldenoaks
{
	/*! Single connection gene. \param t_weight type used for weights in the network (default: float).
	Data class (vector space), on which the nodes operate must allow multiplication
	by the weight (t_data::operator*(t_weight) must be defined) */

	template<typename t_weight=float>
	class ConnectionGene
	{
	public:
		unsigned int inn;    ///global innovation number
		unsigned int from;   ///id of the first node
		unsigned int to;     ///id of the second node
		bool enabled = true; ///decides whether the connection appears in the phenotype
		t_weight weight;     ///connection's weight
	};
	
	/*! Single node gene. \param t_param type used for parameters of the activation function of a neuron (such as threshold).
	Float by default, can be any type or class (a container can be used to support multiple parameters)*/
	
	template <typename t_param=float>
	class NodeGene
	{
	public:
		unsigned int id;    ///node id
		char type;          ///node type ('I' for input, 'H' for a hidden node, 'O' for output)
		t_param parameters; ///node's activation parameter/parameters (e.g. threshold)
	};

	template <typename t_weight = float, typename t_param = float>
	class Genome
	{
	public:
		std::map<unsigned int, NodeGene<t_param>> nodes;
		std::map<unsigned int, ConnectionGene<t_weight>> connections;
		bool hasFitness = false;
		float fitness;
		///\todo genome id, species and tracking parents (?)
	};
}