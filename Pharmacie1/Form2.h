#pragma once
#include "Form3.h"
#include "Form4.h"
using namespace MySql::Data::MySqlClient;
namespace Pharmacie1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	public: 
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(896, 357);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ajouter";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(654, 357);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 31);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Supprimer";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(138, 76);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(845, 264);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form2::dataGridView1_CellContentClick);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(757, 364);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->Text = L"Formes";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::comboBox1_SelectedIndexChanged_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(234, 29);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(341, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(156, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Recherche";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(597, 28);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 21);
			this->comboBox2->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(788, 20);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Chercher";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(884, 21);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 35);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Mise a jours";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1022, 407);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form2";
			this->Text = L"Pharmacie";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion


	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		   if(comboBox1->SelectedItem->ToString()=="Paramédical")
			{
		    Form4^ for4=gcnew Form4();
			for4->ShowDialog();
		   
		   }
		else
			{
			Form3^ for3=gcnew Form3();
			for3->ShowDialog();
		
			}
		  


			 }
	public: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {





String^ constring = L"datasource=localhost;port=3306;username=root;password=008008826"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

MySqlCommand ^cmdDataBase = gcnew MySqlCommand("DELETE from pharmacie.medicament where Réference='"+this->dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString()+"' ;", conDataBase ); 
MySqlDataReader ^myReader; 
try{
conDataBase->Open(); 
myReader = cmdDataBase->ExecuteReader();  
}
catch (Exception^ ex)
{
MessageBox::Show(ex->Message);
} 


conDataBase->Close();
			 //MySql Connection 
				 //debut
String^ constring1 = L"datasource=localhost;port=3306;username=root;password=008008826"; 
MySqlConnection^ conDataBase1 = gcnew MySqlConnection( constring1 ); 
MySqlCommand ^cmdDataBase2 = gcnew MySqlCommand("select * from pharmacie.medicament ;", conDataBase1 ); 
//MySqlDataReader ^myReader; 
try{
MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
sda->SelectCommand =cmdDataBase2;
DataTable^ dbdataset=gcnew DataTable();
sda->Fill(dbdataset);
BindingSource^ bSource=gcnew BindingSource();
bSource->DataSource=dbdataset;
dataGridView1->DataSource=bSource;
sda->Update(dbdataset);
    
}

catch (Exception^ ex)
{
MessageBox::Show(ex->Message);
} 
				 //fin




			 }
private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
 
			 //MySql Connection 
				 //debut

String^ constring = L"datasource=localhost;port=3306;username=root;password=008008826"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

MySqlCommand ^cmdDataBase = gcnew MySqlCommand("select * from pharmacie.medicament ;", conDataBase ); 
//MySqlDataReader ^myReader; 
try{
MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
sda->SelectCommand =cmdDataBase;
DataTable^ dbdataset=gcnew DataTable();
sda->Fill(dbdataset);
BindingSource^ bSource=gcnew BindingSource();
bSource->DataSource=dbdataset;
dataGridView1->DataSource=bSource;
sda->Update(dbdataset);
    
}

catch (Exception^ ex)
{
MessageBox::Show(ex->Message);
} 
				 //fin
comboBox1->Items->Add("Comprimé");
comboBox1->Items->Add("Sirop");
comboBox1->Items->Add("Paramédical");
//--------------------------------------------
comboBox2->Items->Add("Forme");
comboBox2->Items->Add("Réference");
comboBox2->Items->Add("Nom");
comboBox2->Items->Add("Prix");
comboBox2->Items->Add("Quantité");
comboBox2->Items->Add("Date_de_péremption");

		 }
public: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
public: System::Void comboBox1_SelectedIndexChanged_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

String^ constring = L"datasource=localhost;port=3306;username=root;password=008008826"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

MySqlCommand ^cmdDataBase ;
		 if(comboBox2->SelectedItem->ToString()=="Forme" )
			cmdDataBase = gcnew MySqlCommand("select * from pharmacie.medicament where Forme='"+textBox1->Text+"';", conDataBase ); 
			else if(comboBox2->SelectedItem->ToString()=="Réference" )
				cmdDataBase = gcnew MySqlCommand("select * from pharmacie.medicament where Réference='"+textBox1->Text+"';", conDataBase ); 
			else if(comboBox2->SelectedItem->ToString()=="Prix" )
				cmdDataBase = gcnew MySqlCommand("select * from pharmacie.medicament where Prix_Unitaire='"+textBox1->Text+"';", conDataBase ); 
			else	if(comboBox2->SelectedItem->ToString()=="Nom" )		
				cmdDataBase = gcnew MySqlCommand("select * from pharmacie.medicament where Nom='"+textBox1->Text+"';", conDataBase ); 
			else if(comboBox2->SelectedItem->ToString()=="Quantité" )	
				cmdDataBase = gcnew MySqlCommand("select * from pharmacie.medicament where Quantité='"+textBox1->Text+"';", conDataBase ); 
			else if(comboBox2->SelectedItem->ToString()=="Date_de_péremption" )
				cmdDataBase = gcnew MySqlCommand("select * from pharmacie.medicament where Date_de_péremption='"+textBox1->Text+"';", conDataBase );

              else
				  MessageBox::Show("Choix Incorrect !");


//MySqlDataReader ^myReader; 
try{
MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
sda->SelectCommand =cmdDataBase;
DataTable^ dbdataset=gcnew DataTable();
sda->Fill(dbdataset);
BindingSource^ bSource=gcnew BindingSource();
bSource->DataSource=dbdataset;
dataGridView1->DataSource=bSource;
sda->Update(dbdataset);
    
}

catch (Exception^ ex)
{
MessageBox::Show(ex->Message);
} 

		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

			  //MySql Connection 
				 //debut

String^ constring = L"datasource=localhost;port=3306;username=root;password=008008826"; 
MySqlConnection^ conDataBase = gcnew MySqlConnection( constring ); 

MySqlCommand ^cmdDataBase = gcnew MySqlCommand("select * from pharmacie.medicament ;", conDataBase ); 
//MySqlDataReader ^myReader; 
try{
MySqlDataAdapter^ sda=gcnew MySqlDataAdapter();
sda->SelectCommand =cmdDataBase;
DataTable^ dbdataset=gcnew DataTable();
sda->Fill(dbdataset);
BindingSource^ bSource=gcnew BindingSource();
bSource->DataSource=dbdataset;
dataGridView1->DataSource=bSource;
sda->Update(dbdataset);
    
}

catch (Exception^ ex)
{
MessageBox::Show(ex->Message);
} 
				 //fin



		 }
};
}
