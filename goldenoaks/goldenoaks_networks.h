#pragma once
#include <list>
#include "goldenoaks_genetics.h"
namespace goldenoaks
{
	template<class t_data, type t_activationParameters> class Node
	{
	public:
		Node(unsigned int id, t_activationParameters activationParameters);
		Node(unsigned int id, Genome genome)
			t_data output();
		virtual void evaluate() = 0;
		std::list<Connection> inputs;

	protected:
		t_data output = t_data.ZERO();
		t_activationParameters parameters;
	};

	typedef struct { unsigned int from; unsigned int to; float weight; } Connection;



}