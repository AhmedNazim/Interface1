#pragma once
#include "gestion_stock.h"
namespace Interface1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Stock
	/// </summary>
	public ref class Stock : public System::Windows::Forms::Form
	{
		
	public:
		Form^ R;
		Stock(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
		Stock(Form^R1)
		{
			R = R1;
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Stock()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:









	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Panel^ panel11;

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Stock::typeid));
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(769, 6);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(405, 415);
			this->dataGridView2->TabIndex = 31;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Stock::dataGridView2_CellContentClick);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(553, 434);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 112);
			this->button4->TabIndex = 35;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Stock::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(376, 438);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(137, 108);
			this->button3->TabIndex = 36;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Stock::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(164, 356);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 108);
			this->button2->TabIndex = 37;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Stock::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(37, 437);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 108);
			this->button1->TabIndex = 38;
			this->button1->Text = L" ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Stock::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(270, 273);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(320, 4);
			this->panel1->TabIndex = 42;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(270, 198);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(320, 4);
			this->panel2->TabIndex = 42;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(259, 4);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(320, 4);
			this->panel3->TabIndex = 42;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(15, 339);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(320, 4);
			this->panel4->TabIndex = 42;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(15, 272);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(320, 4);
			this->panel5->TabIndex = 42;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(15, 198);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(320, 4);
			this->panel6->TabIndex = 42;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Controls->Add(this->panel3);
			this->panel7->Location = System::Drawing::Point(15, 133);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(320, 4);
			this->panel7->TabIndex = 42;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(15, 60);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(327, 4);
			this->panel8->TabIndex = 42;
			this->panel8->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Stock::panel8_Paint);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(270, 60);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(320, 4);
			this->panel9->TabIndex = 42;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Location = System::Drawing::Point(270, 133);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(320, 4);
			this->panel10->TabIndex = 42;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(265, 216);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 33);
			this->label9->TabIndex = 43;
			this->label9->Text = L"Prix HT";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(265, 142);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 33);
			this->label1->TabIndex = 44;
			this->label1->Text = L"TTC";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(265, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 33);
			this->label2->TabIndex = 45;
			this->label2->Text = L"Prix TVA";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(265, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(337, 33);
			this->label3->TabIndex = 46;
			this->label3->Text = L"Seuil D\'approvisionnement";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(10, 290);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 33);
			this->label4->TabIndex = 47;
			this->label4->Text = L"Couleur";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(12, 216);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(98, 33);
			this->label5->TabIndex = 48;
			this->label5->Text = L"Nature";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(12, 142);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(120, 33);
			this->label6->TabIndex = 49;
			this->label6->Text = L"Quantit�";
			this->label6->Click += gcnew System::EventHandler(this, &Stock::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Location = System::Drawing::Point(12, 82);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(127, 25);
			this->label7->TabIndex = 50;
			this->label7->Text = L"Nom Article ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(12, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(137, 33);
			this->label8->TabIndex = 51;
			this->label8->Text = L"Reference";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox1->Location = System::Drawing::Point(270, 254);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 13);
			this->textBox1->TabIndex = 52;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Stock::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox2->Location = System::Drawing::Point(270, 179);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(205, 13);
			this->textBox2->TabIndex = 53;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Stock::textBox2_TextChanged_1);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox3->Location = System::Drawing::Point(270, 114);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(205, 13);
			this->textBox3->TabIndex = 54;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Stock::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox4->Location = System::Drawing::Point(270, 37);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(205, 13);
			this->textBox4->TabIndex = 55;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Stock::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox5->Location = System::Drawing::Point(12, 318);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(205, 13);
			this->textBox5->TabIndex = 56;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Stock::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox6->Location = System::Drawing::Point(15, 253);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(205, 13);
			this->textBox6->TabIndex = 57;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Stock::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox7->Location = System::Drawing::Point(15, 179);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(205, 13);
			this->textBox7->TabIndex = 58;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Stock::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox8->Location = System::Drawing::Point(15, 117);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(205, 13);
			this->textBox8->TabIndex = 59;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Stock::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::SystemColors::Info;
			this->textBox9->Location = System::Drawing::Point(12, 37);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(205, 13);
			this->textBox9->TabIndex = 60;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Stock::textBox9_TextChanged);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Location = System::Drawing::Point(628, 368);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 0;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(23, 4);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(32, 25);
			this->label10->TabIndex = 62;
			this->label10->Text = L"ID";
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Location = System::Drawing::Point(29, 32);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(234, 13);
			this->textBox10->TabIndex = 63;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->Location = System::Drawing::Point(32, 59);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(230, 3);
			this->panel11->TabIndex = 64;
			// 
			// Stock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(929, 440);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView2);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Stock";
			this->Text = L"Stock";
			this->Load += gcnew System::EventHandler(this, &Stock::Stock_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel7->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void Stock_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel8_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ nomAR = textBox8->Text;

}
private: System::Void textBox9_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ ref = textBox9->Text;

}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	int quantitter = Int32::Parse(textBox7->Text);
}

private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ nature = textBox6->Text;
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ couleur = textBox5->Text;
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	double prixHT = Convert::ToDouble(textBox1->Text);
	double prixtva = prixHT * 0.19;
	textBox3->Text = Convert::ToString(prixtva);
	double prixttc = prixtva * 0.015;
	textBox2->Text = Convert::ToString(prixttc);
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ seuil = textBox4->Text;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ seuil = textBox4->Text;
	double prixHT = Convert::ToDouble(textBox1->Text);
	double prixtva = prixHT * 0.19;
	textBox3->Text = Convert::ToString(prixtva);
	double prixttc = prixtva * 0.015;
	textBox2->Text = Convert::ToString(prixttc);

	int quantitter = Int32::Parse(textBox7->Text);
	String^ ref = textBox9->Text;
	String^ nomAR = textBox8->Text;
	String^ couleur = textBox5->Text;
	String^ nature = textBox6->Text;
	NS_SVC::gestion_stock^ ajtt = gcnew NS_SVC::gestion_stock();
	ajtt->ajouter(nomAR, ref, couleur, nature, prixHT, quantitter,prixtva,prixttc,seuil);
	delete(ajtt);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ seuil = textBox4->Text;
	double prixHT = Convert::ToDouble(textBox1->Text);
	double prixtva = prixHT * 0.19;
	textBox3->Text = Convert::ToString(prixtva);
	double prixttc = prixtva * 0.015;
	textBox2->Text = Convert::ToString(prixttc);

	int quantitter = Int32::Parse(textBox7->Text);
	String^ ref = textBox9->Text;
	String^ nomAR = textBox8->Text;
	String^ couleur = textBox5->Text;
	String^ nature = textBox6->Text;
	int id;
	NS_SVC::gestion_stock^ mdff = gcnew NS_SVC::gestion_stock();

	mdff->modifier(id,nomAR, ref, couleur, nature, prixHT, quantitter, prixtva, prixttc, seuil);
	delete(mdff);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	int id;
	NS_SVC::gestion_stock^suup = gcnew NS_SVC::gestion_stock();
	suup->supprimer(id);
	delete(suup);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("la personne a etait ajouter", "Ajouter", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("la personne a etait modifier", "Modifer", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("la personne a etait supprimer", "Supprimer", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
