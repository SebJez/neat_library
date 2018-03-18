#pragma once
#include "goldenoaks_networks.h"
#include "goldenoaks_genetics.h"



template<class t_data, typename t_activationParameters>
goldenoaks::Node<t_data, t_activationParameters>::Node(unsigned int id, t_activationParameters activationParameters)
{

}

template<class t_data, typename t_activationParameters>
t_data goldenoaks::Node<t_data, t_activationParameters>::output()
{
	return output;
};


