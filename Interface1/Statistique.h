#pragma once
#include "Simulation.h"


namespace Interface1 {
	using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;


	/// <summary>
	/// Description résumée de Statistique
	/// </summary>
	public ref class Statistique : public System::Windows::Forms::Form
	{
	public:
		Form^ S;
		Statistique(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		Statistique(Form^S1)
		{
			S = S1; 
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~Statistique()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;












	private: System::Windows::Forms::Button^ button2;
















	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Statistique::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(242, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(571, 299);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Statistique::dataGridView1_CellContentClick);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(176, 48);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Produit sous seuil de réaprovisionnement ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Statistique::button2_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(13, 136);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(175, 47);
			this->button9->TabIndex = 43;
			this->button9->Text = L"Total Achat";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Statistique::button9_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(12, 264);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(175, 47);
			this->button11->TabIndex = 45;
			this->button11->Text = L"Chiffre Affaire";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Statistique::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(415, 337);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(141, 39);
			this->button12->TabIndex = 46;
			this->button12->Text = L"Simulation ";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Statistique::button12_Click);
			// 
			// bindingSource1
			// 
			this->bindingSource1->CurrentChanged += gcnew System::EventHandler(this, &Statistique::bindingSource1_CurrentChanged);
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Location = System::Drawing::Point(701, 376);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(88, 79);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Statistique::button1_Click);
			// 
			// Statistique
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(840, 479);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Statistique";
			this->Text = L"Statistique";
			this->Load += gcnew System::EventHandler(this, &Statistique::Statistique_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		S->Show();
	}
	private: System::Void Statistique_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	Simulation^ K = gcnew Simulation(this);
	K->Show();
}

private: System::Void bindingSource1_CurrentChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=DESKTOP-PBVM5PL;Initial Catalog=Poo_Project;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	conDataBase->Open();
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT refAR,nomAR FROM article WHERE quantiterAR < seuil_de_reappro ", conDataBase);
	DataTable^ data = gcnew DataTable();
	data->Clear();
	adapter->Fill(data);
	bindingSource1->DataSource = data;
	dataGridView1->DataSource = bindingSource1;

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=DESKTOP-PBVM5PL;Initial Catalog=Poo_Project;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	conDataBase->Open();
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT ID_client, SUM(quantite) AS articleTotal FROM commande GROUP BY ID_client", conDataBase);
	DataTable^ data = gcnew DataTable();
	data->Clear();
	adapter->Fill(data);
	bindingSource1->DataSource = data;
	dataGridView1->DataSource = bindingSource1;

}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "Data Source=DESKTOP-PBVM5PL;Initial Catalog=Poo_Project;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	conDataBase->Open();
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter(" SELECT SUM(cast(totalHT as int)) AS Chiffre_Affaire FROM commande", conDataBase);
	DataTable^ data = gcnew DataTable();
	data->Clear();
	adapter->Fill(data);
	bindingSource1->DataSource = data;
	dataGridView1->DataSource = bindingSource1;


}

};
}
