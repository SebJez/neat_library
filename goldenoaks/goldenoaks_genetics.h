#pragma once
#pragma once
#include <list>
#include <string>
namespace goldenoaks {

	template <type t_activationParameters> class NodeGene
	{
	public:
		NodeGene(unsigned int id, char type, t_activationParameters activationParameters);
		unsigned int id();
		char type();
		t_activationParameters activationParameters();

	protected:
		unsigned int nodeID;
		static char nodeType;
		t_activationParameters activationData;

	};

	class ConnectionGene
	{
	public:
		ConnectionGene(unsigned int innovationNumber, unsigned int from, unsigned int to, float weight, bool enable = true);
	protected:
		unsigned int fromNode;
		unsigned int toNode;
		bool enabled;
		float connectionWeight;
		unsigned int innovNumber;

	};

	template <type t_activationParameters> class Genome
	{
	public:
		std::map<unsigned int, NodeGene<t_activationParameters>> nodes;
		std::map<unsigned int, ConnectionGene<t_weights>> connections;
	};
}

//committesttesttest