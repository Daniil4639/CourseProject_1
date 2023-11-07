#pragma once
#include "PolarPoint.h"
#include "Window.h"
#include "GraphWindow.h"
#include "Equation.h"
#include <Windows.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#define M_PI 3.14159265358979323846

namespace GraphBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using System::Drawing::Drawing2D::GraphicsPath;
	using namespace std;

	/// <summary>
	/// Сводка для GraphBuilder
	/// </summary>
	public ref class GraphBuilder : public System::Windows::Forms::Form
	{
	public:
		GraphBuilder(void)
		{
			InitializeComponent();
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;








	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label14;



	public:

		Bitmap^ bitmap;
		Graphics^ graph;
		GraphWindow* graphWindow = new GraphWindow();
		bool isPanelMove;
		bool isButtonPlus, IsButtonMinus;
		bool formCanChangeSize = false;
		Point mousePoint;
		int graphScale = 100;
		bool graphNotEmpty = false;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::TextBox^ textBox4;

	public:

	private: System::Windows::Forms::Label^ label15;
	public:

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~GraphBuilder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(486, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Отобразить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &GraphBuilder::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(450, 450);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphBuilder::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphBuilder::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphBuilder::pictureBox1_MouseUp);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(509, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 26);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Цвет графика:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(483, 159);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(20, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"R";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(483, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"G";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(483, 211);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(20, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"B";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(509, 159);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(97, 20);
			this->numericUpDown1->TabIndex = 6;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &GraphBuilder::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(509, 185);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(97, 20);
			this->numericUpDown2->TabIndex = 7;
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &GraphBuilder::numericUpDown2_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(509, 211);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(97, 20);
			this->numericUpDown3->TabIndex = 8;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &GraphBuilder::numericUpDown3_ValueChanged);
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::Desktop;
			this->label5->Location = System::Drawing::Point(612, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 72);
			this->label5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(618, 165);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 60);
			this->label6->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(623, 170);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(50, 50);
			this->label7->TabIndex = 11;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(450, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(484, 450);
			this->label11->TabIndex = 20;
			// 
			// label12
			// 
			this->label12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Location = System::Drawing::Point(450, 248);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(252, 1);
			this->label12->TabIndex = 21;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(450, 109);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(252, 1);
			this->label14->TabIndex = 23;
			// 
			// label15
			// 
			this->label15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->Location = System::Drawing::Point(450, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(1, 450);
			this->label15->TabIndex = 24;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(486, 400);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 38);
			this->button2->TabIndex = 25;
			this->button2->Text = L"Сохранить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GraphBuilder::button2_Click);
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(0, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(945, 1);
			this->label8->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(0, 449);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(945, 1);
			this->label9->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(456, 268);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(70, 16);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Масштаб:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(450, 352);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(500, 1);
			this->label13->TabIndex = 29;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(463, 293);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(40, 40);
			this->button3->TabIndex = 30;
			this->button3->Text = L"+";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &GraphBuilder::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(509, 293);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(40, 40);
			this->button4->TabIndex = 31;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &GraphBuilder::button4_Click);
			// 
			// label16
			// 
			this->label16->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(520, 266);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(41, 20);
			this->label16->TabIndex = 32;
			this->label16->Text = L"100";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(559, 265);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 21);
			this->label17->TabIndex = 33;
			this->label17->Text = L"%";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label18
			// 
			this->label18->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label18->Location = System::Drawing::Point(578, 248);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(1, 105);
			this->label18->TabIndex = 34;
			// 
			// label19
			// 
			this->label19->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(598, 265);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(80, 16);
			this->label19->TabIndex = 35;
			this->label19->Text = L"Поворот:";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(598, 293);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(40, 40);
			this->button5->TabIndex = 36;
			this->button5->Text = L"<";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &GraphBuilder::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(644, 293);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(40, 40);
			this->button6->TabIndex = 37;
			this->button6->Text = L">";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &GraphBuilder::button6_Click);
			// 
			// label20
			// 
			this->label20->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(456, 9);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(180, 16);
			this->label20->TabIndex = 38;
			this->label20->Text = L"Введите уравнение по:";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(473, 39);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(30, 20);
			this->label21->TabIndex = 39;
			this->label21->Text = L"y = ";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(506, 41);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(178, 22);
			this->textBox1->TabIndex = 40;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Location = System::Drawing::Point(486, 72);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(180, 30);
			this->button7->TabIndex = 41;
			this->button7->Text = L"Свойтсва и взаимодействие";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &GraphBuilder::button7_Click);
			// 
			// label22
			// 
			this->label22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->Location = System::Drawing::Point(701, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(1, 450);
			this->label22->TabIndex = 42;
			// 
			// label23
			// 
			this->label23->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(727, 9);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(180, 16);
			this->label23->TabIndex = 43;
			this->label23->Text = L"Список графиков:";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(722, 39);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(190, 259);
			this->checkedListBox1->TabIndex = 44;
			this->checkedListBox1->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &GraphBuilder::checkedListBox1_ItemCheck);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(727, 304);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(180, 38);
			this->button8->TabIndex = 45;
			this->button8->Text = L"Удалить невыбранные";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &GraphBuilder::button8_Click);
			// 
			// label24
			// 
			this->label24->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(738, 356);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(160, 16);
			this->label24->TabIndex = 46;
			this->label24->Text = L"Диапозон в градусах:";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(762, 386);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(136, 20);
			this->textBox2->TabIndex = 47;
			this->textBox2->Text = L"0";
			// 
			// label25
			// 
			this->label25->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(718, 384);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(38, 20);
			this->label25->TabIndex = 48;
			this->label25->Text = L"от:";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->Location = System::Drawing::Point(718, 418);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(38, 20);
			this->label26->TabIndex = 49;
			this->label26->Text = L"до:";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(762, 418);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(136, 20);
			this->textBox3->TabIndex = 50;
			this->textBox3->Text = L"2048";
			// 
			// label27
			// 
			this->label27->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::Color::Red;
			this->label27->Location = System::Drawing::Point(458, 34);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(14, 30);
			this->label27->TabIndex = 51;
			this->label27->Text = L"!";
			this->label27->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(634, 9);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(32, 20);
			this->textBox4->TabIndex = 52;
			this->textBox4->Text = L"x";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// GraphBuilder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(701, 450);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"GraphBuilder";
			this->Text = L"GraphBuilder";
			this->Load += gcnew System::EventHandler(this, &GraphBuilder::GraphBuilder_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GraphBuilder::GraphBuilder_Paint);
			this->Resize += gcnew System::EventHandler(this, &GraphBuilder::GraphBuilder_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Equation eq;
		string str = msclr::interop::marshal_as<std::string>(textBox1->Text);
		string argument = msclr::interop::marshal_as<std::string>(textBox4->Text);

		if (str == "" || argument.length() != 1 || argument == " "
			|| argument == ")" || argument == "(" || !eq.trySolve(str, argument)) {
			label27->Visible = true;
			return;
		}

		label27->Visible = false;

		float start, end;
		try {
			start = stof(msclr::interop::marshal_as<std::string>(textBox2->Text));
			end = stof(msclr::interop::marshal_as<std::string>(textBox3->Text));
		}
		catch (invalid_argument iA) {
			return;
		}

		if (str != "") {
			graphNotEmpty = true;

			graphWindow->addLine(str, label7->BackColor, start, end, argument);

			checkedListBox1->Items->Add("y = " + textBox1->Text);
			checkedListBox1->SetItemChecked(graphWindow->lastLineInd, true);

			textBox1->Text = "";

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

			pictureBox1->Image = bitmap;
		}
	}

	private: System::Void GraphBuilder_Load(System::Object^ sender, System::EventArgs^ e) {

		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		bitmap = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		graph = Graphics::FromImage(bitmap);
		graphWindow->addParams(pictureBox1->Width, pictureBox1->Height);
	}

	private: System::Void GraphBuilder_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void GraphBuilder_Resize(System::Object^ sender, System::EventArgs^ e) {
		if (!formCanChangeSize) {
			this->ClientSize = System::Drawing::Size(717, 450);
		}
	}

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		label7->BackColor = Color::FromArgb((int)numericUpDown1->Value, (int)numericUpDown2->Value, (int)numericUpDown3->Value);
	}

	private: System::Void numericUpDown2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		label7->BackColor = Color::FromArgb((int)numericUpDown1->Value, (int)numericUpDown2->Value, (int)numericUpDown3->Value);
	}

	private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		label7->BackColor = Color::FromArgb((int)numericUpDown1->Value, (int)numericUpDown2->Value, (int)numericUpDown3->Value);
	}
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		isPanelMove = true;
		mousePoint = e->Location;
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isPanelMove) {
			isPanelMove = false;
		}
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if (isPanelMove) {

			graphWindow->startX+= e->X - mousePoint.X;
			graphWindow->startY+= e->Y - mousePoint.Y;
			mousePoint.X = e->X;
			mousePoint.Y = e->Y;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

			pictureBox1->Image = bitmap;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		SaveFileDialog^ save = gcnew SaveFileDialog();
		save->Filter = "Png Image|*.png|Bitmap Image|*.bmp|Gif Image|*.gif";
		save->Title = "Save an Image File";

		System::IO::FileStream^ fs;

		if (save->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			fs = (System::IO::FileStream^)save->OpenFile();

			switch (save->FilterIndex)
			{
			case 1:
				bitmap->Save(fs, System::Drawing::Imaging::ImageFormat::Png);
				break;

			case 2:
				bitmap->Save(fs, System::Drawing::Imaging::ImageFormat::Bmp);
				break;

			case 3:
				bitmap->Save(fs, System::Drawing::Imaging::ImageFormat::Gif);
				break;
			}

			fs->Close();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (graphNotEmpty && graphScale > 10 && graphScale <= 100) {

			label16->Text = Convert::ToString(graphScale - 10);
			graphScale -= 10;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

			pictureBox1->Image = bitmap;
		}
		else if (graphNotEmpty && graphScale > 1 && graphScale <= 10) {

			label16->Text = Convert::ToString(graphScale - 1);
			graphScale -= 1;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

			pictureBox1->Image = bitmap;
		}
		else if (graphNotEmpty && graphScale > 100) {

			label16->Text = Convert::ToString(graphScale - 20);
			graphScale -= 20;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

			pictureBox1->Image = bitmap;
		}
	
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (graphNotEmpty && graphScale >= 10 && graphScale < 100) {

			label16->Text = Convert::ToString(graphScale + 10);
			graphScale += 10;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

			pictureBox1->Image = bitmap;
		}
		else if (graphNotEmpty && graphScale >= 1 && graphScale < 10) {

			label16->Text = Convert::ToString(graphScale + 1);
			graphScale += 1;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

			pictureBox1->Image = bitmap;
		}
		else if (graphNotEmpty && graphScale >= 100) {

			label16->Text = Convert::ToString(graphScale + 20);
			graphScale += 20;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

			pictureBox1->Image = bitmap;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		graphWindow->rotateAll(90);

		graph->Clear(SystemColors::Control);

		graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

		pictureBox1->Image = bitmap;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		graphWindow->rotateAll(-90);

		graph->Clear(SystemColors::Control);

		graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

		pictureBox1->Image = bitmap;
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	formCanChangeSize = true;
	if (GraphBuilder::Width == 717) {
		GraphBuilder::Width = 945;
	}
	else {
		GraphBuilder::Width = 717;
	}
	formCanChangeSize = false;
}
private: System::Void checkedListBox1_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {

	graphWindow->changeChecked(e->Index);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

	vector<int> falsePositions;

	for (int i = 0; i < checkedListBox1->Items->Count; i++) {
		if (checkedListBox1->GetItemCheckState(i) == CheckState::Unchecked) {
			falsePositions.push_back(i);
		}
	}

	graphWindow->deleteExtra(falsePositions);

	for (int i = falsePositions.size() - 1; i >= 0; i--) {
		checkedListBox1->Items->RemoveAt(falsePositions[i]);
	}

	graph->Clear(SystemColors::Control);

	graphWindow->reDraw(graph, pictureBox1, graphWindow->scale * 100 / graphScale);

	pictureBox1->Image = bitmap;
}
};
}