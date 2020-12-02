#pragma once
#include "Connection.h"
#include "Cl_personnel.h"

using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;
using namespace System;


namespace NS_SVC {
	ref class gestion_personnel
	{
	private:
		NS_Composants::Connection^ cad;
		NS_Composants::Cl_personnel^ personnel;

		DataSet^ ds;
	private:
		gestion_personnel();
		DataSet^ listePersonnel(String^);
		void ajouter(String^ , String^ , String^ , String^ );
		void modifier(int , String^ , String^ , String^, String^ );
		void supprimer(int);
	};

}