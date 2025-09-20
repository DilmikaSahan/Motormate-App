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
	/// Summary for adminViewBooking
	/// </summary>
	public ref class adminViewBooking : public System::Windows::Forms::Form
	{
	public:
		adminViewBooking(void)
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
		~adminViewBooking()
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
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ tb_time;

	private: System::Windows::Forms::TextBox^ tb_date;

	private: System::Windows::Forms::TextBox^ tb_vehical_type;

	private: System::Windows::Forms::TextBox^ tb_service;
	private: System::Windows::Forms::TextBox^ tb_vehicalReg;


	private: System::Windows::Forms::TextBox^ tb_packageID;
	private: System::Windows::Forms::TextBox^ tb_fullName;


	private: System::Windows::Forms::TextBox^ tb_userID;

	private: System::Windows::Forms::TextBox^ tb_bookID;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lbfullName;

	private: System::Windows::Forms::Label^ lbuserID;




	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ tb_note;

	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(adminViewBooking::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tb_note = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tb_time = (gcnew System::Windows::Forms::TextBox());
			this->tb_date = (gcnew System::Windows::Forms::TextBox());
			this->tb_vehical_type = (gcnew System::Windows::Forms::TextBox());
			this->tb_service = (gcnew System::Windows::Forms::TextBox());
			this->tb_vehicalReg = (gcnew System::Windows::Forms::TextBox());
			this->tb_packageID = (gcnew System::Windows::Forms::TextBox());
			this->tb_fullName = (gcnew System::Windows::Forms::TextBox());
			this->tb_userID = (gcnew System::Windows::Forms::TextBox());
			this->tb_bookID = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lbfullName = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbuserID = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->groupBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->tb_time);
			this->panel1->Controls->Add(this->tb_date);
			this->panel1->Controls->Add(this->tb_vehical_type);
			this->panel1->Controls->Add(this->tb_service);
			this->panel1->Controls->Add(this->tb_vehicalReg);
			this->panel1->Controls->Add(this->tb_packageID);
			this->panel1->Controls->Add(this->tb_fullName);
			this->panel1->Controls->Add(this->tb_userID);
			this->panel1->Controls->Add(this->tb_bookID);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->lbfullName);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->lbuserID);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 561);
			this->panel1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::SkyBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(725, 438);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 37);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Confirm";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &adminViewBooking::button1_Click_1);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->tb_note);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Location = System::Drawing::Point(0, 478);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(881, 83);
			this->groupBox1->TabIndex = 11;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"confirming";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(539, 26);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(129, 37);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Complete";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &adminViewBooking::button1_Click);
			// 
			// tb_note
			// 
			this->tb_note->Location = System::Drawing::Point(78, 22);
			this->tb_note->Multiline = true;
			this->tb_note->Name = L"tb_note";
			this->tb_note->Size = System::Drawing::Size(364, 41);
			this->tb_note->TabIndex = 10;
			this->tb_note->TextChanged += gcnew System::EventHandler(this, &adminViewBooking::tb_note_TextChanged);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(15, 22);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(57, 23);
			this->label12->TabIndex = 9;
			this->label12->Text = L"Note :";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::IndianRed;
			this->button2->Location = System::Drawing::Point(539, 438);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 37);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &adminViewBooking::button2_Click);
			// 
			// tb_time
			// 
			this->tb_time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_time->Location = System::Drawing::Point(501, 347);
			this->tb_time->Name = L"tb_time";
			this->tb_time->Size = System::Drawing::Size(339, 22);
			this->tb_time->TabIndex = 10;
			// 
			// tb_date
			// 
			this->tb_date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_date->Location = System::Drawing::Point(501, 321);
			this->tb_date->Name = L"tb_date";
			this->tb_date->Size = System::Drawing::Size(339, 22);
			this->tb_date->TabIndex = 10;
			// 
			// tb_vehical_type
			// 
			this->tb_vehical_type->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_vehical_type->Location = System::Drawing::Point(177, 430);
			this->tb_vehical_type->Name = L"tb_vehical_type";
			this->tb_vehical_type->Size = System::Drawing::Size(194, 22);
			this->tb_vehical_type->TabIndex = 10;
			// 
			// tb_service
			// 
			this->tb_service->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_service->Location = System::Drawing::Point(177, 373);
			this->tb_service->Name = L"tb_service";
			this->tb_service->Size = System::Drawing::Size(194, 22);
			this->tb_service->TabIndex = 10;
			// 
			// tb_vehicalReg
			// 
			this->tb_vehicalReg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_vehicalReg->Location = System::Drawing::Point(177, 404);
			this->tb_vehicalReg->Name = L"tb_vehicalReg";
			this->tb_vehicalReg->Size = System::Drawing::Size(194, 22);
			this->tb_vehicalReg->TabIndex = 10;
			// 
			// tb_packageID
			// 
			this->tb_packageID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_packageID->Location = System::Drawing::Point(177, 347);
			this->tb_packageID->Name = L"tb_packageID";
			this->tb_packageID->Size = System::Drawing::Size(194, 22);
			this->tb_packageID->TabIndex = 10;
			// 
			// tb_fullName
			// 
			this->tb_fullName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_fullName->Location = System::Drawing::Point(501, 399);
			this->tb_fullName->Name = L"tb_fullName";
			this->tb_fullName->Size = System::Drawing::Size(339, 22);
			this->tb_fullName->TabIndex = 10;
			// 
			// tb_userID
			// 
			this->tb_userID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_userID->Location = System::Drawing::Point(501, 373);
			this->tb_userID->Name = L"tb_userID";
			this->tb_userID->Size = System::Drawing::Size(339, 22);
			this->tb_userID->TabIndex = 10;
			// 
			// tb_bookID
			// 
			this->tb_bookID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_bookID->Location = System::Drawing::Point(177, 321);
			this->tb_bookID->Name = L"tb_bookID";
			this->tb_bookID->Size = System::Drawing::Size(194, 22);
			this->tb_bookID->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(385, 347);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 23);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Time :";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(385, 321);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(62, 23);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Date :";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(37, 430);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 23);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Vehical Type :";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(37, 401);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(129, 23);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Vehical Reg No :";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Light", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::IndianRed;
			this->label13->Location = System::Drawing::Point(242, 452);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(256, 23);
			this->label13->TabIndex = 9;
			this->label13->Text = L"If need cancel this booking click this button";
			this->label13->Click += gcnew System::EventHandler(this, &adminViewBooking::label13_Click);
			// 
			// lbfullName
			// 
			this->lbfullName->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbfullName->Location = System::Drawing::Point(384, 399);
			this->lbfullName->Name = L"lbfullName";
			this->lbfullName->Size = System::Drawing::Size(94, 23);
			this->lbfullName->TabIndex = 9;
			this->lbfullName->Text = L"Full Name :";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(37, 373);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 23);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Service : ";
			this->label5->Click += gcnew System::EventHandler(this, &adminViewBooking::label5_Click);
			// 
			// lbuserID
			// 
			this->lbuserID->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbuserID->Location = System::Drawing::Point(384, 373);
			this->lbuserID->Name = L"lbuserID";
			this->lbuserID->Size = System::Drawing::Size(94, 23);
			this->lbuserID->TabIndex = 9;
			this->lbuserID->Text = L"UserID :";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(37, 347);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(112, 23);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Packeage ID :";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Booking ID :";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(38, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 23);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Bookings";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(42, 144);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(798, 151);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &adminViewBooking::dataGridView1_CellContentClick);
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
			// adminViewBooking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"adminViewBooking";
			this->Text = L"adminViewBooking";
			this->Load += gcnew System::EventHandler(this, &adminViewBooking::adminViewBooking_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void adminViewBooking_Load(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ conn = DatabaseManager::GetConnection();
	try {
		conn->Open();
		String^ query = "SELECT b.BookingID, b.UserID, u.FullName, b.VehicleNumber, b.VehicleType, " +
			"b.BookingDate, b.TimeSlot, b.PackageID, s.PackageName, s.Description, s.Price, b.Status " +
			"FROM Bookings b " +
			"JOIN Users u ON b.UserID = u.UserID " +
			"JOIN ServicePackages s ON b.PackageID = s.PackageID " +
			"WHERE b.Status IN ('Pending','Confirmed')";

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, conn);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		dataGridView1->DataSource = dt;

		conn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error loading bookings: " + ex->Message);
		conn->Close();
	}
	tb_bookID->Enabled = false;
	tb_packageID->Enabled = false;
	tb_service->Enabled = false;
	tb_vehicalReg->Enabled = false;
	tb_vehical_type->Enabled = false;
	tb_date->Enabled = false;
	tb_time->Enabled = false;
	tb_userID->Enabled = false;
	tb_fullName->Enabled = false;
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {
		DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];

		tb_bookID->Text = row->Cells["BookingID"]->Value->ToString();
		tb_packageID->Text = row->Cells["PackageID"]->Value->ToString();
		tb_service->Text = row->Cells["PackageName"]->Value->ToString();
		tb_vehicalReg->Text = row->Cells["VehicleNumber"]->Value->ToString();
		tb_vehical_type->Text = row->Cells["VehicleType"]->Value->ToString();
		tb_date->Text = Convert::ToDateTime(row->Cells["BookingDate"]->Value).ToShortDateString();
		tb_time->Text = row->Cells["TimeSlot"]->Value->ToString();
		tb_userID->Text = row->Cells["UserID"]->Value->ToString();
		tb_fullName->Text = row->Cells["FullName"]->Value->ToString();
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(tb_bookID->Text)) {
		MessageBox::Show("Please select a booking to cancel.");
		return;
	}

	int bookingID = Convert::ToInt32(tb_bookID->Text);
	String^ note = tb_note->Text;
	String^ status = "Canceled";
	DateTime serviceDate = DateTime::Now;

	SqlConnection^ conn = DatabaseManager::GetConnection();
	try {
		conn->Open();
		// 1. Update booking status

		String^ updateQuery = "UPDATE Bookings SET Status = @status WHERE BookingID = @id";
		SqlCommand^ updateCmd = gcnew SqlCommand(updateQuery, conn);
		updateCmd->Parameters->AddWithValue("@status", status);
		updateCmd->Parameters->AddWithValue("@id", bookingID);
		updateCmd->ExecuteNonQuery();

		// 1. Insert into ServiceHistory first
		String^ insertQuery = "INSERT INTO ServiceHistory (BookingID, ServiceDate, Notes, Status) " +
			"VALUES (@bookingID, @date, @note, @status)";
		SqlCommand^ insertCmd = gcnew SqlCommand(insertQuery, conn);
		insertCmd->Parameters->AddWithValue("@bookingID", bookingID);
		insertCmd->Parameters->AddWithValue("@date", serviceDate);
		insertCmd->Parameters->AddWithValue("@note", note);
		insertCmd->Parameters->AddWithValue("@status", status);
		insertCmd->ExecuteNonQuery();


		conn->Close();

		MessageBox::Show("Booking canceled and recorded in history.");
		if (dataGridView1->SelectedRows->Count > 0) {
			dataGridView1->Rows->RemoveAt(dataGridView1->SelectedRows[0]->Index);
		}
		adminViewBooking_Load(nullptr, nullptr); // Refresh booking list
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
		conn->Close();
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(tb_bookID->Text)) {
		MessageBox::Show("Please select a booking to confirm.");
		return;
	}

	int bookingID = Convert::ToInt32(tb_bookID->Text);
	String^ note = tb_note->Text;
	String^ status = "Completed";
	DateTime serviceDate = DateTime::Now;

	SqlConnection^ conn = DatabaseManager::GetConnection();
	try {
		conn->Open();

		// 1. Update booking status
		String^ updateQuery = "UPDATE Bookings SET Status = @status WHERE BookingID = @id";
		SqlCommand^ updateCmd = gcnew SqlCommand(updateQuery, conn);
		updateCmd->Parameters->AddWithValue("@status", status);
		updateCmd->Parameters->AddWithValue("@id", bookingID);
		updateCmd->ExecuteNonQuery();

		// 2. Insert into ServiceHistory
		String^ insertQuery = "INSERT INTO ServiceHistory (BookingID, ServiceDate, Notes, Status) " +
			"VALUES (@bookingID, @date, @note, @status)";
		SqlCommand^ insertCmd = gcnew SqlCommand(insertQuery, conn);
		insertCmd->Parameters->AddWithValue("@bookingID", bookingID);
		insertCmd->Parameters->AddWithValue("@date", serviceDate);
		insertCmd->Parameters->AddWithValue("@note", note);
		insertCmd->Parameters->AddWithValue("@status", status);
		insertCmd->ExecuteNonQuery();

		conn->Close();

		MessageBox::Show("Booking confirmed and service history updated.");
		adminViewBooking_Load(nullptr, nullptr); // Refresh the form
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error: " + ex->Message);
		conn->Close();
	}

}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrWhiteSpace(tb_bookID->Text)) {
		MessageBox::Show("Please select a booking to confirm.");
		return;
	}

	int bookingID = Convert::ToInt32(tb_bookID->Text);
	String^ note = tb_note->Text;

	SqlConnection^ conn = DatabaseManager::GetConnection();
	try {
		conn->Open();
		String^ query = "UPDATE Bookings SET Status = 'Confirmed', Note = @note WHERE BookingID = @id";
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@note", note);
		cmd->Parameters->AddWithValue("@id", bookingID);
		cmd->ExecuteNonQuery();
		conn->Close();

		MessageBox::Show("Booking confirmed successfully.");
		adminViewBooking_Load(nullptr, nullptr); // Refresh data
	}
	catch (Exception^ ex) {
		MessageBox::Show("Error confirming booking: " + ex->Message);
		conn->Close();
	}
}
private: System::Void tb_note_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
