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
	/// Summary for UpdateServices
	/// </summary>
	public ref class UpdateServices : public System::Windows::Forms::Form
	{
	private: int selectedPackageID = -1;
	public:
		UpdateServices(void)
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
		~UpdateServices()
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
	private: System::Windows::Forms::ComboBox^ selectCombo;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ pnl;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ pnl_update;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lb_section;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ tb_description;
	private: System::Windows::Forms::TextBox^ tb_price;




	private: System::Windows::Forms::TextBox^ tb_pkname;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ tb_update;

	private: System::Windows::Forms::Button^ tb_clear;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UpdateServices::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnl_update = (gcnew System::Windows::Forms::Panel());
			this->tb_update = (gcnew System::Windows::Forms::Button());
			this->tb_clear = (gcnew System::Windows::Forms::Button());
			this->tb_description = (gcnew System::Windows::Forms::TextBox());
			this->tb_price = (gcnew System::Windows::Forms::TextBox());
			this->tb_pkname = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lb_section = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pnl = (gcnew System::Windows::Forms::Panel());
			this->selectCombo = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->pnl_update->SuspendLayout();
			this->pnl->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pnl_update);
			this->panel1->Controls->Add(this->pnl);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 561);
			this->panel1->TabIndex = 4;
			// 
			// pnl_update
			// 
			this->pnl_update->Controls->Add(this->tb_update);
			this->pnl_update->Controls->Add(this->tb_clear);
			this->pnl_update->Controls->Add(this->tb_description);
			this->pnl_update->Controls->Add(this->tb_price);
			this->pnl_update->Controls->Add(this->tb_pkname);
			this->pnl_update->Controls->Add(this->label5);
			this->pnl_update->Controls->Add(this->label4);
			this->pnl_update->Controls->Add(this->lb_section);
			this->pnl_update->Controls->Add(this->label3);
			this->pnl_update->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnl_update->Location = System::Drawing::Point(0, 174);
			this->pnl_update->Name = L"pnl_update";
			this->pnl_update->Size = System::Drawing::Size(464, 387);
			this->pnl_update->TabIndex = 0;
			this->pnl_update->Visible = false;
			// 
			// tb_update
			// 
			this->tb_update->BackColor = System::Drawing::Color::Orange;
			this->tb_update->Location = System::Drawing::Point(334, 233);
			this->tb_update->Name = L"tb_update";
			this->tb_update->Size = System::Drawing::Size(79, 29);
			this->tb_update->TabIndex = 8;
			this->tb_update->Text = L"Update";
			this->tb_update->UseVisualStyleBackColor = false;
			this->tb_update->Click += gcnew System::EventHandler(this, &UpdateServices::tb_update_Click);
			// 
			// tb_clear
			// 
			this->tb_clear->BackColor = System::Drawing::SystemColors::ScrollBar;
			this->tb_clear->Location = System::Drawing::Point(249, 233);
			this->tb_clear->Name = L"tb_clear";
			this->tb_clear->Size = System::Drawing::Size(79, 29);
			this->tb_clear->TabIndex = 7;
			this->tb_clear->Text = L"Clear";
			this->tb_clear->UseVisualStyleBackColor = false;
			this->tb_clear->Click += gcnew System::EventHandler(this, &UpdateServices::tb_clear_Click);
			// 
			// tb_description
			// 
			this->tb_description->Location = System::Drawing::Point(135, 88);
			this->tb_description->Multiline = true;
			this->tb_description->Name = L"tb_description";
			this->tb_description->Size = System::Drawing::Size(278, 84);
			this->tb_description->TabIndex = 6;
			// 
			// tb_price
			// 
			this->tb_price->Location = System::Drawing::Point(135, 189);
			this->tb_price->Name = L"tb_price";
			this->tb_price->Size = System::Drawing::Size(278, 20);
			this->tb_price->TabIndex = 6;
			// 
			// tb_pkname
			// 
			this->tb_pkname->Location = System::Drawing::Point(135, 55);
			this->tb_pkname->Name = L"tb_pkname";
			this->tb_pkname->Size = System::Drawing::Size(278, 20);
			this->tb_pkname->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(29, 190);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 32);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Price :";
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 88);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 32);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Description : ";
			// 
			// lb_section
			// 
			this->lb_section->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb_section->Location = System::Drawing::Point(29, 7);
			this->lb_section->Name = L"lb_section";
			this->lb_section->Size = System::Drawing::Size(121, 32);
			this->lb_section->TabIndex = 5;
			this->lb_section->Text = L"Update Package ";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(29, 56);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Package Name :";
			// 
			// pnl
			// 
			this->pnl->Controls->Add(this->selectCombo);
			this->pnl->Controls->Add(this->label2);
			this->pnl->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnl->Location = System::Drawing::Point(0, 96);
			this->pnl->Name = L"pnl";
			this->pnl->Size = System::Drawing::Size(464, 78);
			this->pnl->TabIndex = 0;
			// 
			// selectCombo
			// 
			this->selectCombo->FormattingEnabled = true;
			this->selectCombo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Add Service ", L"Update Service ", L"Delete Service" });
			this->selectCombo->Location = System::Drawing::Point(94, 26);
			this->selectCombo->Name = L"selectCombo";
			this->selectCombo->Size = System::Drawing::Size(319, 21);
			this->selectCombo->TabIndex = 6;
			this->selectCombo->SelectedIndexChanged += gcnew System::EventHandler(this, &UpdateServices::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(29, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 32);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Select :";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(464, 96);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(420, 465);
			this->panel3->TabIndex = 7;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(19, 63);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(389, 277);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateServices::dataGridView1_CellClick);
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(15, 39);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 19);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Current packages";
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
			// UpdateServices
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"UpdateServices";
			this->Text = L"ManageServices ";
			this->Load += gcnew System::EventHandler(this, &UpdateServices::UpdateServices_Load);
			this->panel1->ResumeLayout(false);
			this->pnl_update->ResumeLayout(false);
			this->pnl_update->PerformLayout();
			this->pnl->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		String^ selected = selectCombo->SelectedItem->ToString();

		if (selected == "Add Service ") {
			tb_pkname->Enabled = true;
			tb_description->Enabled = true;
			tb_price->Enabled = true;

			pnl_update->Visible = false;
			pnl_update->Visible = true;
			tb_pkname->Text = "";
			tb_price->Text = "";
			tb_description->Text = "";
			lb_section->Text = "Add Service";

			tb_update->Text = "Add";
			tb_update->BackColor = System::Drawing::Color::LimeGreen;
			tb_update->ForeColor = System::Drawing::Color::White;
		}
		else if (selected == "Update Service ") {
			tb_pkname->Enabled = true;
			tb_description->Enabled = true;
			tb_price->Enabled = true;

			pnl_update->Visible = true;
			tb_update->Text = "Update";
			lb_section->Text = "Update Service";
			tb_pkname->Text = "";
			tb_price->Text = "";
			tb_description->Text = "";
			tb_update->BackColor = System::Drawing::Color::Orange;
			tb_update->ForeColor = System::Drawing::Color::Black;

		}
		else if (selected == "Delete Service") {
			pnl_update->Visible = true;
			lb_section->Text = "Delete Service";
			tb_update->Text = "Delete";
			tb_update->BackColor = System::Drawing::Color::IndianRed;
			tb_update->ForeColor = System::Drawing::Color::White;

			tb_pkname->Enabled = false;
			tb_description->Enabled = false;
			tb_price->Enabled = false;
		}

	}

