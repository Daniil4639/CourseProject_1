#pragma once
#include "PolarPoint.h"
#include "Window.h"
#include "Equation.h"
#include <Windows.h>
#define M_PI 3.14159265358979323846

namespace GraphBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using System::Drawing::Drawing2D::GraphicsPath;

	/// <summary>
	/// —водка дл€ GraphBuilder
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
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;



	public:

		Graphics^ graph;
	private: System::Windows::Forms::Label^ label15;
	public:
		Window* window = new Window();

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(486, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ќтобразить";
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
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(486, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"÷вет графика:";
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
			// label8
			// 
			this->label8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(486, 259);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(180, 16);
			this->label8->TabIndex = 12;
			this->label8->Text = L"ѕеремещение графика:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(483, 292);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(20, 20);
			this->label9->TabIndex = 15;
			this->label9->Text = L"X:";
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(483, 318);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(20, 20);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Y:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(615, 291);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(69, 46);
			this->button2->TabIndex = 17;
			this->button2->Text = L"—местить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &GraphBuilder::button2_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(509, 291);
			this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(97, 20);
			this->numericUpDown4->TabIndex = 18;
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(509, 317);
			this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(97, 20);
			this->numericUpDown5->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(450, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(252, 450);
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
			// label13
			// 
			this->label13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(450, 354);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(252, 1);
			this->label13->TabIndex = 22;
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
			this->label15->Size = System::Drawing::Size(1, 460);
			this->label15->TabIndex = 24;
			// 
			// GraphBuilder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
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
			this->Name = L"GraphBuilder";
			this->Text = L"GraphBuilder";
			this->Load += gcnew System::EventHandler(this, &GraphBuilder::GraphBuilder_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GraphBuilder::GraphBuilder_Paint);
			this->Resize += gcnew System::EventHandler(this, &GraphBuilder::GraphBuilder_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		window->addLine();

		window->drawLine(label7->BackColor, graph);
	}

	private: System::Void GraphBuilder_Load(System::Object^ sender, System::EventArgs^ e) {
		window->addParams(pictureBox1->Width, pictureBox1->Height);
		graph = pictureBox1->CreateGraphics();
	}
	private: System::Void GraphBuilder_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Pen^ pen = gcnew Pen(Color::Black);
		GraphicsPath^ path = gcnew GraphicsPath();

		
	}
	private: System::Void GraphBuilder_Resize(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(700, 450);
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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	graph->Clear(SystemColors::Control);
	window->changeLocation((int)numericUpDown4->Value, (int)numericUpDown5->Value);
	window->reDraw(graph);
	numericUpDown4->Value = 0;
	numericUpDown5->Value = 0;
}
};
}
