#pragma once
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
	private: System::Windows::Forms::NumericUpDown^ redColorNumeric;
	private: System::Windows::Forms::NumericUpDown^ greenColorNumeric;
	private: System::Windows::Forms::NumericUpDown^ blueColorNumeric;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ lineColorShowCase;









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
	private: System::Windows::Forms::Button^ saveProgressButton;
	public:


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ scalingUp;
	private: System::Windows::Forms::Button^ scalingDown;


	private: System::Windows::Forms::Label^ scalingPercent;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ rotateLeft;
	private: System::Windows::Forms::Button^ rotateRight;


	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ equationTextBox;
	private: System::Windows::Forms::Button^ extraWindowOpener;


	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::CheckedListBox^ graphicsListBox;
	private: System::Windows::Forms::Button^ deleteExtraGraphics;


	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ lowBound;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ highBound;

	private: System::Windows::Forms::Label^ errorAlarm;
	private: System::Windows::Forms::TextBox^ argumentTextBox;




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
private: System::Windows::Forms::Button^ showGraphButton;
protected:

	private: System::Windows::Forms::PictureBox^ graphSpace;

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
			this->showGraphButton = (gcnew System::Windows::Forms::Button());
			this->graphSpace = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->redColorNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->greenColorNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->blueColorNumeric = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->lineColorShowCase = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->saveProgressButton = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->scalingUp = (gcnew System::Windows::Forms::Button());
			this->scalingDown = (gcnew System::Windows::Forms::Button());
			this->scalingPercent = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->rotateLeft = (gcnew System::Windows::Forms::Button());
			this->rotateRight = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->equationTextBox = (gcnew System::Windows::Forms::TextBox());
			this->extraWindowOpener = (gcnew System::Windows::Forms::Button());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->graphicsListBox = (gcnew System::Windows::Forms::CheckedListBox());
			this->deleteExtraGraphics = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->lowBound = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->highBound = (gcnew System::Windows::Forms::TextBox());
			this->errorAlarm = (gcnew System::Windows::Forms::Label());
			this->argumentTextBox = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphSpace))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redColorNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenColorNumeric))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blueColorNumeric))->BeginInit();
			this->SuspendLayout();
			// 
			// showGraphButton
			// 
			this->showGraphButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->showGraphButton->Location = System::Drawing::Point(486, 356);
			this->showGraphButton->Name = L"showGraphButton";
			this->showGraphButton->Size = System::Drawing::Size(180, 38);
			this->showGraphButton->TabIndex = 0;
			this->showGraphButton->Text = L"Отобразить";
			this->showGraphButton->UseVisualStyleBackColor = false;
			this->showGraphButton->Click += gcnew System::EventHandler(this, &GraphBuilder::showGraphButton_Click);
			// 
			// graphSpace
			// 
			this->graphSpace->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->graphSpace->Location = System::Drawing::Point(0, 0);
			this->graphSpace->Name = L"graphSpace";
			this->graphSpace->Size = System::Drawing::Size(450, 450);
			this->graphSpace->TabIndex = 1;
			this->graphSpace->TabStop = false;
			this->graphSpace->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphBuilder::graphSpace_MouseDown);
			this->graphSpace->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphBuilder::graphSpace_MouseMove);
			this->graphSpace->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GraphBuilder::graphSpace_MouseUp);
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
			// redColorNumeric
			// 
			this->redColorNumeric->Location = System::Drawing::Point(509, 159);
			this->redColorNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->redColorNumeric->Name = L"redColorNumeric";
			this->redColorNumeric->Size = System::Drawing::Size(97, 20);
			this->redColorNumeric->TabIndex = 6;
			this->redColorNumeric->ValueChanged += gcnew System::EventHandler(this, &GraphBuilder::redColorNumeric_ValueChanged);
			// 
			// greenColorNumeric
			// 
			this->greenColorNumeric->Location = System::Drawing::Point(509, 185);
			this->greenColorNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->greenColorNumeric->Name = L"greenColorNumeric";
			this->greenColorNumeric->Size = System::Drawing::Size(97, 20);
			this->greenColorNumeric->TabIndex = 7;
			this->greenColorNumeric->ValueChanged += gcnew System::EventHandler(this, &GraphBuilder::greenColorNumeric_ValueChanged);
			// 
			// blueColorNumeric
			// 
			this->blueColorNumeric->Location = System::Drawing::Point(509, 211);
			this->blueColorNumeric->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->blueColorNumeric->Name = L"blueColorNumeric";
			this->blueColorNumeric->Size = System::Drawing::Size(97, 20);
			this->blueColorNumeric->TabIndex = 8;
			this->blueColorNumeric->ValueChanged += gcnew System::EventHandler(this, &GraphBuilder::blueColorNumeric_ValueChanged);
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
			// lineColorShowCase
			// 
			this->lineColorShowCase->BackColor = System::Drawing::Color::Black;
			this->lineColorShowCase->Location = System::Drawing::Point(623, 170);
			this->lineColorShowCase->Name = L"lineColorShowCase";
			this->lineColorShowCase->Size = System::Drawing::Size(50, 50);
			this->lineColorShowCase->TabIndex = 11;
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
			// saveProgressButton
			// 
			this->saveProgressButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->saveProgressButton->Location = System::Drawing::Point(486, 400);
			this->saveProgressButton->Name = L"saveProgressButton";
			this->saveProgressButton->Size = System::Drawing::Size(180, 38);
			this->saveProgressButton->TabIndex = 25;
			this->saveProgressButton->Text = L"Сохранить";
			this->saveProgressButton->UseVisualStyleBackColor = false;
			this->saveProgressButton->Click += gcnew System::EventHandler(this, &GraphBuilder::saveProgressButton_Click);
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
			// scalingUp
			// 
			this->scalingUp->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->scalingUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->scalingUp->Location = System::Drawing::Point(463, 293);
			this->scalingUp->Name = L"scalingUp";
			this->scalingUp->Size = System::Drawing::Size(40, 40);
			this->scalingUp->TabIndex = 30;
			this->scalingUp->Text = L"+";
			this->scalingUp->UseVisualStyleBackColor = false;
			this->scalingUp->Click += gcnew System::EventHandler(this, &GraphBuilder::scalingUp_Click);
			// 
			// scalingDown
			// 
			this->scalingDown->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->scalingDown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->scalingDown->Location = System::Drawing::Point(509, 293);
			this->scalingDown->Name = L"scalingDown";
			this->scalingDown->Size = System::Drawing::Size(40, 40);
			this->scalingDown->TabIndex = 31;
			this->scalingDown->Text = L"-";
			this->scalingDown->UseVisualStyleBackColor = false;
			this->scalingDown->Click += gcnew System::EventHandler(this, &GraphBuilder::scalingDown_Click);
			// 
			// scalingPercent
			// 
			this->scalingPercent->BackColor = System::Drawing::SystemColors::ControlLight;
			this->scalingPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->scalingPercent->Location = System::Drawing::Point(520, 266);
			this->scalingPercent->Name = L"scalingPercent";
			this->scalingPercent->Size = System::Drawing::Size(41, 20);
			this->scalingPercent->TabIndex = 32;
			this->scalingPercent->Text = L"100";
			this->scalingPercent->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			// rotateLeft
			// 
			this->rotateLeft->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->rotateLeft->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rotateLeft->Location = System::Drawing::Point(598, 293);
			this->rotateLeft->Name = L"rotateLeft";
			this->rotateLeft->Size = System::Drawing::Size(40, 40);
			this->rotateLeft->TabIndex = 36;
			this->rotateLeft->Text = L"<";
			this->rotateLeft->UseVisualStyleBackColor = false;
			this->rotateLeft->Click += gcnew System::EventHandler(this, &GraphBuilder::rotateLeft_Click);
			// 
			// rotateRight
			// 
			this->rotateRight->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->rotateRight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rotateRight->Location = System::Drawing::Point(644, 293);
			this->rotateRight->Name = L"rotateRight";
			this->rotateRight->Size = System::Drawing::Size(40, 40);
			this->rotateRight->TabIndex = 37;
			this->rotateRight->Text = L">";
			this->rotateRight->UseVisualStyleBackColor = false;
			this->rotateRight->Click += gcnew System::EventHandler(this, &GraphBuilder::rotateRight_Click);
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
			// equationTextBox
			// 
			this->equationTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->equationTextBox->Location = System::Drawing::Point(506, 41);
			this->equationTextBox->Name = L"equationTextBox";
			this->equationTextBox->Size = System::Drawing::Size(178, 22);
			this->equationTextBox->TabIndex = 40;
			// 
			// extraWindowOpener
			// 
			this->extraWindowOpener->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->extraWindowOpener->Location = System::Drawing::Point(486, 72);
			this->extraWindowOpener->Name = L"extraWindowOpener";
			this->extraWindowOpener->Size = System::Drawing::Size(180, 30);
			this->extraWindowOpener->TabIndex = 41;
			this->extraWindowOpener->Text = L"Свойтсва и взаимодействие";
			this->extraWindowOpener->UseVisualStyleBackColor = false;
			this->extraWindowOpener->Click += gcnew System::EventHandler(this, &GraphBuilder::extraWindowOpener_Click);
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
			// graphicsListBox
			// 
			this->graphicsListBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->graphicsListBox->FormattingEnabled = true;
			this->graphicsListBox->Location = System::Drawing::Point(722, 39);
			this->graphicsListBox->Name = L"graphicsListBox";
			this->graphicsListBox->Size = System::Drawing::Size(190, 259);
			this->graphicsListBox->TabIndex = 44;
			this->graphicsListBox->ItemCheck += gcnew System::Windows::Forms::ItemCheckEventHandler(this, &GraphBuilder::graphicsListBox_ItemCheck);
			// 
			// deleteExtraGraphics
			// 
			this->deleteExtraGraphics->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->deleteExtraGraphics->Location = System::Drawing::Point(727, 304);
			this->deleteExtraGraphics->Name = L"deleteExtraGraphics";
			this->deleteExtraGraphics->Size = System::Drawing::Size(180, 38);
			this->deleteExtraGraphics->TabIndex = 45;
			this->deleteExtraGraphics->Text = L"Удалить невыбранные";
			this->deleteExtraGraphics->UseVisualStyleBackColor = false;
			this->deleteExtraGraphics->Click += gcnew System::EventHandler(this, &GraphBuilder::deleteExtraGraphics_Click);
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
			this->label24->Text = L"Диапазон в градусах:";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lowBound
			// 
			this->lowBound->Location = System::Drawing::Point(762, 386);
			this->lowBound->Name = L"lowBound";
			this->lowBound->Size = System::Drawing::Size(136, 20);
			this->lowBound->TabIndex = 47;
			this->lowBound->Text = L"0";
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
			// highBound
			// 
			this->highBound->Location = System::Drawing::Point(762, 418);
			this->highBound->Name = L"highBound";
			this->highBound->Size = System::Drawing::Size(136, 20);
			this->highBound->TabIndex = 50;
			this->highBound->Text = L"2048";
			// 
			// errorAlarm
			// 
			this->errorAlarm->BackColor = System::Drawing::SystemColors::ControlLight;
			this->errorAlarm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->errorAlarm->ForeColor = System::Drawing::Color::Red;
			this->errorAlarm->Location = System::Drawing::Point(458, 34);
			this->errorAlarm->Name = L"errorAlarm";
			this->errorAlarm->Size = System::Drawing::Size(14, 30);
			this->errorAlarm->TabIndex = 51;
			this->errorAlarm->Text = L"!";
			this->errorAlarm->Visible = false;
			// 
			// argumentTextBox
			// 
			this->argumentTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->argumentTextBox->Location = System::Drawing::Point(634, 9);
			this->argumentTextBox->Name = L"argumentTextBox";
			this->argumentTextBox->Size = System::Drawing::Size(32, 20);
			this->argumentTextBox->TabIndex = 52;
			this->argumentTextBox->Text = L"x";
			this->argumentTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// GraphBuilder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(701, 450);
			this->Controls->Add(this->argumentTextBox);
			this->Controls->Add(this->errorAlarm);
			this->Controls->Add(this->highBound);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->lowBound);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->deleteExtraGraphics);
			this->Controls->Add(this->graphicsListBox);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->extraWindowOpener);
			this->Controls->Add(this->equationTextBox);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->rotateRight);
			this->Controls->Add(this->rotateLeft);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->scalingPercent);
			this->Controls->Add(this->scalingDown);
			this->Controls->Add(this->scalingUp);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->saveProgressButton);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->lineColorShowCase);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->blueColorNumeric);
			this->Controls->Add(this->greenColorNumeric);
			this->Controls->Add(this->redColorNumeric);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->showGraphButton);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->graphSpace);
			this->Name = L"GraphBuilder";
			this->Text = L"GraphBuilder";
			this->Load += gcnew System::EventHandler(this, &GraphBuilder::GraphBuilder_Load);
			this->Resize += gcnew System::EventHandler(this, &GraphBuilder::GraphBuilder_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphSpace))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->redColorNumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->greenColorNumeric))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->blueColorNumeric))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void showGraphButton_Click(System::Object^ sender, System::EventArgs^ e) {
		Equation eq;
		string str = msclr::interop::marshal_as<std::string>(equationTextBox->Text);
		string argument = msclr::interop::marshal_as<std::string>(argumentTextBox->Text);

		if (str == "" || argument.length() != 1 || (argument[0] < 65) || (argument[0] > 122)
			|| (argument[0] > 90 && argument[0] < 97) || !eq.trySolve(str, argument)) {
			errorAlarm->Visible = true;
			return;
		}

		errorAlarm->Visible = false;

		float start, end;
		try {
			start = stof(msclr::interop::marshal_as<std::string>(lowBound->Text));
			end = stof(msclr::interop::marshal_as<std::string>(highBound->Text));
		}
		catch (invalid_argument iA) {
			return;
		}

		if (str != "") {
			graphNotEmpty = true;

			graphWindow->addLine(str, lineColorShowCase->BackColor, start, end, argument);

			graphicsListBox->Items->Add("y = " + equationTextBox->Text);
			graphicsListBox->SetItemChecked(graphWindow->lastLineInd, true);

			equationTextBox->Text = "";

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

			graphSpace->Image = bitmap;
		}
	}

	private: System::Void GraphBuilder_Load(System::Object^ sender, System::EventArgs^ e) {
		GraphBuilder::Width = 717;
		graphSpace->SizeMode = PictureBoxSizeMode::Zoom;
		bitmap = gcnew Bitmap(graphSpace->Width, graphSpace->Height);
		graph = Graphics::FromImage(bitmap);
		graphWindow->addParams(graphSpace->Width, graphSpace->Height);
	}

	private: System::Void GraphBuilder_Resize(System::Object^ sender, System::EventArgs^ e) {
		if (!formCanChangeSize) {
			this->ClientSize = System::Drawing::Size(717, 450);
		}
	}

	private: System::Void redColorNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		lineColorShowCase->BackColor = Color::FromArgb((int)redColorNumeric->Value, (int)greenColorNumeric->Value, (int)blueColorNumeric->Value);
	}

	private: System::Void greenColorNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		lineColorShowCase->BackColor = Color::FromArgb((int)redColorNumeric->Value, (int)greenColorNumeric->Value, (int)blueColorNumeric->Value);
	}

	private: System::Void blueColorNumeric_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		lineColorShowCase->BackColor = Color::FromArgb((int)redColorNumeric->Value, (int)greenColorNumeric->Value, (int)blueColorNumeric->Value);
	}
	private: System::Void graphSpace_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		isPanelMove = true;
		mousePoint = e->Location;
	}
	private: System::Void graphSpace_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (isPanelMove) {
			isPanelMove = false;
		}
	}
	private: System::Void graphSpace_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		if (isPanelMove) {

			graphWindow->startX+= e->X - mousePoint.X;
			graphWindow->startY+= e->Y - mousePoint.Y;
			mousePoint.X = e->X;
			mousePoint.Y = e->Y;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

			graphSpace->Image = bitmap;
		}
	}
	private: System::Void saveProgressButton_Click(System::Object^ sender, System::EventArgs^ e) {

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
	private: System::Void scalingUp_Click(System::Object^ sender, System::EventArgs^ e) {
		if (graphNotEmpty && graphScale >= 10 && graphScale < 100) {

			scalingPercent->Text = Convert::ToString(graphScale + 10);
			graphScale += 10;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

			graphSpace->Image = bitmap;
		}
		else if (graphNotEmpty && graphScale >= 1 && graphScale < 10) {

			scalingPercent->Text = Convert::ToString(graphScale + 1);
			graphScale += 1;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

			graphSpace->Image = bitmap;
		}
		else if (graphNotEmpty && graphScale >= 100) {

			scalingPercent->Text = Convert::ToString(graphScale + 20);
			graphScale += 20;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

			graphSpace->Image = bitmap;
		}
	}
	private: System::Void scalingDown_Click(System::Object^ sender, System::EventArgs^ e) {
		if (graphNotEmpty && graphScale > 10 && graphScale <= 100) {

			scalingPercent->Text = Convert::ToString(graphScale - 10);
			graphScale -= 10;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

			graphSpace->Image = bitmap;
		}
		else if (graphNotEmpty && graphScale > 1 && graphScale <= 10) {

			scalingPercent->Text = Convert::ToString(graphScale - 1);
			graphScale -= 1;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

			graphSpace->Image = bitmap;
		}
		else if (graphNotEmpty && graphScale > 100) {

			scalingPercent->Text = Convert::ToString(graphScale - 20);
			graphScale -= 20;

			graph->Clear(SystemColors::Control);

			graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

			graphSpace->Image = bitmap;
		}
	}
	private: System::Void rotateLeft_Click(System::Object^ sender, System::EventArgs^ e) {
		graphWindow->rotateAll(90);

		graph->Clear(SystemColors::Control);

		graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

		graphSpace->Image = bitmap;
	}
	private: System::Void rotateRight_Click(System::Object^ sender, System::EventArgs^ e) {
		graphWindow->rotateAll(-90);

		graph->Clear(SystemColors::Control);

		graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

		graphSpace->Image = bitmap;
	}
private: System::Void extraWindowOpener_Click(System::Object^ sender, System::EventArgs^ e) {

	formCanChangeSize = true;
	if (GraphBuilder::Width == 717) {
		GraphBuilder::Width = 945;
	}
	else {
		GraphBuilder::Width = 717;
	}
	formCanChangeSize = false;
}
private: System::Void graphicsListBox_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {

	graphWindow->changeChecked(e->Index);
}
private: System::Void deleteExtraGraphics_Click(System::Object^ sender, System::EventArgs^ e) {

	vector<int> falsePositions;

	for (int i = 0; i < graphicsListBox->Items->Count; i++) {
		if (graphicsListBox->GetItemCheckState(i) == CheckState::Unchecked) {
			falsePositions.push_back(i);
		}
	}

	graphWindow->deleteExtra(falsePositions);

	for (int i = falsePositions.size() - 1; i >= 0; i--) {
		graphicsListBox->Items->RemoveAt(falsePositions[i]);
	}

	graph->Clear(SystemColors::Control);

	graphWindow->reDraw(graph, graphSpace, graphWindow->scale * 100 / graphScale);

	graphSpace->Image = bitmap;
}
};
}