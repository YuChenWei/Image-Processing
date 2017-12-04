#pragma once
#include <math.h>
#using <mscorlib.dll>
#using <system.dll>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

		};
		
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  comboBox2;

	private:
		Bitmap^ OriHis=nullptr;
		Bitmap^ AftHis=nullptr;
		array<Int32, 2>^ GrayS;
		array<Int32, 2>^ GrayOri;
		array<Int32>^ GrayCount;
		Boolean Binary;
		Boolean Affine=false;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;

	private: System::Windows::Forms::Label^  label14;
	public:
		
	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox3;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button3;




	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器
		/// 修改這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Olive;
			this->button1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(1163, 0);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 83);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Open File";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1163, 92);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 83);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Save File";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::OrangeRed;
			this->checkedListBox1->CheckOnClick = true;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"R channel", L"G channel", L"B channel",
					L"Gray scale"
			});
			this->checkedListBox1->Location = System::Drawing::Point(1163, 267);
			this->checkedListBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(168, 92);
			this->checkedListBox1->TabIndex = 10;
			this->checkedListBox1->Click += gcnew System::EventHandler(this, &MyForm::checkedListBox1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1175, 223);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"RGB Extraction";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DarkGreen;
			this->label2->Location = System::Drawing::Point(1174, 373);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 34);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Smooth flter";
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->BackColor = System::Drawing::Color::Green;
			this->checkedListBox2->CheckOnClick = true;
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Mean", L"Median" });
			this->checkedListBox2->Location = System::Drawing::Point(1169, 405);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(168, 48);
			this->checkedListBox2->TabIndex = 5;
			this->checkedListBox2->Click += gcnew System::EventHandler(this, &MyForm::checkedListBox2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label3->Location = System::Drawing::Point(1190, 481);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(118, 29);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Sobel filter";
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->checkedListBox3->CheckOnClick = true;
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Vertical", L"Horizonal", L"Conbined" });
			this->checkedListBox3->Location = System::Drawing::Point(1164, 513);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(168, 70);
			this->checkedListBox3->TabIndex = 7;
			this->checkedListBox3->Click += gcnew System::EventHandler(this, &MyForm::checkedListBox3_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"R", L"G", L"B ", L"None" });
			this->comboBox1->Location = System::Drawing::Point(1164, 637);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(173, 28);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(1170, 595);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 26);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Edge overlapping";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(9, 4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(463, 431);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(507, 4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(466, 433);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(974, 4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(172, 76);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Reset";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(197, 715);
			this->trackBar1->Maximum = 255;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(305, 45);
			this->trackBar1->TabIndex = 14;
			this->trackBar1->Value = 125;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(0, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(100, 23);
			this->label5->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(5, 717);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 23);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Threhold";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Blue;
			this->textBox1->Location = System::Drawing::Point(91, 714);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 31);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"125";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Aqua;
			this->button4->Location = System::Drawing::Point(508, 714);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(61, 30);
			this->button4->TabIndex = 17;
			this->button4->Text = L"On/Off";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(998, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(39, 27);
			this->textBox2->TabIndex = 18;
			this->textBox2->Text = L"1";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1043, 121);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(39, 27);
			this->textBox3->TabIndex = 19;
			this->textBox3->Text = L"0";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(1088, 121);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(39, 27);
			this->textBox4->TabIndex = 20;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(998, 154);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(39, 27);
			this->textBox5->TabIndex = 21;
			this->textBox5->Text = L"0";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1043, 154);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(39, 27);
			this->textBox6->TabIndex = 22;
			this->textBox6->Text = L"1";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->Enabled = false;
			this->textBox7->Location = System::Drawing::Point(1088, 154);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(39, 27);
			this->textBox7->TabIndex = 23;
			this->textBox7->Text = L"0";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->Enabled = false;
			this->textBox8->Location = System::Drawing::Point(998, 187);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(39, 27);
			this->textBox8->TabIndex = 24;
			this->textBox8->Text = L"0";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->Enabled = false;
			this->textBox9->Location = System::Drawing::Point(1043, 187);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(39, 27);
			this->textBox9->TabIndex = 25;
			this->textBox9->Text = L"0";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(1088, 187);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(39, 27);
			this->textBox10->TabIndex = 26;
			this->textBox10->Text = L"1";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Lime;
			this->label7->Location = System::Drawing::Point(979, 98);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(167, 20);
			this->label7->TabIndex = 27;
			this->label7->Text = L"Affine Translation matrix";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label8->Location = System::Drawing::Point(1009, 238);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 20);
			this->label8->TabIndex = 37;
			this->label8->Text = L"Rotation matrix";
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(1088, 327);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(39, 27);
			this->textBox11->TabIndex = 36;
			this->textBox11->Text = L"1";
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(1043, 327);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(39, 27);
			this->textBox12->TabIndex = 35;
			this->textBox12->Text = L"0";
			// 
			// textBox13
			// 
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(998, 327);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(39, 27);
			this->textBox13->TabIndex = 34;
			this->textBox13->Text = L"0";
			// 
			// textBox14
			// 
			this->textBox14->Enabled = false;
			this->textBox14->Location = System::Drawing::Point(1088, 294);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(39, 27);
			this->textBox14->TabIndex = 33;
			this->textBox14->Text = L"0";
			// 
			// textBox15
			// 
			this->textBox15->Enabled = false;
			this->textBox15->Location = System::Drawing::Point(1043, 294);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(39, 27);
			this->textBox15->TabIndex = 32;
			this->textBox15->Text = L"1";
			// 
			// textBox16
			// 
			this->textBox16->Enabled = false;
			this->textBox16->Location = System::Drawing::Point(998, 294);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(39, 27);
			this->textBox16->TabIndex = 31;
			this->textBox16->Text = L"0";
			// 
			// textBox17
			// 
			this->textBox17->Enabled = false;
			this->textBox17->Location = System::Drawing::Point(1088, 261);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(39, 27);
			this->textBox17->TabIndex = 30;
			this->textBox17->Text = L"0";
			// 
			// textBox18
			// 
			this->textBox18->Enabled = false;
			this->textBox18->Location = System::Drawing::Point(1043, 261);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(39, 27);
			this->textBox18->TabIndex = 29;
			this->textBox18->Text = L"0";
			// 
			// textBox19
			// 
			this->textBox19->Enabled = false;
			this->textBox19->Location = System::Drawing::Point(998, 261);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(39, 27);
			this->textBox19->TabIndex = 28;
			this->textBox19->Text = L"1";
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(998, 373);
			this->trackBar2->Maximum = 360;
			this->trackBar2->Minimum = -360;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(129, 45);
			this->trackBar2->TabIndex = 38;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// textBox20
			// 
			this->textBox20->Enabled = false;
			this->textBox20->Location = System::Drawing::Point(1013, 428);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 27);
			this->textBox20->TabIndex = 39;
			this->textBox20->Text = L"0";
			this->textBox20->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(1014, 405);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 20);
			this->label9->TabIndex = 40;
			this->label9->Text = L"Rotation angle";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1119, 425);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(39, 32);
			this->button5->TabIndex = 41;
			this->button5->Text = L"Set";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F));
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(995, 595);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(163, 26);
			this->label10->TabIndex = 42;
			this->label10->Text = L"Image Overlaping";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Original", L"Gray scale" });
			this->comboBox2->Location = System::Drawing::Point(1018, 637);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 28);
			this->comboBox2->TabIndex = 43;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->ForeColor = System::Drawing::Color::Red;
			this->button6->Location = System::Drawing::Point(1105, 689);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 30);
			this->button6->TabIndex = 44;
			this->button6->Text = L"Overlapping";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->ForeColor = System::Drawing::Color::Lime;
			this->button7->Location = System::Drawing::Point(1025, 513);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(102, 56);
			this->button7->TabIndex = 45;
			this->button7->Text = L"Histogram equalization";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::White;
			this->pictureBox3->Location = System::Drawing::Point(45, 467);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(400, 210);
			this->pictureBox3->TabIndex = 46;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::White;
			this->pictureBox4->Location = System::Drawing::Point(537, 467);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(400, 210);
			this->pictureBox4->TabIndex = 47;
			this->pictureBox4->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(367, 680);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(78, 20);
			this->label11->TabIndex = 48;
			this->label11->Text = L"Gray Scale";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(859, 680);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(78, 20);
			this->label12->TabIndex = 49;
			this->label12->Text = L"Gray Scale";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(1, 444);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 20);
			this->label13->TabIndex = 50;
			this->label13->Text = L"Counts";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(497, 444);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(55, 20);
			this->label14->TabIndex = 51;
			this->label14->Text = L"Counts";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Crimson;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Font = (gcnew System::Drawing::Font(L"Impact", 15));
			this->label15->ForeColor = System::Drawing::Color::Yellow;
			this->label15->Location = System::Drawing::Point(112, 438);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(271, 27);
			this->label15->TabIndex = 52;
			this->label15->Text = L"Histogram of original gray scale";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Purple;
			this->label16->Font = (gcnew System::Drawing::Font(L"Impact", 15));
			this->label16->ForeColor = System::Drawing::Color::Yellow;
			this->label16->Location = System::Drawing::Point(609, 440);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(252, 25);
			this->label16->TabIndex = 53;
			this->label16->Text = L"Histogram of after processing";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(1333, 756);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Impact", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {

	}

	private: System::Void checkedListBox1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if ((this->pictureBox1->Image != nullptr) || (this->pictureBox2->Image != nullptr))
				 {

					 Bitmap^ tmp = gcnew Bitmap((Image^)this->pictureBox1->Image);
					 Bitmap^ tmp2 = gcnew Bitmap(Convert::ToInt32(this->pictureBox1->Image->Width), Convert::ToInt32(this->pictureBox1->Image->Height));
					 if (this->checkedListBox1->GetSelected(0))
					 {
						 this->RGBg_Extra(0, tmp, tmp2);
						 this->DisableEvent();
					 }
					 if ((this->checkedListBox1->GetSelected(1)))
					 {
						 this->RGBg_Extra(1, tmp, tmp2);
						 this->DisableEvent();
					 }
					 if ((this->checkedListBox1->GetSelected(2)))
					 {
						 this->RGBg_Extra(2, tmp, tmp2);
						 this->DisableEvent();
					 }
					 if (this->checkedListBox1->GetSelected(3))
					 {
						 this->RGBg_Extra(3, tmp, tmp2);
						 
					 }
					 pictureBox2->Image = tmp2;
					 this->checkedListBox1->Enabled = false;
				 }
				 else
				 {
					 for (int i = 0; i < 4; i++)
					 {
						 this->checkedListBox1->SetItemCheckState(i, CheckState::Unchecked);
						 this->checkedListBox1->SetSelected(i, false);
					 }
				 }


	}
	private:void Project1::MyForm::DisableEvent()
	{
				this->button5->Enabled = false;
				this->textBox2->Enabled = false;
				this->textBox3->Enabled = false;
				this->textBox5->Enabled = false;
				this->textBox6->Enabled = false;
				this->button7->Enabled = false;
	}
	private: System::Void checkedListBox2_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (this->checkedListBox1->GetSelected(3))
				 {
					 if (this->checkedListBox2->GetSelected(0))
					 {
						 this->Mean();
					 }
					 if (this->checkedListBox2->GetSelected(1))
					 {
						 this->Median();
					 }
					 this->checkedListBox2->Enabled = false;
				 }
				 else
				 {
					 for (int i = 0; i < 2; i++)
					 {
						 this->checkedListBox2->SetItemCheckState(i, CheckState::Unchecked);
						 this->checkedListBox2->SetSelected(i, false);
					 }
				 }


	}
	private: System::Void checkedListBox3_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (this->checkedListBox1->GetSelected(3))
				 {
					 if (this->checkedListBox3->GetSelected(0))
					 {
						 SobelV();
					 }
					 if (this->checkedListBox3->GetSelected(1))
					 {
						 SobelH();
					 }
					 if (this->checkedListBox3->GetSelected(2))
					 {
						 SobelC();
					 }
					 this->checkedListBox3->Enabled = false;
				 }
				 else
				 {
					 for (int i = 0; i < 3; i++)
					 {
						 this->checkedListBox3->SetItemCheckState(i, CheckState::Unchecked);
						 this->checkedListBox3->SetSelected(i, false);
					 }
				 }


	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 Bitmap^ OriImg = gcnew Bitmap(openFileDialog1->FileName);

					 pictureBox1->Image = OriImg;

				 }button1->Enabled = false;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
				 saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp";
				 saveFileDialog1->Title = "Save File";
				 if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 String^ FName = saveFileDialog1->FileName;
					 pictureBox2->Image->Save(FName, System::Drawing::Imaging::ImageFormat::Jpeg);
				 }
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->button1->Enabled = true;
				 this->pictureBox2->Image = nullptr;
				 this->checkedListBox1->Enabled = true;
				 for (int i = 0; i < 4; i++)
				 {
					 this->checkedListBox1->SetItemCheckState(i, CheckState::Unchecked);
					 this->checkedListBox1->SetSelected(i, false);
				 }
				 this->checkedListBox2->Enabled = true;
				 for (int i = 0; i < 2; i++)
				 {
					 this->checkedListBox2->SetItemCheckState(i, CheckState::Unchecked);
					 this->checkedListBox2->SetSelected(i, false);
				 }
				 this->checkedListBox3->Enabled = true;
				 for (int i = 0; i < 3; i++)
				 {
					 this->checkedListBox3->SetItemCheckState(i, CheckState::Unchecked);
					 this->checkedListBox3->SetSelected(i, false);
				 }
				 this->button5->Enabled = true;
				 this->Affine = false;
				 this->textBox2->Enabled = true;
				 this->textBox3->Enabled = true;
				 this->textBox5->Enabled = true;
				 this->textBox6->Enabled = true;
				 this->button7->Enabled = true;

	}
	private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 
				 if (!this->Binary)
				 {
					 this->comboBox1->SelectedIndex = -1;
					 this->comboBox1->Text = "";
					 MessageBox::Show(L"Must do thresholding !");
				 }
	}
	private: void Project1::MyForm::RGBg_Extra(int Case, Bitmap^ Ori, Bitmap^ Tem)
	{
				 
				 if (Case == 3)
				 {
					 this->GrayCount = gcnew array<Int32>(256);
					 this->GrayS = gcnew array<Int32, 2>(this->pictureBox1->Image->Width, this->pictureBox1->Image->Height);
					 this->GrayOri = gcnew array<Int32, 2>(this->pictureBox1->Image->Width, this->pictureBox1->Image->Height);
					 this->OriHis= gcnew Bitmap(this->pictureBox3->Width, this->pictureBox3->Height);
					 Graphics^ bTmp = Graphics::FromImage(this->OriHis);
					 Pen^ pTmp = gcnew Pen(Color::Black, 3.0f);
					 bTmp->DrawLine(pTmp, 5, 190, 390, 190);
					 bTmp->DrawLine(pTmp, 10, 195, 10, 10);
				 }

				 for (int i = 0; i < this->pictureBox1->Image->Width; i++)
				 {
					 for (int j = 0; j < this->pictureBox1->Image->Height; j++)
					 {
						 Color RGBg = Ori->GetPixel(i, j);
						 switch (Case)
						 {
						 case 0:
							 Tem->SetPixel((Int32)i, (Int32)j, Color::FromArgb(Convert::ToInt32(RGBg.R), 0, 0));
							 break;
						 case 1:
							 Tem->SetPixel((Int32)i, (Int32)j, Color::FromArgb(0, Convert::ToInt32(RGBg.G), 0));
							 break;
						 case 2:
							 Tem->SetPixel((Int32)i, (Int32)j, Color::FromArgb(0, 0, Convert::ToInt32(RGBg.B)));
							 break;
						 case 3:
							 Int32 Y = roundl(sqrt(pow((double)Convert::ToInt32(RGBg.R) / 255, 2) + pow((double)Convert::ToInt32(RGBg.G) / 255, 2) + pow((double)Convert::ToInt32(RGBg.B) / 255, 2)) * 255 / sqrt(3.0));
							 this->GrayCount[Y]++;
							 this->GrayS[i, j] = Y;
							 this->GrayOri[i, j] = Y;
							 Tem->SetPixel((Int32)i, (Int32)j, Color::FromArgb(Y, Y, Y));
							 break;
						 }
					 }
				 }
				 if (this->checkedListBox1->GetSelected(3))
				 {
					 this->DrawGrayOriHisto();
				 }
				 

	}
	private: void Project1::MyForm::DrawGrayOriHisto()
	{
				
				 Graphics^ bTmp = Graphics::FromImage(this->OriHis);
				 Pen^ pTmp = gcnew Pen(Color::Yellow, 1.5f);
				 Double p = 0.0;
				 Double Max = 0;
				 for (int i = 0; i < 256; i++)
				 {
					 if (this->GrayCount[i]>Max)
					 {
						 Max = this->GrayCount[i];
					 }
				 }
				 for (int i = 0; i < 256; i++)
				 {
					 p = this->GrayCount[i] / Max;
					 if (i>0)
					 {
						 bTmp->DrawLine(pTmp, i*1.5 + 10, 190, (i)*1.5 + 10, 190 - p * 180);
					 }
				 }
				 this->pictureBox3->Image = this->OriHis;
	}
	private: void Project1::MyForm::Mean()
	{
				 Int32 G = 0;
				 Bitmap^ tmpBit = gcnew Bitmap(Convert::ToInt32(this->pictureBox2->Image->Width), Convert::ToInt32(this->pictureBox2->Image->Height));
				 array<Int32, 2>^ tmpArr = gcnew array<Int32, 2>(this->pictureBox2->Image->Width, this->pictureBox2->Image->Height);
				 for (int i = 1; i < (this->pictureBox1->Image->Width - 1); i++)
				 {
					 for (int j = 1; j < (this->pictureBox1->Image->Height - 1); j++)
					 {
						 Int32 tmp = this->GrayS[i - 1, j - 1] + this->GrayS[i, j - 1] + this->GrayS[i + 1, j - 1] + this->GrayS[i - 1, j] + this->GrayS[i, j] + this->GrayS[i + 1, j] + this->GrayS[i - 1, j + 1] + this->GrayS[i, j + 1] + this->GrayS[i + 1, j + 1];
						 G = roundl(tmp / 9);
						 tmpArr[i, j] = G;
						 tmpBit->SetPixel(i, j, Color::FromArgb(G, G, G));
					 }
				 }
				 this->pictureBox2->Image = tmpBit;
				 this->GrayS = tmpArr;
				 this->GrayOri = tmpArr;
	}
	private: void Project1::MyForm::Median()
	{
				 Int32 M = 0;
				 array<Int32>^ TMP = gcnew array<Int32>(9);
				 array<Int32, 2>^ tmpArr = gcnew array<Int32, 2>(this->pictureBox2->Image->Width, this->pictureBox2->Image->Height);
				 Bitmap^ tmpBit = gcnew Bitmap(Convert::ToInt32(this->pictureBox2->Image->Width), Convert::ToInt32(this->pictureBox2->Image->Height));
				 for (int i = 1; i < (this->pictureBox2->Image->Width - 1); i++)
				 {
					 for (int j = 1; j < (this->pictureBox2->Image->Height - 1); j++)
					 {
						 TMP[0] = this->GrayS[i - 1, j - 1];
						 TMP[1] = this->GrayS[i, j - 1];
						 TMP[2] = this->GrayS[i + 1, j - 1];
						 TMP[3] = this->GrayS[i - 1, j];
						 TMP[4] = this->GrayS[i, j];
						 TMP[5] = this->GrayS[i + 1, j];
						 TMP[6] = this->GrayS[i - 1, j + 1];
						 TMP[7] = this->GrayS[i, j + 1];
						 TMP[8] = this->GrayS[i + 1, j + 1];
						 M = this->MedFilter(TMP);
						 tmpArr[i, j] = M;
						 tmpBit->SetPixel(i, j, Color::FromArgb(M, M, M));
					 }
				 }
				 this->pictureBox2->Image = tmpBit;
				 this->GrayS = tmpArr;
				 this->GrayOri = tmpArr;
	}
	private: Int32 Project1::MyForm::MedFilter(array<Int32>^ WINDOW)
	{
				 array<Int32>^ TMP = (array<Int32>^) WINDOW->Clone();
				 Array::Sort(TMP);

				 return TMP[4];
	}
	private: void Project1::MyForm::SobelH()
	{
				 Bitmap^ tmpBit = gcnew Bitmap(Convert::ToInt32(this->pictureBox2->Image->Width), Convert::ToInt32(this->pictureBox2->Image->Height));
				 array<Int32, 2>^ tmpArr = gcnew array<Int32, 2>(this->pictureBox2->Image->Width, this->pictureBox2->Image->Height);
				 for (int i = 1; i < this->pictureBox2->Image->Width - 1; i++)
				 {
					 for (int j = 1; j < this->pictureBox2->Image->Height - 1; j++)
					 {
						 Int32 tmp = -this->GrayS[i - 1, j - 1] - this->GrayS[i, j - 1] * (2) - this->GrayS[i + 1, j - 1]
							 + this->GrayS[i - 1, j + 1] * 1 + this->GrayS[i, j + 1] * 2 + this->GrayS[i + 1, j + 1] * (1);
						 if (tmp>255)
						 {
							 tmp = 255;
						 }
						 else if (tmp < 0)
						 {
							 tmp = 0;
						 }
						 tmpBit->SetPixel(i, j, Color::FromArgb(tmp, tmp, tmp));
						 tmpArr[i, j] = tmp;
					 }
				 }
				 this->pictureBox2->Image = tmpBit;
				 this->GrayS = tmpArr;
	}
	private: void Project1::MyForm::SobelV()
	{
				 Bitmap^ tmpBit = gcnew Bitmap(Convert::ToInt32(this->pictureBox2->Image->Width), Convert::ToInt32(this->pictureBox2->Image->Height));
				 array<Int32, 2>^ tmpArr = gcnew array<Int32, 2>(this->pictureBox2->Image->Width, this->pictureBox2->Image->Height);
				 for (int i = 1; i < this->pictureBox2->Image->Width - 1; i++)
				 {
					 for (int j = 1; j < this->pictureBox2->Image->Height - 1; j++)
					 {
						 Int32 tmp = -this->GrayS[i - 1, j - 1] + this->GrayS[i + 1, j - 1]
							 - this->GrayS[i - 1, j] * (2) + this->GrayS[i + 1, j] * (2)
							 - this->GrayS[i - 1, j + 1] + this->GrayS[i + 1, j + 1];
						 if (tmp>255)
						 {
							 tmp = 255;
						 }
						 else if (tmp < 0)
						 {
							 tmp = 0;
						 }
						 tmpBit->SetPixel(i, j, Color::FromArgb(tmp, tmp, tmp));
						 tmpArr[i, j] = tmp;
					 }
				 }
				 this->pictureBox2->Image = tmpBit;
				 this->GrayS = tmpArr;
	}
	private: void Project1::MyForm::SobelC()
	{
				 Bitmap^ tmpBit = gcnew Bitmap(Convert::ToInt32(this->pictureBox2->Image->Width), Convert::ToInt32(this->pictureBox2->Image->Height));
				 array<Int32, 2>^ tmpArr = gcnew array<Int32, 2>(this->pictureBox2->Image->Width, this->pictureBox2->Image->Height);
				 for (int i = 1; i < this->pictureBox2->Image->Width - 1; i++)
				 {
					 for (int j = 1; j < this->pictureBox2->Image->Height - 1; j++)
					 {
						 Int32 tmp = -this->GrayS[i - 1, j - 1] - this->GrayS[i, j - 1] * (2) - this->GrayS[i + 1, j - 1]
							 + this->GrayS[i - 1, j + 1] * 1 + this->GrayS[i, j + 1] * 2 + this->GrayS[i + 1, j + 1] * (1);
						 Int32 tmp2 = -this->GrayS[i - 1, j - 1] + this->GrayS[i + 1, j - 1]
							 - this->GrayS[i - 1, j] * (2) + this->GrayS[i + 1, j] * (2)
							 - this->GrayS[i - 1, j + 1] + this->GrayS[i + 1, j + 1];
						 Int32 tmp3 = abs(tmp) + abs(tmp2);
						 if (tmp3>510)
						 {
							 tmp3 = 510;
						 }
						 tmp3 = tmp3 / 2;
						 tmpBit->SetPixel(i, j, Color::FromArgb(tmp3, tmp3, tmp3));
						 tmpArr[i, j] = tmp3;
					 }
				 }
				 this->pictureBox2->Image = tmpBit;
				 this->GrayS = tmpArr;
	}


	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
				 this->textBox1->Text = this->trackBar1->Value.ToString();

	}


	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 if (this->textBox1->Text != "")
				 {
					 Int32 tmp = Convert::ToInt32(this->textBox1->Text);
					 if (tmp > 255)
					 {
						 tmp = 255;
					 }
					 else if (tmp < 0)
					 {
						 tmp = 0;
					 }

					 this->trackBar1->Value = tmp;
				 }
				 else
				 {
					 this->trackBar1->Value = 0;
				 }
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (this->checkedListBox1->GetSelected(3))
				 {
					 this->Binary = true;
					 Bitmap^ tmpBit = gcnew Bitmap(Convert::ToInt32(this->pictureBox2->Image->Width), Convert::ToInt32(this->pictureBox2->Image->Height));
					 for (int i = 1; i < (this->pictureBox2->Image->Width - 1); i++)
					 {
						 for (int j = 1; j < (this->pictureBox2->Image->Height - 1); j++)
						 {
							 if (this->GrayS[i, j]>Convert::ToInt32(this->textBox1->Text))
							 {
								 this->GrayS[i, j] = 255;
							 }
							 else
							 {
								 this->GrayS[i, j] = 0;
							 }
							 tmpBit->SetPixel(i, j, Color::FromArgb(this->GrayS[i, j], this->GrayS[i, j], this->GrayS[i, j]));
						 }
					 }
					 this->pictureBox2->Image = tmpBit;
				 }
	}

	private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e) {
				 Int32 angle = Convert::ToInt32(this->trackBar2->Value.ToString());
				 Single Cos = cos(double(angle)*2*3.14159/360);
				 Single Sin = sin(double(angle) * 2 * 3.14159 / 360);
				 Single mSin = -Sin;
				 this->textBox20->Text = angle.ToString();
				 this->textBox19->Text = Cos.ToString(L"F");
				 this->textBox15->Text = Cos.ToString(L"F");
				 this->textBox18->Text = Sin.ToString(L"F");
				 this->textBox16->Text = mSin.ToString(L"F");
				 

	}
		
	
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if (!this->Binary)
			 {
				 this->comboBox2->SelectedIndex = -1;
				 this->comboBox2->Text = "";
				 MessageBox::Show(L"Must do edge detecting at first!");
			 }
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 array<Int32>^ TMP = gcnew array<Int32>(3);
			 Bitmap^ tmpBit = gcnew Bitmap(Convert::ToInt32(this->pictureBox2->Image->Width), Convert::ToInt32(this->pictureBox2->Image->Height));
			 Bitmap^ Ori = gcnew Bitmap(this->pictureBox2->Image);
			 Int32 A = 0;
			 Color ARGB = Ori->GetPixel(0, 0);
			 if (!this->Affine)
			 {
				 Ori = gcnew Bitmap(this->pictureBox1->Image);
			 }
			 else if ((this->Affine) && (this->comboBox2->SelectedIndex == 0))
			 {
				 MessageBox::Show("The program doesn't be designed for overlaping the edges on the original image after afine transformation.");
			 }
			 for (int i = 0; i < this->pictureBox2->Image->Width; i++)
			 {
				 for (int j = 0; j < this->pictureBox2->Image->Height; j++)
				 {
					 switch (this->comboBox2->SelectedIndex)
					 {
					 case 0:
						 if (!this->Affine)
						 {
							 ARGB = Ori->GetPixel(i, j);
							 switch (this->comboBox1->SelectedIndex)
							 {
							 case 0:
								 if (GrayS[i, j] == 255)
								 {
									 tmpBit->SetPixel(i, j, Color::FromArgb(255, 0, 0));
								 }
								 else
								 {
									 tmpBit->SetPixel(i, j, Color::FromArgb(Convert::ToInt32(ARGB.R), Convert::ToInt32(ARGB.G), Convert::ToInt32(ARGB.B)));
								 }
								 break;
							 case 1:
								 if (GrayS[i, j] == 255)
								 {
									 tmpBit->SetPixel(i, j, Color::FromArgb(0, 255, 0));
								 }
								 else
								 {
									 tmpBit->SetPixel(i, j, Color::FromArgb(Convert::ToInt32(ARGB.R), Convert::ToInt32(ARGB.G), Convert::ToInt32(ARGB.B)));
								 }
								 break;
							 case 2:
								 if (GrayS[i, j] == 255)
								 {
									 tmpBit->SetPixel(i, j, Color::FromArgb(0, 0, 255));
								 }
								 else
								 {
									 tmpBit->SetPixel(i, j, Color::FromArgb(Convert::ToInt32(ARGB.R), Convert::ToInt32(ARGB.G), Convert::ToInt32(ARGB.B)));
								 }
								 break;
							 case 3:
								 tmpBit->SetPixel(i, j, Color::FromArgb(Convert::ToInt32(ARGB.R), Convert::ToInt32(ARGB.G), Convert::ToInt32(ARGB.B)));
								 break;
							 }
						 }
						break;
					 case 1:
						 A = this->GrayOri[i, j];
						 switch (this->comboBox1->SelectedIndex)
						 {
						 case 0:
							 if (GrayS[i, j] == 255)
							 {
								 tmpBit->SetPixel(i, j, Color::FromArgb(255, 0, 0));
								 
							 }
							 else
							 {
								 tmpBit->SetPixel(i, j, Color::FromArgb(A, A, A));
								 this->GrayS[i, j] = A;
							 }
							 break;
						 case 1:
							 if (GrayS[i, j] == 255)
							 {
								 tmpBit->SetPixel(i, j, Color::FromArgb(0, 255, 0));
								 
							 }
							 else
							 {
								 tmpBit->SetPixel(i, j, Color::FromArgb(A, A, A));
								 this->GrayS[i, j] = A;
							 }
							 break;
						 case 2:
							 if (GrayS[i, j] == 255)
							 {
								 tmpBit->SetPixel(i, j, Color::FromArgb(0, 0, 255));
								 
							 }
							 else
							 {
								 tmpBit->SetPixel(i, j, Color::FromArgb(A, A, A));
								 this->GrayS[i, j] = A;
							 }
							 break;
						 case 3:
							 tmpBit->SetPixel(i, j, Color::FromArgb(A, A, A));
							 break;
						 }
						 break;
					 }
				 }
			 }
			 this->pictureBox2->Image = tmpBit;
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 Bitmap^ tmpBit = gcnew Bitmap(this->pictureBox2->Image->Width, this->pictureBox2->Image->Height);
			 array<Int32, 2>^ tmpArr = gcnew array<Int32, 2>(this->pictureBox2->Width, this->pictureBox2->Height);
			 array<Int32>^ tmpGraCount = gcnew array<Int32>(256);
			 Int32 W = this->pictureBox2->Image->Width;
			 Int32 H = this->pictureBox2->Image->Height;
			 Int32 NG = 0;
			 double Ratio = 0.0;

			 this->AftHis = gcnew Bitmap(this->pictureBox4->Width, this->pictureBox4->Height);
			 Graphics^ bTmp = Graphics::FromImage(this->AftHis);
			 Pen^ pTmp = gcnew Pen(Color::Black, 3.0f);
			 bTmp->DrawLine(pTmp, 5, 190, 390, 190);
			 bTmp->DrawLine(pTmp, 10, 195, 10, 10);
			 Double Max = 0.0;
			 Double p = 0.0;


			 for (int i = 0; i < 256; i++)
			 {
				 if (i!=0)
				 {
					 this->GrayCount[i] += this->GrayCount[i - 1];
				 }
			 }
			 for (int i = 0; i < W; i++)
			 {
				 for (int j = 0; j < H; j++)
				 {
					 Ratio = double(this->GrayCount[this->GrayS[i, j]]) / (W*H);
					 NG = Ratio * 255;
					 if (NG>255)
					 {
						 NG = 255;
					 }
					 else if (NG<=0)
					 {
						 NG = 0;
					 }
					 tmpBit->SetPixel(i, j, Color::FromArgb(NG, NG, NG));
					 this->GrayS[i, j] = NG;
					 tmpGraCount[NG]++;
				 }
			 }
			 this->pictureBox2->Image = tmpBit;

			 pTmp->Width = 1.5f;
			 pTmp->Color = Color::Blue;
			 for (int i = 0; i < 256; i++)
			 {
				 if (Max<tmpGraCount[i])
				 {
					 Max = tmpGraCount[i];
				 }
			 }
			 for (int i = 0; i < 256; i++)
			 {
				 p = tmpGraCount[i]/Max ;
				 if (i>0)
				 {
					 bTmp->DrawLine(pTmp, i*1.5 + 10, 190, (i)*1.5 + 10, 190 - p * 180);
				 }
			 }
			 this->pictureBox4->Image = this->AftHis;
			 this->button7->Enabled = false;
		 }


