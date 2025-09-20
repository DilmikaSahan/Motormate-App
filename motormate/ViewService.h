#pragma once
#include "DatabaseManager.h"
namespace Motormate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ViewService
	/// </summary>
	public ref class ViewService : public System::Windows::Forms::Form
	{
	public:
		ViewService(void)
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
		~ViewService()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ tb_decrption;
	private: System::Windows::Forms::TextBox^ tb_price;
	private: System::Windows::Forms::TextBox^ tb_pName;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewService::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb_decrption = (gcnew System::Windows::Forms::TextBox());
			this->tb_price = (gcnew System::Windows::Forms::TextBox());
			this->tb_pName = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->tb_decrption);
			this->panel1->Controls->Add(this->tb_price);
			this->panel1->Controls->Add(this->tb_pName);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 561);
			this->panel1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(234, 19);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Current Available  packages";
			// 
			// tb_decrption
			// 
			this->tb_decrption->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_decrption->Location = System::Drawing::Point(518, 384);
			this->tb_decrption->Multiline = true;
			this->tb_decrption->Name = L"tb_decrption";
			this->tb_decrption->Size = System::Drawing::Size(334, 63);
			this->tb_decrption->TabIndex = 11;
			// 
			// tb_price
			// 
			this->tb_price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_price->Location = System::Drawing::Point(163, 437);
			this->tb_price->Name = L"tb_price";
			this->tb_price->Size = System::Drawing::Size(219, 26);
			this->tb_price->TabIndex = 12;
			// 
			// tb_pName
			// 
			this->tb_pName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_pName->Location = System::Drawing::Point(163, 382);
			this->tb_pName->Name = L"tb_pName";
			this->tb_pName->Size = System::Drawing::Size(219, 26);
			this->tb_pName->TabIndex = 13;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(31, 434);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 23);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Price :";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(405, 382);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 23);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Description :";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(31, 379);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 23);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Service Package :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(32, 160);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(820, 198);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ViewService::dataGridView1_CellContentClick);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(884, 96);
			this->panel2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Symbol", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(240, 20, 20, 20);
			this->label1->Size = System::Drawing::Size(884, 96);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Motormate e-service center";
			// 
			// ViewService
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"ViewService";
			this->Text = L"ViewService";
			this->Load += gcnew System::EventHandler(this, &ViewService::ViewService_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void LoadServices() {
		SqlConnection^ conn = DatabaseManager::GetConnection();
		try {
			conn->Open();
			String^ query = "SELECT PackageID, PackageName, Description, Price FROM ServicePackages";
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, conn);
			DataTable^ table = gcnew DataTable();
			adapter->Fill(table);
			dataGridView1->DataSource = table;
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			conn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Error loading services: " + ex->Message);
			conn->Close();
		}
	}
	private: System::Void ViewService_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadServices();
		tb_pName->Enabled = false;
		tb_decrption->Enabled = false;
		tb_price->Enabled = false;
	}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
		tb_pName->Text = row->Cells["PackageName"]->Value->ToString();
		tb_decrption->Text = row->Cells["Description"]->Value->ToString();
		tb_price->Text = row->Cells["Price"]->Value->ToString();
	
}
}
};
}
