#pragma once

namespace Interface1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Commande
	/// </summary>
	public ref class Commande : public System::Windows::Forms::Form
	{
	public:
		Commande(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Commande()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:











	private: System::Windows::Forms::Label^ label7;















	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ panel10;

	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox13;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Commande::typeid));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(333, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 20);
			this->label7->TabIndex = 12;
			this->label7->Text = L"TVA";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(271, 284);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(193, 26);
			this->textBox11->TabIndex = 28;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(244, 89);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(193, 26);
			this->textBox12->TabIndex = 29;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::Color::Khaki;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(211, 12);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(289, 370);
			this->dataGridView2->TabIndex = 30;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Commande::dataGridView2_CellContentClick);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(27, 381);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 88);
			this->button1->TabIndex = 31;
			this->button1->Text = L" ";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(163, 382);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 88);
			this->button2->TabIndex = 32;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Commande::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(297, 382);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 88);
			this->button3->TabIndex = 33;
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(449, 381);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 91);
			this->button4->TabIndex = 34;
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(581, 381);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(105, 91);
			this->button5->TabIndex = 35;
			this->button5->UseVisualStyleBackColor = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(0, 78);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(205, 3);
			this->panel1->TabIndex = 36;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(0, 205);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(205, 3);
			this->panel2->TabIndex = 37;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(528, 129);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(205, 3);
			this->panel3->TabIndex = 37;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(0, 142);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(205, 3);
			this->panel4->TabIndex = 37;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(528, 319);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(205, 3);
			this->panel5->TabIndex = 37;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::White;
			this->panel6->Location = System::Drawing::Point(0, 372);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(205, 3);
			this->panel6->TabIndex = 37;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(0, 284);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(205, 3);
			this->panel7->TabIndex = 37;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::White;
			this->panel8->Location = System::Drawing::Point(528, 193);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(205, 3);
			this->panel8->TabIndex = 38;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::White;
			this->panel9->Location = System::Drawing::Point(528, 262);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(205, 3);
			this->panel9->TabIndex = 38;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(-1, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(108, 25);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Referance";
			this->label1->Click += gcnew System::EventHandler(this, &Commande::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(528, 325);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 25);
			this->label2->TabIndex = 40;
			this->label2->Text = L"TTC";
			this->label2->Click += gcnew System::EventHandler(this, &Commande::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(523, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(145, 25);
			this->label3->TabIndex = 41;
			this->label3->Text = L"Nature Article";
			this->label3->Click += gcnew System::EventHandler(this, &Commande::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(522, 211);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(223, 25);
			this->label4->TabIndex = 42;
			this->label4->Text = L"Date D\'enregistrement";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label5->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(523, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 25);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Nom Article";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label6->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Location = System::Drawing::Point(523, 268);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 25);
			this->label6->TabIndex = 44;
			this->label6->Text = L"HT";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label8->Location = System::Drawing::Point(523, 12);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(112, 25);
			this->label8->TabIndex = 45;
			this->label8->Text = L"Ref Article";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label9->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Location = System::Drawing::Point(-1, 318);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(183, 25);
			this->label9->TabIndex = 46;
			this->label9->Text = L"Marge De Paiment";
			this->label9->Click += gcnew System::EventHandler(this, &Commande::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label10->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Location = System::Drawing::Point(-1, 230);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(179, 25);
			this->label10->TabIndex = 47;
			this->label10->Text = L"Date De Paiement";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label11->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Location = System::Drawing::Point(-1, 151);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(162, 25);
			this->label11->TabIndex = 48;
			this->label11->Text = L"Date D\'emission";
			this->label11->Click += gcnew System::EventHandler(this, &Commande::label11_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label12->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Location = System::Drawing::Point(-1, 90);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(179, 25);
			this->label12->TabIndex = 49;
			this->label12->Text = L"Date De Livraison";
			this->label12->Click += gcnew System::EventHandler(this, &Commande::label12_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::White;
			this->panel10->Location = System::Drawing::Point(528, 63);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(205, 3);
			this->panel10->TabIndex = 38;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::White;
			this->panel11->Location = System::Drawing::Point(528, 372);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(205, 3);
			this->panel11->TabIndex = 38;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(0, 53);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(205, 19);
			this->textBox1->TabIndex = 51;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Location = System::Drawing::Point(527, 347);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(239, 19);
			this->textBox2->TabIndex = 52;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Location = System::Drawing::Point(527, 294);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(239, 19);
			this->textBox3->TabIndex = 53;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Location = System::Drawing::Point(527, 237);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(239, 19);
			this->textBox4->TabIndex = 54;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Location = System::Drawing::Point(527, 170);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(239, 19);
			this->textBox5->TabIndex = 55;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Commande::textBox5_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Location = System::Drawing::Point(527, 106);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(239, 19);
			this->textBox6->TabIndex = 56;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Location = System::Drawing::Point(527, 38);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(239, 19);
			this->textBox7->TabIndex = 57;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Location = System::Drawing::Point(0, 346);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(211, 19);
			this->textBox8->TabIndex = 58;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Commande::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->Location = System::Drawing::Point(0, 262);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(211, 19);
			this->textBox9->TabIndex = 59;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Location = System::Drawing::Point(0, 180);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(205, 19);
			this->textBox10->TabIndex = 60;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &Commande::textBox10_TextChanged);
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Location = System::Drawing::Point(0, 118);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(211, 19);
			this->textBox13->TabIndex = 61;
			// 
			// Commande
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(757, 484);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label7);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Commande";
			this->Text = L"Commande";
			this->Load += gcnew System::EventHandler(this, &Commande::Commande_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Commande_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox10_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
