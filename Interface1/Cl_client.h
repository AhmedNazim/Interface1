#pragma once
namespace NS_Compsants{
using namespace System;

using namespace System::Data;

using namespace System::Data::SqlClient;
using namespace System::Xml;

ref class Cl_client
{
private:
	int ID;
	String^ nomCL;
	String^ prononCL;
	String^ adresseCL;
	String^ adresseFAC;
	String^ DateAnivCL;
	String^ DatePremierAchat;
public:
		Cl_client(Void);
		String^ SELECT(void) {};
		String^ INSERT(void) {};
		String^ UPDATE(void) {};
		String^ DELETE(void) {};
		void setID(int) {};
		void setprononCL(String^) {};
		void setadresseCL(String^) {};
		void setadresseFAC(String^) {};
		void setDateAnivCL(String^) {};
		void setDatePremierAchat(String^) {};
		int getID(void) {};
		String^ getnomCL(void) {};
		String^ getprononCL(void) {};
		String^ getadresseCL(void) {};
		String^ getadresseFAC(void) {};
		String^ getDateAnivCL(void) {};
		String^ getDatePremierAchat(void) {};
		
};
}
