#pragma once

#include "Connection.h"
#include "Cl_stock.h"
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;

namespace NS_SVC {

	ref class gestion_stock
	{
	private:
		NS_Composants::Connection^ cad;
		NS_Composants::Cl_stock^ stock;

		DataSet^ ds;

	public:
		gestion_stock();
		DataSet^ listStock(String^);
		void ajouter(String^, String^ , String^ , String^ , double , int , double , double , String^ );
		void modifier(int , String^ , String^, String^ , String^, double , int , double , double , String^);
		void supprimer(int);

	};
	

}