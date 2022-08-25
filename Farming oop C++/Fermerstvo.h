#pragma once

#include <windows.h>
#include <msclr\marshal_cppstd.h>
#include <sstream>
#include <fstream>
#include <string>

#include "Fermer.h"
#include "Error.h"

namespace OOP3 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>

	/// </summary>
	public ref class Fermerstvo : public System::Windows::Forms::Form
	{
		Rukovoditel* fermerstvo = new Rukovoditel("Господарство 1");

	public:
		Fermerstvo(void)
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
		~Fermerstvo()
		{
			if (components)
				delete components;
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ інструкціяToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem1;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::GroupBox^ groupBox4;

	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Label^ label13;

	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ проПрограмуToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ переглядДовідкиToolStripMenuItem;
	private: System::Windows::Forms::Label^ label14;

	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститиToolStripMenuItem;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->інструкціяToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->переглядДовідкиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button14);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(16, 33);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(343, 230);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Фермери";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(8, 186);
			this->button14->Margin = System::Windows::Forms::Padding(4);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(157, 28);
			this->button14->TabIndex = 12;
			this->button14->Text = L"Видалити по імені";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Fermerstvo::button14_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 143);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 28);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Додати фермера";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Fermerstvo::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(8, 101);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(260, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 81);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Бюджет";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 27);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ім\'я";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(8, 47);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(260, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Fermerstvo::textBox1_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->вихідToolStripMenuItem,
					this->проПрограмуToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1425, 28);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Fermerstvo::menuStrip1_ItemClicked);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->проПрограмуToolStripMenuItem,
					this->інструкціяToolStripMenuItem, this->очиститиToolStripMenuItem, this->вихідToolStripMenuItem1
			});
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->вихідToolStripMenuItem->Text = L"Файл";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fermerstvo::вихідToolStripMenuItem_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->проПрограмуToolStripMenuItem->Text = L"Відкрити";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fermerstvo::проПрограмуToolStripMenuItem_Click);
			// 
			// інструкціяToolStripMenuItem
			// 
			this->інструкціяToolStripMenuItem->Name = L"інструкціяToolStripMenuItem";
			this->інструкціяToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->інструкціяToolStripMenuItem->Text = L"Зберегти";
			this->інструкціяToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fermerstvo::інструкціяToolStripMenuItem_Click);
			// 
			// очиститиToolStripMenuItem
			// 
			this->очиститиToolStripMenuItem->Name = L"очиститиToolStripMenuItem";
			this->очиститиToolStripMenuItem->Size = System::Drawing::Size(157, 26);
			this->очиститиToolStripMenuItem->Text = L"Очистити";
			this->очиститиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fermerstvo::очиститиToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem1
			// 
			this->вихідToolStripMenuItem1->Name = L"вихідToolStripMenuItem1";
			this->вихідToolStripMenuItem1->Size = System::Drawing::Size(157, 26);
			this->вихідToolStripMenuItem1->Text = L"Вихід";
			this->вихідToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Fermerstvo::вихідToolStripMenuItem1_Click);
			// 
			// проПрограмуToolStripMenuItem1
			// 
			this->проПрограмуToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->переглядДовідкиToolStripMenuItem });
			this->проПрограмуToolStripMenuItem1->Name = L"проПрограмуToolStripMenuItem1";
			this->проПрограмуToolStripMenuItem1->Size = System::Drawing::Size(77, 24);
			this->проПрограмуToolStripMenuItem1->Text = L"Довідка";
			// 
			// переглядДовідкиToolStripMenuItem
			// 
			this->переглядДовідкиToolStripMenuItem->Name = L"переглядДовідкиToolStripMenuItem";
			this->переглядДовідкиToolStripMenuItem->Size = System::Drawing::Size(215, 26);
			this->переглядДовідкиToolStripMenuItem->Text = L"Перегляд довідки";
			this->переглядДовідкиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Fermerstvo::переглядДовідкиToolStripMenuItem_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Location = System::Drawing::Point(837, 33);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(581, 485);
			this->groupBox3->TabIndex = 9;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Перегляд";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(8, 23);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(565, 454);
			this->dataGridView1->TabIndex = 0;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(8, 105);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(176, 22);
			this->textBox6->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 85);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Назва";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(8, 144);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 17);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Вид";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(4, 204);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 17);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Кількість";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(8, 224);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(96, 22);
			this->textBox4->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(8, 383);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(191, 28);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Додати продукцію";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Fermerstvo::button2_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(8, 284);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(176, 22);
			this->textBox7->TabIndex = 7;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(8, 342);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(176, 22);
			this->textBox8->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 265);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(119, 17);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Ціна за одиницю";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 322);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 17);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Одиниці";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(8, 427);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(191, 43);
			this->button5->TabIndex = 20;
			this->button5->Text = L"Видалити продукцію по назві та кількості";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Fermerstvo::button5_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox4);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBox8);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Location = System::Drawing::Point(367, 33);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(244, 485);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Продукція";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(8, 47);
			this->comboBox4->Margin = System::Windows::Forms::Padding(4);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(176, 24);
			this->comboBox4->TabIndex = 31;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Fermerstvo::comboBox4_SelectedIndexChanged);
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Зерно", L"М\'ясо", L"Овочі", L"Фрукти" });
			this->comboBox1->Location = System::Drawing::Point(8, 169);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(176, 24);
			this->comboBox1->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 27);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 17);
			this->label3->TabIndex = 22;
			this->label3->Text = L"Виберіть фермера";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->comboBox5);
			this->groupBox4->Controls->Add(this->comboBox3);
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->textBox15);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->button15);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->textBox13);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->button4);
			this->groupBox4->Controls->Add(this->textBox9);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Location = System::Drawing::Point(16, 271);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4);
			this->groupBox4->Size = System::Drawing::Size(343, 247);
			this->groupBox4->TabIndex = 12;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Потреби";
			// 
			// comboBox5
			// 
			this->comboBox5->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(8, 85);
			this->comboBox5->Margin = System::Windows::Forms::Padding(4);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(176, 24);
			this->comboBox5->TabIndex = 31;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(8, 38);
			this->comboBox3->Margin = System::Windows::Forms::Padding(4);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(176, 24);
			this->comboBox3->TabIndex = 30;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Fermerstvo::comboBox3_SelectedIndexChanged);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Добрива", L"Засоби виробництва", L"Транспортні послуги" });
			this->comboBox2->Location = System::Drawing::Point(8, 128);
			this->comboBox2->Margin = System::Windows::Forms::Padding(4);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(176, 24);
			this->comboBox2->TabIndex = 29;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(193, 111);
			this->label15->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 17);
			this->label15->TabIndex = 28;
			this->label15->Text = L"Назва";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(193, 128);
			this->textBox15->Margin = System::Windows::Forms::Padding(4);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(140, 22);
			this->textBox15->TabIndex = 27;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(8, 20);
			this->label14->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(130, 17);
			this->label14->TabIndex = 24;
			this->label14->Text = L"Виберіть фермера";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(192, 209);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(143, 28);
			this->button15->TabIndex = 26;
			this->button15->Text = L"Видалити потребу";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Fermerstvo::button15_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(8, 68);
			this->label13->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(137, 17);
			this->label13->TabIndex = 24;
			this->label13->Text = L"Виберіть продукцію";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(8, 215);
			this->textBox13->Margin = System::Windows::Forms::Padding(4);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(176, 22);
			this->textBox13->TabIndex = 8;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(8, 197);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 17);
			this->label12->TabIndex = 7;
			this->label12->Text = L"Вартість";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(192, 177);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(143, 28);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Додати потребу";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Fermerstvo::button4_Click_1);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(8, 171);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(176, 22);
			this->textBox9->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 154);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(66, 17);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Кількість";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(8, 111);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 17);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Тип";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button12);
			this->groupBox5->Controls->Add(this->button11);
			this->groupBox5->Controls->Add(this->button10);
			this->groupBox5->Controls->Add(this->textBox12);
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Controls->Add(this->button6);
			this->groupBox5->Controls->Add(this->button7);
			this->groupBox5->Location = System::Drawing::Point(619, 33);
			this->groupBox5->Margin = System::Windows::Forms::Padding(4);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Padding = System::Windows::Forms::Padding(4);
			this->groupBox5->Size = System::Drawing::Size(211, 485);
			this->groupBox5->TabIndex = 23;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Меню керівника";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(8, 405);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(191, 65);
			this->button12->TabIndex = 27;
			this->button12->Text = L"Яка різниця між кредитом і отриманим прибутком";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Fermerstvo::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(8, 348);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(191, 52);
			this->button11->TabIndex = 26;
			this->button11->Text = L"Який кредит потрібен кожному фермеру";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Fermerstvo::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(8, 288);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(191, 55);
			this->button10->TabIndex = 25;
			this->button10->Text = L"Прибуток фермерів по кожному виду продукції";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Fermerstvo::button10_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(8, 192);
			this->textBox12->Margin = System::Windows::Forms::Padding(4);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(73, 22);
			this->textBox12->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(4, 172);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 17);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Назва продукції";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(8, 224);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(191, 58);
			this->button8->TabIndex = 21;
			this->button8->Text = L"Яку кількість заданої продукції виробляють фермери";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Fermerstvo::button8_Click_1);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(8, 105);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(191, 58);
			this->button6->TabIndex = 20;
			this->button6->Text = L"Що потрібно кожному фермеру для виробництва";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Fermerstvo::button6_Click_1);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(8, 27);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(191, 70);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Яку продукцію виробляють фермери області";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Fermerstvo::button7_Click_1);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Fermerstvo::openFileDialog1_FileOk);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Fermerstvo::saveFileDialog1_FileOk);
			// 
			// Fermerstvo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1425, 523);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Fermerstvo";
			this->Text = L"Фермерське господарство";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void вихідToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   // -----------------------------додавання нового фермера-------------------------------------
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
			int budjet = System::Convert::ToDouble(textBox2->Text);

			fermerstvo->addFermer(new Fermer(name, budjet));

			fermerstvo->fermersToComboBox(comboBox3);
			fermerstvo->fermersToComboBox(comboBox4);

			MessageBox::Show("Нового фермера успішно додано.", ":)");
		}
		catch (...) {
			MessageBox::Show("Введено некоректні дані!", "Помилка!");
		}
	}
		   // -----------------------------додавання нової продукції-------------------------------------
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			string fermer = msclr::interop::marshal_as<std::string>(comboBox4->Text);
			string name = msclr::interop::marshal_as<std::string>(textBox6->Text);
			string vid = msclr::interop::marshal_as<std::string>(comboBox1->Text);
			if (vid == "М'ясо") vid = "Miaso";
			else if (vid == "Зерно") vid = "Zerno";
			else if (vid == "Овочі") vid = "Ovocshi";
			else if (vid == "Фрукти") vid = "Fructi";
			int kolichestvo = System::Convert::ToInt16(textBox4->Text);
			int cena = System::Convert::ToInt16(textBox7->Text);
			string edenici = msclr::interop::marshal_as<std::string>(textBox8->Text);

			Produkcija* elem = getProdukcijaObj(name, vid, cena, kolichestvo, edenici);
			if (!elem)
				throw ProdukcijaError("Такого виду продукції не існує");
			fermerstvo->findFermer(fermer)->addProdukcija(elem);

			MessageBox::Show("Продукцію успішно додано.", ":)");
		}
		catch (ProdukcijaError error) {
			MessageBox::Show(gcnew String(error.message()), "Помилка!");
		}
		catch (...) {
			MessageBox::Show("Введено некоректні дані!", "Помилка!");
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
		   // -----------------------------видалення-продукції-------------------------------------
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			string fermer = msclr::interop::marshal_as<std::string>(comboBox4->Text);
			string nazvanie = msclr::interop::marshal_as<std::string>(textBox6->Text);
			int kolichestvo = System::Convert::ToInt16(textBox4->Text);

			int result = fermerstvo->findFermer(fermer)->delProdukcija(nazvanie, kolichestvo);
			if (!result)
				throw ProdukcijaError("Такого виду продукції не існує");
			else if (result == -1)
				throw ProdukcijaError("Недостатньо кількості продукції на складі");

			MessageBox::Show("Продукцію успішно відпущено.", ":)");
		}
		catch (ProdukcijaError error) {
			MessageBox::Show(gcnew String(error.message()), "Помилка!");
		}
		catch (...) {
			MessageBox::Show("Введено некоректні дані!", "Помилка!");
		}
	}
	private: System::Void вихідToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		exit(0);
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
	}
		   //-----------------------------------------запис у файл------------------------------------------
	private: System::Void інструкціяToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			saveFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";

			saveFileDialog1->ShowDialog();
			string filename = msclr::interop::marshal_as<std::string>(saveFileDialog1->FileName);

			ofstream fout(filename, ios_base::out);
			if (!fout.is_open())
				throw FileError("Помилка відкриття файлу.");

			fout << "Fermers\n\n";
			for (FermerQueueIterator it(&fermerstvo->getFermerQueue()); !it.isEnd();)
			{
				fout << "Name: " << it.getIter()->getName() << "\n";
				fout << "Budjet: " << it.getIter()->getBudjet();

				it.next();
				fout << "\n";
				if (!it.isEnd())
					fout << "---";
				fout << "\n";
			}
			fout << "Production\n\n";
			for (FermerQueueIterator it(&fermerstvo->getFermerQueue()); !it.isEnd();)
			{
				bool flag = false;
				for (ProdukcijaQueueIterator it2(&it.getIter()->getProdukcijaQueue()); !it2.isEnd();)
				{
					flag = true;

					fout << "Fermer: " << it.getIter()->getName() << "\n";
					fout << "Nazva: " << it2.getIter()->getName() << "\n";
					fout << "Vid: " << it2.getIter()->getClassName() << "\n";
					fout << "Kolichestvo: " << it2.getIter()->getKolichestvo() << "\n";
					fout << "CenaZaEdenicu: " << it2.getIter()->getCenazaedenicu() << "\n";
					fout << "Odynyci: " << it2.getIter()->getEdenici();

					it2.next();
					fout << "\n";
					if (!it2.isEnd())
						fout << "---\n";
				}
				it.next();
				if (!it.isEnd() && flag)
					fout << "---";
				if (flag)
					fout << "\n";
			}

			fout << "Potrebi\n\n";
			for (FermerQueueIterator it(&fermerstvo->getFermerQueue()); !it.isEnd();)
			{
				bool flag = false;
				for (ProdukcijaQueueIterator it2(&it.getIter()->getProdukcijaQueue()); !it2.isEnd();)
				{
					for (PotrebaQueueIterator it3(&it2.getIter()->getPotrebiQueue()); !it3.isEnd();)
					{
						flag = true;
						fout << "Fermer: " << it.getIter()->getName() << "\n";
						fout << "Production: " << it2.getIter()->getName() << "\n";
						fout << "Type: " << it3.getIter()->getClassname() << "\n";
						fout << "Name: " << it3.getIter()->getName() << "\n";
						fout << "Kolichestvo: " << it3.getIter()->getKolichestvo() << "\n";
						fout << "Cena: " << it3.getIter()->getStoimost();

						it3.next();
						fout << "\n";
						if (!it3.isEnd())
							fout << "---";
					}
					it2.next();
					if (!it2.isEnd())
						fout << "---\n";
				}
				it.next();
				//if (!it.isEnd() && flag)
				//	fout << "---\n";
				//else if (flag)
				//	fout << "\n";
			}

			MessageBox::Show("Дані успішно збережено у файл.", ":)");
		}
		catch (FileError error) {
			MessageBox::Show(gcnew String(error.message()), "Помилка!");
		}
		catch (...) {
			MessageBox::Show("Помилка обробки файлу!", "Помилка!");
		}
	}
		   //------------------------------------зчитування з файла------------------------------------------------
	private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";

			openFileDialog1->ShowDialog();
			string filename = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);

			ifstream finp(filename, ios_base::in);
			if (!finp.is_open())
				throw FileError("Помилка відкриття файлу.");

			string what;
			finp >> what;

			if (what == "Fermers")
			{
				do {
					string name;
					int budjet;
					//читаємо з файла дані про  фермера
					finp >> what;
					finp >> what;
					name += what + " ";
					finp >> what;
					name += what + " ";
					finp >> what;
					name += what;
					finp >> what;
					finp >> budjet;

					fermerstvo->addFermer(new Fermer(name, budjet));

					finp >> what;
				} while (what == "---" && !finp.eof());
			}
			else
				throw FileError("Некоректні дані у файлі.");

			if (what == "Production")
			{
				do {//зчитуємо дані про продукцію 
					string fermer;
					string name;
					string vid;
					int kolichestvo;
					int cena;
					string edenici;

					finp >> what;
					finp >> what;
					fermer += what + " ";
					finp >> what;
					fermer += what + " ";
					finp >> what;
					fermer += what;
					finp >> what;
					finp >> name;
					finp >> what;
					finp >> vid;
					finp >> what;
					finp >> kolichestvo;
					finp >> what;
					finp >> cena;
					finp >> what;
					finp >> edenici;

					Produkcija* elem = getProdukcijaObj(name, vid, cena, kolichestvo, edenici);
					if (!elem)
						throw ProdukcijaError("Некоректні дані у файлі.");
					fermerstvo->findFermer(fermer)->addProdukcija(elem);

					finp >> what;
				} while (what == "---" && !finp.eof());
			}
			else
				throw FileError("Некоректні дані у файлі.");

			if (what == "Potrebi")
			{
				do {//зчитуємо дані про потреби
					string fermer;
					string producciia;
					string vid;
					string name;
					int kolichestvo;
					int cena;

					finp >> what;
					finp >> what;
					fermer += what + " ";
					finp >> what;
					fermer += what + " ";
					finp >> what;
					fermer += what;
					finp >> what;
					finp >> producciia;
					finp >> what;
					finp >> vid;
					finp >> what;
					finp >> name;
					finp >> what;
					finp >> kolichestvo;
					finp >> what;
					finp >> cena;

					Potreba* elem = getPotrebaObj(vid, name, kolichestvo, cena);
					if (!elem)
						throw PotrebaError("Некоректні дані у файлі.");
					fermerstvo->findFermer(fermer)->findProdukcija(producciia)->addPotreba(elem);

					finp >> what;
				} while (what == "---" && !finp.eof());
			}
			else
				throw FileError("Некоректні дані у файлі.");

			fermerstvo->fermersToComboBox(comboBox3);//добавляєть фермер у випадаючі списки
			fermerstvo->fermersToComboBox(comboBox4);

			MessageBox::Show("Дані з файлу успішно завантажено в програму.", ":)");
		}
		catch (FileError error) {
			MessageBox::Show(gcnew String(error.message()), "Помилка!");
		}
		catch (...) {
			MessageBox::Show("Помилка обробки файлу!", "Помилка!");
		}
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
		   //--------------------------------------------------видалення фермера--------------------------------------------------------------
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			string name = msclr::interop::marshal_as<std::string>(textBox1->Text);

			if (!fermerstvo->delFermer(name))
				throw FermerError("Такого фермера немає. Видалення неможливе!");

			fermerstvo->fermersToComboBox(comboBox3);
			fermerstvo->fermersToComboBox(comboBox4);

			MessageBox::Show("Вибраного фермера успішно видалено.", ":)");
		}
		catch (FermerError error) {
			MessageBox::Show(gcnew String(error.message()), "Помилка!");
		}
		catch (...) {
			MessageBox::Show("Введено некоректні дані!", "Помилка!");
		}
	}
		   //-------------------------------------------------------додавання потреби--------------------------------------------------------------
	private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			string fermer = msclr::interop::marshal_as<std::string>(comboBox3->Text);
			string producciia = msclr::interop::marshal_as<std::string>(comboBox5->Text);
			string vid = msclr::interop::marshal_as<std::string>(comboBox2->Text);
			if (vid == "Добрива") vid = "Udobrenija";
			else if (vid == "Засоби виробництва") vid = "SredstvaPriizvodstva";
			else if (vid == "Транспортні послуги") vid = "TransportnijeUslugi";
			string name = msclr::interop::marshal_as<std::string>(textBox15->Text);
			int kolichestvo = System::Convert::ToInt16(textBox9->Text);
			int cena = System::Convert::ToInt16(textBox13->Text);

			Potreba* elem = getPotrebaObj(vid, name, kolichestvo, cena);
			if (!elem)
				throw PotrebaError("Такого виду потреб не існує");
			fermerstvo->findFermer(fermer)->findProdukcija(producciia)->addPotreba(elem);

			MessageBox::Show("Потребу успішно додано.", ":)");
		}
		catch (PotrebaError error) {
			MessageBox::Show(gcnew String(error.message()), "Помилка!");
		}
		catch (...) {
			MessageBox::Show("Введено некоректні дані!", "Помилка!");
		}
	}
		   //-------------------------------------видалення потреби-----------------------------------------------------------
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			string fermer = msclr::interop::marshal_as<std::string>(comboBox3->Text);
			string producciia = msclr::interop::marshal_as<std::string>(comboBox5->Text);
			string name = msclr::interop::marshal_as<std::string>(textBox15->Text);

			if (!fermerstvo->findFermer(fermer)->findProdukcija(producciia)->delPotreba(name))
				throw PotrebaError("Такої потреби для вибраної продукції не існує.");

			MessageBox::Show("Потребу успішно видалено.", ":)");
		}
		catch (PotrebaError error) {
			MessageBox::Show(gcnew String(error.message()), "Помилка!");
		}
		catch (...) {
			MessageBox::Show("Введено некоректні дані!", "Помилка!");
		}
	}
		   //---------------------------------------------------довідка про програму-------------------------------------------------------
	private: System::Void переглядДовідкиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Програмний застосунок для керування фермерським господарством.", "Про програму");
	}

	private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		fermerstvo->findFermer(msclr::interop::marshal_as<std::string>(comboBox3->Text))->prodToComboBox(comboBox5);
	}
		   //-------------------------------------------------створенн таблиці:яку продукцію виготовляють фермера ------------------------------------------
	private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Columns->Clear();

		DataGridViewTextBoxColumn^ numser;
		numser = gcnew DataGridViewTextBoxColumn();
		numser->Name = "number";
		numser->HeaderText = "№";
		numser->Width = 30;
		dataGridView1->Columns->Add(numser);

		DataGridViewTextBoxColumn^ fermer;
		fermer = gcnew DataGridViewTextBoxColumn();
		fermer->Name = "fermer";
		fermer->HeaderText = "Фермер";
		fermer->Width = 175;
		dataGridView1->Columns->Add(fermer);

		DataGridViewTextBoxColumn^ prod;
		prod = gcnew DataGridViewTextBoxColumn();
		prod->Name = "prod";
		prod->HeaderText = "Продукція";
		prod->Width = 175;
		dataGridView1->Columns->Add(prod);

		int i = 0;
		for (FermerQueueIterator it(&fermerstvo->getFermerQueue()); !it.isEnd(); it.next())
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(it.getIter()->getName().c_str());
			ProdukcijaQueueIterator it2(&it.getIter()->getProdukcijaQueue());
			if (it2.isEnd())
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("(не виробляє нічого)");
			else for (; !it2.isEnd(); it2.next())
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(it2.getIter()->getName().c_str()) + " ";
			i++;
		}
	}
		   //-------------------------------------------------створенн таблиці: про потреби для фермерів------------------------------------------
	private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Columns->Clear();

		DataGridViewTextBoxColumn^ numser;
		numser = gcnew DataGridViewTextBoxColumn();
		numser->Name = "number";
		numser->HeaderText = "№";
		numser->Width = 30;
		dataGridView1->Columns->Add(numser);

		DataGridViewTextBoxColumn^ fermer;
		fermer = gcnew DataGridViewTextBoxColumn();
		fermer->Name = "fermer";
		fermer->HeaderText = "Фермер";
		fermer->Width = 175;
		dataGridView1->Columns->Add(fermer);

		DataGridViewTextBoxColumn^ potrebi;
		potrebi = gcnew DataGridViewTextBoxColumn();
		potrebi->Name = "potrebi";
		potrebi->HeaderText = "Потреби";
		potrebi->Width = 175;
		dataGridView1->Columns->Add(potrebi);

		int i = 0;
		for (FermerQueueIterator it(&fermerstvo->getFermerQueue()); !it.isEnd(); it.next())
		{
			bool flag = false;
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(it.getIter()->getName().c_str());

			for (ProdukcijaQueueIterator it2(&it.getIter()->getProdukcijaQueue()); !it2.isEnd(); it2.next())
				for (PotrebaQueueIterator it3(&it2.getIter()->getPotrebiQueue()); !it3.isEnd(); it3.next())
				{
					flag = true;
					dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(it3.getIter()->getName().c_str())
						+ ": " + System::Convert::ToString(it3.getIter()->getKolichestvo()) + " ";
				}
			if (!flag)
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("(нічого не потрібно)");
			i++;
		}
	}
		   //-------------------------------------------------створенн таблиці: який кредит потрібен кожному фурмеру------------------------------------------
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Columns->Clear();

		DataGridViewTextBoxColumn^ numser;
		numser = gcnew DataGridViewTextBoxColumn();
		numser->Name = "number";
		numser->HeaderText = "№";
		numser->Width = 30;
		dataGridView1->Columns->Add(numser);

		DataGridViewTextBoxColumn^ fermer;
		fermer = gcnew DataGridViewTextBoxColumn();
		fermer->Name = "fermer";
		fermer->HeaderText = "Фермер";
		fermer->Width = 175;
		dataGridView1->Columns->Add(fermer);

		DataGridViewTextBoxColumn^ kredit;
		kredit = gcnew DataGridViewTextBoxColumn();
		kredit->Name = "potrebi";
		kredit->HeaderText = "Необхідний кредит";
		kredit->Width = 175;
		dataGridView1->Columns->Add(kredit);

		int i = 0;
		for (FermerQueueIterator it(&fermerstvo->getFermerQueue()); !it.isEnd(); it.next())
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(it.getIter()->getName().c_str());

			int kredit = 0;
			for (ProdukcijaQueueIterator it2(&it.getIter()->getProdukcijaQueue()); !it2.isEnd(); it2.next())
				for (PotrebaQueueIterator it3(&it2.getIter()->getPotrebiQueue()); !it3.isEnd(); it3.next())
					kredit += it3.getIter()->getStoimost();

			if (!kredit)
				dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("(кредит не потрібен)");
			else
				dataGridView1->Rows[i]->Cells[2]->Value += "потрібен кредит "
				+ System::Convert::ToString(kredit) + " гривень";
			i++;
		}
	}
		   //-------------------------------------------------створенн таблиці: прибуток фермерів------------------------------------------
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Columns->Clear();

		DataGridViewTextBoxColumn^ numser;
		numser = gcnew DataGridViewTextBoxColumn();
		numser->Name = "number";
		numser->HeaderText = "№";
		numser->Width = 30;
		dataGridView1->Columns->Add(numser);

		DataGridViewTextBoxColumn^ prod;
		prod = gcnew DataGridViewTextBoxColumn();
		prod->Name = "prod";
		prod->HeaderText = "Продукція";
		prod->Width = 175;
		dataGridView1->Columns->Add(prod);

		DataGridViewTextBoxColumn^ kilkist;
		kilkist = gcnew DataGridViewTextBoxColumn();
		kilkist->Name = "kilkist";
		kilkist->HeaderText = "Загальний прибуток фермерів";
		kilkist->Width = 175;
		dataGridView1->Columns->Add(kilkist);

		int pribilMiaso = 0;
		int pribilZerno = 0;
		int pribilFructi = 0;
		int pribilOvocshi = 0;

		dataGridView1->Rows->Add();
		dataGridView1->Rows[0]->Cells[0]->Value = (1).ToString();
		dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("М'ясо");
		dataGridView1->Rows->Add();
		dataGridView1->Rows[1]->Cells[0]->Value = (2).ToString();
		dataGridView1->Rows[1]->Cells[1]->Value = gcnew String("Зерно");
		dataGridView1->Rows->Add();
		dataGridView1->Rows[2]->Cells[0]->Value = (3).ToString();
		dataGridView1->Rows[2]->Cells[1]->Value = gcnew String("Фрукти");
		dataGridView1->Rows->Add();
		dataGridView1->Rows[3]->Cells[0]->Value = (4).ToString();
		dataGridView1->Rows[3]->Cells[1]->Value = gcnew String("Овочі");

		for (FermerQueueIterator it(&fermerstvo->getFermerQueue()); !it.isEnd(); it.next())
			for (ProdukcijaQueueIterator it2(&it.getIter()->getProdukcijaQueue()); !it2.isEnd(); it2.next())
				if (it2.getIter()->getClassName() == "Miaso")
					pribilMiaso += it2.getIter()->getKolichestvo() * it2.getIter()->getCenazaedenicu();
				else if (it2.getIter()->getClassName() == "Zerno")
					pribilZerno += it2.getIter()->getKolichestvo() * it2.getIter()->getCenazaedenicu();
				else if (it2.getIter()->getClassName() == "Fructi")
					pribilFructi += it2.getIter()->getKolichestvo() * it2.getIter()->getCenazaedenicu();
				else if (it2.getIter()->getClassName() == "Ovocshi")
					pribilOvocshi += it2.getIter()->getKolichestvo() * it2.getIter()->getCenazaedenicu();

		dataGridView1->Rows[0]->Cells[2]->Value = pribilMiaso + " гривень";
		dataGridView1->Rows[1]->Cells[2]->Value = pribilZerno + " гривень";
		dataGridView1->Rows[2]->Cells[2]->Value = pribilFructi + " гривень";
		dataGridView1->Rows[3]->Cells[2]->Value = pribilOvocshi + " гривень";
	}
		   //-----------------------виведення таблиці: яку кількість заданої продукції виробляють------------------------------------
	private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			if (textBox12->Text == "")
				throw ProdukcijaError("Не вказано назву продукції.");

			dataGridView1->Columns->Clear();

			DataGridViewTextBoxColumn^ numser;
			numser = gcnew DataGridViewTextBoxColumn();
			numser->Name = "number";
			numser->HeaderText = "№";
			numser->Width = 30;
			dataGridView1->Columns->Add(numser);

			DataGridViewTextBoxColumn^ fermer;
			fermer = gcnew DataGridViewTextBoxColumn();
			fermer->Name = "fermer";
			fermer->HeaderText = "Фермер";
			fermer->Width = 175;
			dataGridView1->Columns->Add(fermer);

			DataGridViewTextBoxColumn^ kilkist;
			kilkist = gcnew DataGridViewTextBoxColumn();
			kilkist->Name = "kilkist";
			kilkist->HeaderText = "Кількість продукції " + textBox12->Text;
			kilkist->Width = 175;
			dataGridView1->Columns->Add(kilkist);

			int i = 0;
			for (FermerQueueIterator it(&fermerstvo->getFermerQueue()); !it.isEnd(); it.next())
			{
				dataGridView1->Rows->Add();
				dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
				dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(it.getIter()->getName().c_str());
				bool flag = false;
				for (ProdukcijaQueueIterator it2(&it.getIter()->getProdukcijaQueue()); !it2.isEnd(); it2.next())
					if (gcnew String(it2.getIter()->getName().c_str()) == textBox12->Text)
					{
						dataGridView1->Rows[i]->Cells[2]->Value += gcnew String(System::Convert::ToString(it2.getIter()->getKolichestvo()))
							+ " " + gcnew String(it2.getIter()->getEdenici().c_str());
						flag = true;
					}
				if (!flag)
					dataGridView1->Rows[i]->Cells[2]->Value += gcnew String("(не виробляє задану продукцію)");
				i++;
			}
		}
		catch (ProdukcijaError error) {
			MessageBox::Show(gcnew String(error.message()), "Помилка!");
		}
		catch (...) {
			MessageBox::Show("Введено некоректні дані!", "Помилка!");
		}
	}
		   //----------------------------------виведеннятаблиці: різниця між кредитом та отриманим прибутком----------------------------------
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		dataGridView1->Columns->Clear();

		DataGridViewTextBoxColumn^ numser;
		numser = gcnew DataGridViewTextBoxColumn();
		numser->Name = "number";
		numser->HeaderText = "№";
		numser->Width = 30;
		dataGridView1->Columns->Add(numser);

		DataGridViewTextBoxColumn^ fermer;
		fermer = gcnew DataGridViewTextBoxColumn();
		fermer->Name = "fermer";
		fermer->HeaderText = "Фермер";
		fermer->Width = 175;
		dataGridView1->Columns->Add(fermer);

		DataGridViewTextBoxColumn^ raznica;
		raznica = gcnew DataGridViewTextBoxColumn();
		raznica->Name = "raznica";
		raznica->HeaderText = "Різниця між кредитом та отриманим прибутком";
		raznica->Width = 175;
		dataGridView1->Columns->Add(raznica);

		int i = 0;
		for (FermerQueueIterator it(&fermerstvo->getFermerQueue()); !it.isEnd(); it.next())
		{
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = (i + 1).ToString();
			dataGridView1->Rows[i]->Cells[1]->Value = gcnew String(it.getIter()->getName().c_str());

			long pribil = 0;
			int kredit = 0;
			for (ProdukcijaQueueIterator it2(&it.getIter()->getProdukcijaQueue()); !it2.isEnd(); it2.next())
			{
				pribil += it2.getIter()->getKolichestvo() * it2.getIter()->getCenazaedenicu();
				for (PotrebaQueueIterator it3(&it2.getIter()->getPotrebiQueue()); !it3.isEnd(); it3.next())
					kredit += it3.getIter()->getStoimost();
			}

			if (pribil == 0 && kredit == 0)
				dataGridView1->Rows[i]->Cells[2]->Value += "фермер не виробляє ніякої продукції";
			else if ((pribil - kredit) == 0)
				dataGridView1->Rows[i]->Cells[2]->Value += "прибуток дорівнює суммі кредиту";
			else
			{
				if ((pribil - kredit) > 0)
					dataGridView1->Rows[i]->Cells[2]->Value += "+";
				dataGridView1->Rows[i]->Cells[2]->Value += (pribil - kredit) + " гривень";
			}
			i++;
		}
	}
		   //------------------------------------------очищення таблиці----------------------------------------------
	private: System::Void очиститиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		fermerstvo->clearFermers();
		comboBox3->Items->Clear();
		comboBox4->Items->Clear();
		comboBox5->Items->Clear();
		dataGridView1->Columns->Clear();
	}
	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}