private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (this->checkedListBox1->GetSelected(3))
			 {
				 Int32 W = Convert::ToInt32(this->pictureBox2->Image->Width);
				 Int32 H = Convert::ToInt32(this->pictureBox2->Image->Height);
				 Bitmap^ tmpBit = nullptr;
				 Bitmap^ p2Bit = gcnew Bitmap(this->pictureBox2->Image);
				 array<Int32, 2>^ tmpGrayS = nullptr;
				 array<Int32>^ tmpGrayC = gcnew array<Int32>(256);
				 Int32 Sx = Convert::ToInt32(this->textBox2->Text) % 11;
				 Int32 Sy = Convert::ToInt32(this->textBox6->Text) % 11;
				 Int32 TauV = Convert::ToInt32(this->textBox3->Text) % 11;
				 Int32 TauU = Convert::ToInt32(this->textBox5->Text) % 11;
				 Double Cos = Convert::ToDouble(this->textBox19->Text);
				 Double Sin = Convert::ToDouble(this->textBox18->Text);
				 Double detA = (Sx*Cos - TauV*Sin)*(TauU*Sin + Sy*Cos) - (Sx*Sin + TauV*Cos)*(TauU*Cos - Sy*Sin);
				 Single yW = 0;
				 Single xW = 0;
				 Single xInvW = 0.0;
				 Single yInvW = 0.0;
				 Int32 x = 0;
				 Int32 y = 0;
				 Single xFrac = 0.0;
				 Single yFrac = 0.0;
				 Single nG = 0.0;
				 Int32 xD = 0;
				 Int32 yD = 0;

				 Color pixel1;
				 Color pixel2;
				 Color pixel3;
				 Color pixel4;
				 array<Int32>^ tmpC = gcnew array<Int32>(3);

				 array<Single>^ X = gcnew array<Single> {0, W*(Sx*Cos - TauV*Sin), H*(Sx*Sin + TauV*Cos), H*(Sx*Sin + TauV*Cos) + W*(Sx*Cos - TauV*Sin)};
				 array<Single>^ Y = gcnew array<Single>{0, W*(TauU*Cos - Sy*Sin), H*(TauU*Sin + Sy*Cos), H*(TauU*Sin + Sy*Cos) + W*(TauU*Cos - Sy*Sin)};
				 Array::Sort(X);
				 Array::Sort(Y);
				 Int32 nW = ceil(X[3]) - floor(X[0]);
				 Int32 nH = ceil(Y[3]) - floor(Y[0]);
				 tmpBit = gcnew Bitmap(nW, nH);
				 tmpGrayS = gcnew array<Int32, 2>(nW, nH);
				 array<Double>^ invA = gcnew array<Double>(4);
				 if (Sx == 0){ Sx = 1; }
				 if (Sy == 0){ Sy = 1; }
				 if (detA == 0.0)
				 {
					 invA[0] = 1.0;
					 invA[1] = 0.0;
					 invA[2] = 0.0;
					 invA[3] = 1.0;
				 }
				 else
				 {
					 invA[0] = (TauU*Sin + Sy*Cos) / detA;
					 invA[2] = (-(TauU*Cos - Sy*Sin)) / detA;
					 invA[1] = (-(Sx*Sin + TauV*Cos)) / detA;
					 invA[3] = (Sx*Cos - TauV*Sin) / detA;
				 }
				 this->textBox2->Text = Sx.ToString();
				 this->textBox6->Text = Sy.ToString();
				 this->textBox3->Text = TauV.ToString();
				 this->textBox5->Text = TauU.ToString();
				 for (int i = 0; i < nW; i++)
				 {
					 for (int j = 0; j < nH; j++)
					 {
						 xW = (i)+X[0];
						 yW = (j)+Y[0];
						 xInvW = invA[0] * (xW)+invA[1] * (yW);
						 yInvW = invA[2] * (xW)+invA[3] * (yW);
						 x = (Int32)floor(xInvW);
						 y = (Int32)floor(yInvW);
						 xFrac = xInvW - x;
						 yFrac = yInvW - y;
						 if (((x >= 0) && ((x + 1) < W)) && ((y >= 0) && ((y + 1) < H)))
						 {
							 pixel1 = p2Bit->GetPixel(x, y);
							 pixel2 = p2Bit->GetPixel(x + 1, y);
							 pixel3 = p2Bit->GetPixel(x, y + 1);
							 pixel4 = p2Bit->GetPixel(x+1, y + 1);

							 tmpC[0] = (1 - xFrac)*(1 - yFrac)*pixel1.R + xFrac*(1 - yFrac)*pixel2.R +
								 yFrac*(1 - xFrac)*pixel3.R + xFrac*yFrac*pixel4.R;
							 tmpC[1] = (1 - xFrac)*(1 - yFrac)*pixel1.G + xFrac*(1 - yFrac)*pixel2.G +
								 yFrac*(1 - xFrac)*pixel3.G + xFrac*yFrac*pixel4.G;
							 tmpC[2] = (1 - xFrac)*(1 - yFrac)*pixel1.B + xFrac*(1 - yFrac)*pixel2.B +
								 yFrac*(1 - xFrac)*pixel3.B + xFrac*yFrac*pixel4.B;
						 }
						 else if ((((x + 1) == W) && (y >= 0) && ((y + 1) < H)) || (((y + 1) == H) && (x >= 0)&((x + 1) < W)))
						 {
							 pixel1 = p2Bit->GetPixel(x, y);
							 tmpC[0] = pixel1.R ;
							 tmpC[1] = pixel1.G ;
							 tmpC[2] = pixel1.B;
						 }
						 else
						 {
							 tmpC[0] = 0;
							 tmpC[1] = 0;
							 tmpC[2] = 0;
						 }
						 nG = Convert::ToInt32(pow(pow((double)tmpC[0], 2) + pow((double)tmpC[1], 2) + pow((double)tmpC[2], 2),0.5)/(pow(3.0,2)));
						 if (nG > 255){ nG = 255; }
						 tmpBit->SetPixel(i, j, Color::FromArgb(tmpC[0], tmpC[1], tmpC[2]));
						 tmpGrayS[i, j] = nG;
						 tmpGrayC[(int)nG]++;
					 }
				 }
				 this->pictureBox2->Image = tmpBit;
				 this-> GrayS = tmpGrayS;
				 this->GrayOri = tmpGrayS;
				 this->GrayCount = tmpGrayC;
				 this->button5->Enabled = false;
				 this->Affine = true;
				 this->textBox2->Enabled = false;
				 this->textBox3->Enabled = false;
				 this->textBox5->Enabled = false;
				 this->textBox6->Enabled = false;
			 }
			 else
			 {
				 MessageBox::Show("Please do grayscale at first!!");
			 }
			 
			 
}
}






		 ;
}