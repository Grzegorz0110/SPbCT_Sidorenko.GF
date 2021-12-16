#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <Header.h>
#include <time.h>
#include<locale.h>
#define SIZE 1000

namespace FormsZadaniye {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Сводка для MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 26);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Считать из файла";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 58);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(646, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(23, 127);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Старт";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(42, 153);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(42, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(42, 179);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 13);
			this->label3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 205);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 13);
			this->label5->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(42, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(42, 231);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 9;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(42, 244);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(42, 257);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 11;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(42, 270);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(428, 328);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 13;
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(670, 540);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private:System::IO::StreamReader^ sr;
	private:bool doneReading;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = "";

		if (doneReading) return;
		if (sr == nullptr) sr = gcnew System::IO::StreamReader("c:\\Users\\grzeg\\source\\repos\\FormsZadaniye\\text.txt");

		for (int i = 0; i < 5; i++)
		{
			String^ line = sr->ReadLine();
			if (line == nullptr)
			{
				doneReading = true;
				sr->Close();
				break;
			}
			textBox1->AppendText(line + "\n");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)	
	{
		setlocale(LC_ALL, "rus");
		ifstream fh("text.txt");
		vector<string> vs;
		string s, a = "?";
		int x = 9;
		time_t ltime;
		wchar_t buf[SIZE];
		errno_t err;
		time(&ltime);
		err = _wctime_s(buf, SIZE, &ltime);
		fh >> s;
		time_t now = time(0);
		char* dt = ctime(&now);
		label11->Text = "ФИО:\nСидоренко Григорий Федорович к504\n\nТекущие дата и время:\n" + gcnew System::String(dt);
		
		for (int i = 0; i < s.length(); i += 10)
		{
			s.replace(x, 1, a);
			vs.push_back(s.substr(i, 10));
			x += 9;
		}
		label1->Text = gcnew String(vs[0].c_str());
		label2->Text = gcnew String(vs[1].c_str());
		label3->Text = gcnew String(vs[2].c_str());
		label4->Text = gcnew String(vs[3].c_str());
		label5->Text = gcnew String(vs[4].c_str());
		label6->Text = gcnew String(vs[5].c_str());
		label7->Text = gcnew String(vs[6].c_str());
		label8->Text = gcnew String(vs[7].c_str());
		label9->Text = gcnew String(vs[8].c_str());
		label10->Text = gcnew String(vs[9].c_str());

	}
};
}
