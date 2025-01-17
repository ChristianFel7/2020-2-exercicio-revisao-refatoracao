#ifndef EncomendaRelampago_H
#define EncomendaRelampago_H

#include "Encomenda.hpp"
#include "Cliente.hpp"
using namespace std;

class EncomendaRelampago: public Encomenda
{

	public:

		double calcula() //calcula o preço da encomenda
		{

			double x = PESO * CUSTOkg;
			x += x * 0.25;
			
			return x;
		}

		void print()//imprime os dados da encomenda relampago na tela
		{

			Encomenda::print();
			std::cout << "[Encomenda Relâmpago]" << endl;
			std::cout << "  Peso: " << PESO << endl
				<< "  Custo por kg: " << CUSTOkg << endl
				<< "  Taxa adicional: " << 0.25 << endl
				<< "  Custo total: " << T << endl;

		}

};

#endif
