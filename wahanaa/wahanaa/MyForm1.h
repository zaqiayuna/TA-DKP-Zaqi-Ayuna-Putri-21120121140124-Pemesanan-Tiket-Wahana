#pragma once



namespace wahanaa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Button^ button5;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Fun Tech Plaza";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm1::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(52, 102);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Milenial Glow Garden";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(38, 168);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(271, 38);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Milenial Glow Garden + Fun Tech Plaza+ \r\nMuseum Musik Dunia";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Fun Tech Plaza", L"Milenial Glow Garden", L"Milenial Glow Garden + Fun Tech Plaza + Museum Musik Dunia",
					L"Museum Musik Dunia", L"Terusan Dino Park + The Legend Stars", L"Terusan Dino Park + Milenial Glow", L"Terusan The Legend Stars + Milenial Glow Garden"
			});
			this->comboBox1->Location = System::Drawing::Point(195, 134);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(509, 28);
			this->comboBox1->TabIndex = 5;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm1::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Jenis Paket";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 345);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(778, 445);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"BOOKING ONLINE";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm1::groupBox1_Enter);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(195, 378);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(509, 27);
			this->textBox5->TabIndex = 22;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(40, 378);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 20);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Total";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(195, 275);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(509, 27);
			this->textBox4->TabIndex = 20;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(195, 193);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(509, 27);
			this->textBox3->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(195, 86);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(509, 27);
			this->textBox2->TabIndex = 18;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(195, 40);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(509, 27);
			this->textBox1->TabIndex = 17;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(34, 281);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(51, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Harga";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 38);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Hitung";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(34, 196);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Jumlah";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(34, 86);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(122, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Hari Berkunjung";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(34, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(114, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Nama Pemesan";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(827, 357);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(603, 220);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"PEMBAYARAN";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(197, 119);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(224, 27);
			this->textBox7->TabIndex = 24;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox7_TextChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(197, 40);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(224, 27);
			this->textBox6->TabIndex = 23;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox6_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(116, 165);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 38);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Hitung";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(19, 125);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(64, 20);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Kembali";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(19, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(86, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Uang Anda";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(642, 9);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(196, 24);
			this->label12->TabIndex = 9;
			this->label12->Text = L"BOOKING WAHANA";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1261, 620);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 46);
			this->button3->TabIndex = 10;
			this->button3->Text = L"EXIT";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1127, 620);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(91, 46);
			this->button4->TabIndex = 11;
			this->button4->Text = L"RESET\r\n";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(341, 102);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(83, 20);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Rp. 80.000 ";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(341, 47);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(79, 20);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Rp. 30.000";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(341, 168);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(85, 20);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Rp. 120.000";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label23);
			this->groupBox3->Controls->Add(this->label22);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(117, 54);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1248, 285);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"PAKET WAHANA";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(1045, 225);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(82, 19);
			this->label23->TabIndex = 22;
			this->label23->Text = L"Rp. 130.000";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(682, 225);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(323, 19);
			this->label22->TabIndex = 21;
			this->label22->Text = L"Terusan The Legend Stars + Milenial Glow Garden";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(1045, 168);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(82, 19);
			this->label21->TabIndex = 20;
			this->label21->Text = L"Rp. 140.000";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(682, 168);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(228, 19);
			this->label20->TabIndex = 19;
			this->label20->Text = L"Terusan Dino Park + Milenial Glow";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(1045, 102);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(82, 19);
			this->label19->TabIndex = 18;
			this->label19->Text = L"Rp. 140.000";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(682, 102);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(247, 19);
			this->label18->TabIndex = 17;
			this->label18->Text = L"Terusan Dino Park + The Legend Stars";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(1045, 47);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(76, 19);
			this->label17->TabIndex = 16;
			this->label17->Text = L"Rp. 50.000";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(683, 47);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(146, 19);
			this->label16->TabIndex = 15;
			this->label16->Text = L"Museum Musik Dunia";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(990, 620);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(91, 46);
			this->button5->TabIndex = 16;
			this->button5->Text = L"OK";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click_1);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1462, 1055);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int jumlah;
		int harga;
		double total;
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->Text == "Fun Tech Plaza") {
			harga = 30000;
			textBox4->Text = harga.ToString();
		}
		else if (comboBox1->Text == "Milenial Glow Garden") {
			harga = 80000;
			textBox4->Text = harga.ToString();
		}
		else if (comboBox1->Text == "Milenial Glow Garden + Fun Tech Plaza + Museum Musik Dunia") {
			harga = 1350000;
				textBox4->Text = harga.ToString();
		}
		else if (comboBox1->Text == "Museum Musik Dunia") {
			harga = 50000;
			textBox4->Text = harga.ToString();
		}
		else if (comboBox1->Text == "Terusan Dino Park + The Legend Stars") {
			harga = 140000;
			textBox4->Text = harga.ToString();
		}
		else if (comboBox1->Text == "Terusan Dino Park + Milenial Glow") {
			harga = 140000;
			textBox4->Text = harga.ToString();
		}
		else if (comboBox1->Text == "Terusan The Legend Stars + Milenial Glow Garden") {
			harga = 130000;
			textBox4->Text = harga.ToString();
		}
		
	}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if ((textBox1->Text == "") || (textBox2->Text == "")) {
		MessageBox::Show("Data Nama Pemesan atau Hari Berkunjung Kosong");
	}

	else {
		jumlah = int::Parse(textBox3->Text);
		harga = int::Parse(textBox4->Text);
		total = Convert::ToDouble(jumlah * harga);
		textBox5->Text = total.ToString();
	}

}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double bayar, kembali;

	if ((textBox5->Text == "") || (textBox6->Text == "")) {
		MessageBox::Show("Data Uang Anda Masih Kosong");
	}
	else {
		bayar = double::Parse(textBox6->Text);
		if (total > bayar) {
			MessageBox::Show("Uang Anda Kurang");
		}
		else {
			kembali = double(bayar - total);
			textBox7->Text = kembali.ToString();
		}
	}

}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	comboBox1->Text = "";
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
		int main(); {
			char ulangi = 'y';
			int counter = 0;
			while(ulangi = '1')
			{
				MessageBox::Show("Pembayaran Selesai");
				return;

			}
}
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
};
}
