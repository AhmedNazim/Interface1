#pragma once
namespace NS_Composants {
	using namespace System;

	using namespace System::Data;

	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	ref class Cl_stock
	{ private:
		int ID;
		String^ nomAR;
		String^ couleurAR;
		String^ natureAR;
		float prixHTAR;
		int qantiterAR;
		float prixTVA;
		float prixTTC;
		String^ seul_de_reappro;
	public:
		Cl_stock();
		String^ SELECT(void) {};
		String^ INSERT(void) {};
		String^ UPDATE(void) {};
		String^ DELETE(void) {};
		void setID(int) {};
		void setnomAR(String^) {};
		void setcouleurAR(String^) {};
		void setnatureAR(String^) {};
		void setqantiterAR(int) {};
		void setprixHTAR(float) {};
		void setprixTVA(float) {};
		void setprixTTC(float) {};
		void setseul_de_reappro(String^) {};
		int getID() {};
		String^ getnomAR() {};
		String^ getcouleurAR() {};
		String^ getnatureAR() {};
		float getprixHTAR() {};
		float getprixTVA() {};
		float getprixTTC() {};
		int getqantiterAR() {};
		String^ getseul_de_reappro() {};

	};
}

