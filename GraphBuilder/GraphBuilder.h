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

		Graphics^ graph;

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(486, 400);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ќтобразить";
			this->button1->UseVisualStyleBackColor = true;
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
			// GraphBuilder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->ClientSize = System::Drawing::Size(700, 450);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"GraphBuilder";
			this->Text = L"GraphBuilder";
			this->Load += gcnew System::EventHandler(this, &GraphBuilder::GraphBuilder_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &GraphBuilder::GraphBuilder_Paint);
			this->Resize += gcnew System::EventHandler(this, &GraphBuilder::GraphBuilder_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Window window(pictureBox1->Width, pictureBox1->Height);
		
		window.addLine();

		window.drawLine(graph);
	}

	private: System::Void GraphBuilder_Load(System::Object^ sender, System::EventArgs^ e) {
		graph = pictureBox1->CreateGraphics();
	}
	private: System::Void GraphBuilder_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Pen^ pen = gcnew Pen(Color::Black);
		GraphicsPath^ path = gcnew GraphicsPath();

		path->AddLine(pictureBox1->Width - 1, 0, pictureBox1->Width - 1, pictureBox1->Height - 1);
		graph->DrawPath(pen, path);
	}
	private: System::Void GraphBuilder_Resize(System::Object^ sender, System::EventArgs^ e) {
		this->ClientSize = System::Drawing::Size(700, 450);
	}
};
}