private: System::Void tb_update_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ name = tb_pkname->Text;
	String^ description = tb_description->Text;
	double price = Convert::ToDouble(tb_price->Text);

	if (tb_update->Text == "Add") {
		DatabaseManager::AddServicePackage(name, description, price);
		MessageBox::Show("Package added successfully");
	}
	else if (tb_update->Text == "Update") {
		if (selectedPackageID != -1) { 
			DatabaseManager::UpdateServicePackage(selectedPackageID, name, description, price);
			MessageBox::Show("Package updated successfully");
		}
		else {
			MessageBox::Show("Please select a package from the list to update.");
		}
	}
	else if (tb_update->Text == "Delete") {
		if (selectedPackageID != -1) {
			DatabaseManager::DeleteServicePackage(selectedPackageID);
			MessageBox::Show("Package deleted successfully");
		}
		else {
			MessageBox::Show("Please select a package to delete.");
		}
	}
	dataGridView1->DataSource = DatabaseManager::GetAllServicePackages();
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
		selectedPackageID = Convert::ToInt32(row->Cells["PackageID"]->Value);
		tb_pkname->Text = row->Cells["PackageName"]->Value->ToString();
		tb_description->Text = row->Cells["Description"]->Value->ToString();
		tb_price->Text = row->Cells["Price"]->Value->ToString();
	}
}
private: System::Void tb_clear_Click(System::Object^ sender, System::EventArgs^ e) {
	tb_pkname->Text = "";
	tb_price->Text = "";
	tb_description->Text = "";
}
private: System::Void UpdateServices_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = DatabaseManager::GetAllServicePackages();
}
};
}
