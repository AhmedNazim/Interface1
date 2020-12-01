#pragma once

	using namespace System;

	using namespace System::Data;

	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	
	namespace NS_Composants {
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
			Cl_client(void);
			String^ SELECT(void) {};
			String^ INSERT(void) {};
			String^ UPDATE(void) {};
			String^ DELETE(void) {};
			void setID(int) {};
			void setNomCL(String^) {};
			void setPrononCL(String^) {};
			void setAdresseCL(String^) {};
			void setAdresseFAC(String^) {};
			void setDateAnivCL(String^) {};
			void setDatePremierAchat(String^) {};
			int getID(void) {};
			String^ getNomCL(void) {};
			String^ getPrononCL(void) {};
			String^ getAdresseCL(void) {};
			String^ getAdresseFAC(void) {};
			String^ getDateAnivCL(void) {};
			String^ getDatePremierAchat(void) {};

		};
	}

