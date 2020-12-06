#pragma once
#include "gestion_personnel.h"
namespace Interface1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Personnel
	/// </summary>
	public ref class Personnel : public System::Windows::Forms::Form
	{
	public:
		Form^ obj; 
		Personnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		Personnel(Form^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Personnel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



















	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;




	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Personnel::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(3, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 25);
			this->label1->TabIndex = 20;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &Personnel::label1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(309, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(322, 370);
			this->dataGridView1->TabIndex = 21;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Personnel::dataGridView1_CellContentClick);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(-1, 274);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 25);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Date de Naissance";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(-1, 211);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 25);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Adresse";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(-1, 147);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(85, 25);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Prenom";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(3, 84);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 25);
			this->label9->TabIndex = 25;
			this->label9->Text = L"Nom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(685, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(233, 25);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Prenom Du Supperieur ";
			this->label3->Click += gcnew System::EventHandler(this, &Personnel::label3_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button1->Location = System::Drawing::Point(23, 387);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 88);
			this->button1->TabIndex = 29;
			this->button1->Text = L" ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Personnel::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button2->Location = System::Drawing::Point(156, 387);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 88);
			this->button2->TabIndex = 30;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Personnel::button2_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button4->Location = System::Drawing::Point(447, 386);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 91);
			this->button4->TabIndex = 31;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Personnel::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button3->Location = System::Drawing::Point(285, 390);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 88);
			this->button3->TabIndex = 32;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Personnel::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(690, 122);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(239, 19);
			this->textBox1->TabIndex = 34;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox2->Location = System::Drawing::Point(690, 46);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(239, 19);
			this->textBox2->TabIndex = 35;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox3->Location = System::Drawing::Point(-1, 302);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(239, 19);
			this->textBox3->TabIndex = 36;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox4->Location = System::Drawing::Point(-1, 239);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(239, 19);
			this->textBox4->TabIndex = 37;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox4_TextChanged_1);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox5->Location = System::Drawing::Point(-1, 175);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(239, 19);
			this->textBox5->TabIndex = 38;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox6->Location = System::Drawing::Point(-1, 112);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(239, 19);
			this->textBox6->TabIndex = 39;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox7->Location = System::Drawing::Point(-1, 46);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(239, 19);
			this->textBox7->TabIndex = 40;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Personnel::textBox7_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(-1, 71);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(240, 3);
			this->panel1->TabIndex = 41;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(690, 71);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(240, 3);
			this->panel2->TabIndex = 42;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(-1, 327);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(240, 3);
			this->panel3->TabIndex = 42;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(-1, 264);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(240, 3);
			this->panel4->TabIndex = 42;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(-1, 200);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(240, 3);
			this->panel5->TabIndex = 42;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(-1, 137);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(240, 3);
			this->panel6->TabIndex = 42;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(690, 147);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(240, 3);
			this->panel7->TabIndex = 43;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(684, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(195, 25);
			this->label6->TabIndex = 28;
			this->label6->Text = L"Nom du Supperieur";
			this->label6->Click += gcnew System::EventHandler(this, &Personnel::label6_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonShadow;
			this->button5->Location = System::Drawing::Point(827, 386);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 76);
			this->button5->TabIndex = 44;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Personnel::button5_Click_1);
			// 
			// Personnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(964, 480);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Personnel";
			this->Text = L"Personnel";
			this->Load += gcnew System::EventHandler(this, &Personnel::Personnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Personnel_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	String^ nom = textBox6->Text;
	String^ prenom = textBox5->Text;
	String^ adresse = textBox4->Text;
	String^ date = textBox3->Text;
	String^ nomsup = textBox2->Text;
	String^ prenomsup = textBox1->Text;
	int ID;
	NS_SVC::gestion_personnel^ ajjt = gcnew NS_SVC::gestion_personnel();
	ID = ajjt->ajouter(nom,prenom,nomsup,date);
	textBox7->Text = Convert::ToString(ID);
	delete(ajjt);
	MessageBox::Show("la personne a etait ajouter", "Ajouter", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
 int ID = Int32::Parse(textBox7->Text);
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ nom = textBox6->Text;

}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ prenom = textBox5->Text;
}
private: System::Void textBox4_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	String^ adresse = textBox4->Text;

}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ date = textBox3->Text;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ nomsup = textBox2->Text;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ prenomsup = textBox1->Text;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	int ID = Int32::Parse(textBox7->Text);
	String^ nom = textBox6->Text;
	String^ prenom = textBox5->Text;
	String^ adresse = textBox4->Text;
	String^ date = textBox3->Text;
	String^ nomsup = textBox2->Text;
	String^ prenomsup = textBox1->Text;
	NS_SVC::gestion_personnel^ mdff = gcnew NS_SVC::gestion_personnel();
	mdff->modifier(ID, nom, prenom, nomsup, date);
	delete(mdff);
	MessageBox::Show("la personne a etait modifier", "Modifier", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int ID = Int32::Parse(textBox7->Text);
	NS_SVC::gestion_personnel^ supp = gcnew NS_SVC::gestion_personnel();
	supp->supprimer(ID);
	delete(supp);
	MessageBox::Show("la personne a etait supprimer", "Supprimer ", MessageBoxButtons::OK, MessageBoxIcon::Information);
}


private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
};
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nom = textBox6->Text;
	String^ prenom = textBox5->Text;
	String^ constring = "Data Source=DESKTOP-PBVM5PL;Initial Catalog=Poo_Project;Integrated Security=True";
	SqlConnection^ conDataBase = gcnew SqlConnection(constring);
	conDataBase->Open();
	SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM personnel WHERE nomPER= '" + nom + "' and prenomPER='" + prenom + "'", conDataBase);
	DataTable^ data = gcnew DataTable();
	data->Clear();
	adapter->Fill(data);
	bindingSource1->DataSource = data;
	dataGridView1->DataSource = bindingSource1;
}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	obj->Show();
}
};
}
