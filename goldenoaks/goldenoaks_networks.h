#pragma once
#include <list>
#include "goldenoaks_genetics.h"
namespace goldenoaks
{
	template<class t_data, typename t_activationParameters> class Node
	{
	public:
		Node(unsigned int id, t_activationParameters activationParameters);
		t_data output();
		virtual void evaluate() = 0;
		std::list<Connection> inputs;

	protected:
		t_data output = t_data.ZERO();
		t_activationParameters parameters;
		unsigned int id;
	};

	typedef struct { unsigned int from; unsigned int to; float weight; } Connection;





	
}