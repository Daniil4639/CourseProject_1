#pragma once
#include "PolarPoint.h"
#include "Window.h"
#include "Equation.h"
#include <Windows.h>
#include <string>
#define M_PI 3.14159265358979323846

namespace GraphBuilder {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using System::Drawing::Drawing2D::GraphicsPath;
	using std::stoi;
	using std::wstring;

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
		Window* window = new Window();
		bool isPanelMove;
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
			this->label1->Location = System::Drawing::Point(486, 120);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(180, 16);
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
			this->label8->Size = System::Drawing::Size(705, 1);
			this->label8->TabIndex = 26;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(0, 449);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(705, 1);
			this->label9->TabIndex = 27;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(486, 261);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(180, 16);
			this->label10->TabIndex = 28;
			this->label10->Text = L"Масштаб:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Location = System::Drawing::Point(450, 352);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(252, 1);
			this->label13->TabIndex = 29;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(531, 293);
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
			this->button4->Location = System::Drawing::Point(577, 293);
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
			this->label16->Location = System::Drawing::Point(617, 256);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(29, 25);
			this->label16->TabIndex = 32;
			this->label16->Text = L"100";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label17
			// 
			this->label17->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(646, 256);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(20, 25);
			this->label17->TabIndex = 33;
			this->label17->Text = L"%";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// GraphBuilder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(700, 450);
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

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		graphNotEmpty = true;

		window->addLine();

		graph->Clear(SystemColors::Control);

		window->reDraw(label7->BackColor, graph, pictureBox1);

		pictureBox1->Image = bitmap;
	}

	private: System::Void GraphBuilder_Load(System::Object^ sender, System::EventArgs^ e) {

		pictureBox1->SizeMode = PictureBoxSizeMode::Zoom;
		bitmap = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		graph = Graphics::FromImage(bitmap);
		window->addParams(pictureBox1->Width, pictureBox1->Height);
	}

	private: System::Void GraphBuilder_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
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
		pictureBox1->Left += e->X - mousePoint.X;
		if (pictureBox1->Left > 0) {
			pictureBox1->Left = 0;
		}
		else if (pictureBox1->Left + pictureBox1->Width < label15->Height) {
			pictureBox1->Left = label15->Height - pictureBox1->Width;
		}

		pictureBox1->Top += e->Y - mousePoint.Y;
		if (pictureBox1->Top > 0) {
			pictureBox1->Top = 0;
		}
		else if (pictureBox1->Top + pictureBox1->Height < label15->Height) {
			pictureBox1->Top = label15->Height - pictureBox1->Height;
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	SaveFileDialog^ save = gcnew SaveFileDialog();
	save->Filter = "Png Image|*.png|Bitmap Image|*.bmp|Gif Image|*.gif";
	save->Title = "Save an Image File";
	save->ShowDialog();
	System::IO::FileStream^ fs = (System::IO::FileStream^)save->OpenFile();
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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (graphNotEmpty && pictureBox1->Width != label15->Height * 5) {

		pictureBox1->Width += label15->Height;
		pictureBox1->Height += label15->Height;
		pictureBox1->Left -= label15->Height / 2;
		pictureBox1->Top -= label15->Height / 2;

		label16->Text = Convert::ToString(graphScale - 20);
		graphScale -= 20;
		
		if (pictureBox1->Left > 0) {
			pictureBox1->Left = 0;
		}
		else if (pictureBox1->Left + pictureBox1->Width < label15->Height) {
			pictureBox1->Left = label15->Height - pictureBox1->Width;
		}

		if (pictureBox1->Top > 0) {
			pictureBox1->Top = 0;
		}
		else if (pictureBox1->Top + pictureBox1->Height < label15->Height) {
			pictureBox1->Top = label15->Height - pictureBox1->Height;
		}
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (graphNotEmpty && pictureBox1->Width != label15->Height) {

		pictureBox1->Width -= label15->Height;
		pictureBox1->Height -= label15->Height;
		pictureBox1->Left += label15->Height / 2;
		pictureBox1->Top += label15->Height / 2;

		label16->Text = Convert::ToString(graphScale + 20);
		graphScale += 20;

		if (pictureBox1->Left > 0) {
			pictureBox1->Left = 0;
		}
		else if (pictureBox1->Left + pictureBox1->Width < label15->Height) {
			pictureBox1->Left = label15->Height - pictureBox1->Width;
		}

		if (pictureBox1->Top > 0) {
			pictureBox1->Top = 0;
		}
		else if (pictureBox1->Top + pictureBox1->Height < label15->Height) {
			pictureBox1->Top = label15->Height - pictureBox1->Height;
		}
	}
}
};
}
