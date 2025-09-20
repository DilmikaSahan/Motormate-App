#pragma once
#include "DatabaseManager.h"
#include "MyBookings.h"

namespace Motormate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System;
	using namespace System::Collections::Generic;  // For List<>


	/// <summary>
	/// Summary for Booking
	/// </summary>
	public ref class Booking : public System::Windows::Forms::Form
	{
	public:
		Booking(void)
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
		~Booking()
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cbox_time;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ tb_vehicalType;
	private: System::Windows::Forms::TextBox^ tb_vehical_no;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tb_decrption;

	private: System::Windows::Forms::TextBox^ tb_pName;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ tb_reset;

	private: System::Windows::Forms::Button^ tb_confirm;

	private: System::Windows::Forms::TextBox^ tb_total;

	private: System::Windows::Forms::TextBox^ tb_price;
	private: System::Windows::Forms::Button^ bt_myBookings;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Booking::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tb_reset = (gcnew System::Windows::Forms::Button());
			this->tb_confirm = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->tb_vehicalType = (gcnew System::Windows::Forms::TextBox());
			this->tb_decrption = (gcnew System::Windows::Forms::TextBox());
			this->tb_total = (gcnew System::Windows::Forms::TextBox());
			this->tb_price = (gcnew System::Windows::Forms::TextBox());
			this->tb_pName = (gcnew System::Windows::Forms::TextBox());
			this->tb_vehical_no = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cbox_time = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bt_myBookings = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->bt_myBookings);
			this->panel1->Controls->Add(this->tb_reset);
			this->panel1->Controls->Add(this->tb_confirm);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->tb_vehicalType);
			this->panel1->Controls->Add(this->tb_decrption);
			this->panel1->Controls->Add(this->tb_total);
			this->panel1->Controls->Add(this->tb_price);
			this->panel1->Controls->Add(this->tb_pName);
			this->panel1->Controls->Add(this->tb_vehical_no);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->cbox_time);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 561);
			this->panel1->TabIndex = 2;
			// 
			// tb_reset
			// 
			this->tb_reset->BackColor = System::Drawing::Color::IndianRed;
			this->tb_reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_reset->Location = System::Drawing::Point(640, 491);
			this->tb_reset->Name = L"tb_reset";
			this->tb_reset->Size = System::Drawing::Size(78, 46);
			this->tb_reset->TabIndex = 10;
			this->tb_reset->Text = L"reset";
			this->tb_reset->UseVisualStyleBackColor = false;
			this->tb_reset->Click += gcnew System::EventHandler(this, &Booking::tb_reset_Click);
			// 
			// tb_confirm
			// 
			this->tb_confirm->BackColor = System::Drawing::Color::CornflowerBlue;
			this->tb_confirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_confirm->Location = System::Drawing::Point(738, 491);
			this->tb_confirm->Name = L"tb_confirm";
			this->tb_confirm->Size = System::Drawing::Size(124, 46);
			this->tb_confirm->TabIndex = 10;
			this->tb_confirm->Text = L"confirm";
			this->tb_confirm->UseVisualStyleBackColor = false;
			this->tb_confirm->Click += gcnew System::EventHandler(this, &Booking::tb_confirm_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(167, 389);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(267, 20);
			this->dateTimePicker1->TabIndex = 8;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Booking::dateTimePicker1_ValueChanged);
			// 
			// tb_vehicalType
			// 
			this->tb_vehicalType->Location = System::Drawing::Point(167, 358);
			this->tb_vehicalType->Name = L"tb_vehicalType";
			this->tb_vehicalType->Size = System::Drawing::Size(267, 20);
			this->tb_vehicalType->TabIndex = 7;
			// 
			// tb_decrption
			// 
			this->tb_decrption->Location = System::Drawing::Point(595, 352);
			this->tb_decrption->Multiline = true;
			this->tb_decrption->Name = L"tb_decrption";
			this->tb_decrption->Size = System::Drawing::Size(267, 63);
			this->tb_decrption->TabIndex = 7;
			// 
			// tb_total
			// 
			this->tb_total->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tb_total->ForeColor = System::Drawing::Color::LimeGreen;
			this->tb_total->Location = System::Drawing::Point(595, 447);
			this->tb_total->Name = L"tb_total";
			this->tb_total->Size = System::Drawing::Size(267, 31);
			this->tb_total->TabIndex = 7;
			// 
			// tb_price
			// 
			this->tb_price->Location = System::Drawing::Point(595, 421);
			this->tb_price->Name = L"tb_price";
			this->tb_price->Size = System::Drawing::Size(267, 20);
			this->tb_price->TabIndex = 7;
			// 
			// tb_pName
			// 
			this->tb_pName->Location = System::Drawing::Point(595, 325);
			this->tb_pName->Name = L"tb_pName";
			this->tb_pName->Size = System::Drawing::Size(267, 20);
			this->tb_pName->TabIndex = 7;
			// 
			// tb_vehical_no
			// 
			this->tb_vehical_no->Location = System::Drawing::Point(167, 322);
			this->tb_vehical_no->Name = L"tb_vehical_no";
			this->tb_vehical_no->Size = System::Drawing::Size(267, 20);
			this->tb_vehical_no->TabIndex = 7;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::LimeGreen;
			this->label10->Location = System::Drawing::Point(471, 453);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(87, 23);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Total :";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(23, 421);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 23);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Time Slot :";
			// 
			// cbox_time
			// 
			this->cbox_time->FormattingEnabled = true;
			this->cbox_time->Location = System::Drawing::Point(167, 421);
			this->cbox_time->Name = L"cbox_time";
			this->cbox_time->Size = System::Drawing::Size(267, 21);
			this->cbox_time->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(471, 421);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 23);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Price :";
			this->label9->Click += gcnew System::EventHandler(this, &Booking::label5_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(23, 389);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Date :";
			this->label5->Click += gcnew System::EventHandler(this, &Booking::label5_Click);
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(471, 352);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(138, 23);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Description :";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(471, 322);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(138, 23);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Service Package :";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(23, 355);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(138, 23);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Vehical Type :";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 319);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Vehical Reg. No :";
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(269, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Select Service From Here :";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(27, 140);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(826, 151);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Booking::dataGridView1_CellClick);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(884, 94);
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
			this->label1->Size = System::Drawing::Size(884, 94);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Motormate e-service center";
			// 
			// bt_myBookings
			// 
			this->bt_myBookings->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DeepSkyBlue;
			this->bt_myBookings->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bt_myBookings->Location = System::Drawing::Point(716, 103);
			this->bt_myBookings->Name = L"bt_myBookings";
			this->bt_myBookings->Size = System::Drawing::Size(137, 23);
			this->bt_myBookings->TabIndex = 11;
			this->bt_myBookings->Text = L"View My Bookings";
			this->bt_myBookings->UseVisualStyleBackColor = true;
			this->bt_myBookings->Click += gcnew System::EventHandler(this, &Booking::bt_myBookings_Click);
			// 
			// Booking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 561);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(900, 600);
			this->MinimumSize = System::Drawing::Size(900, 600);
			this->Name = L"Booking";
			this->Text = L"Booking";
			this->Load += gcnew System::EventHandler(this, &Booking::Booking_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Booking_Load(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->DataSource = DatabaseManager::GetAllServicePackages();
	dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
	tb_pName->Enabled = false;
	tb_decrption->Enabled = false;
	tb_price->Enabled = false;
	tb_total->Enabled = false;

	// Set minimum selectable date to today
	dateTimePicker1->MinDate = DateTime::Today;


}
private: int selectedPackageID = -1;
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0) {

		DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];

		selectedPackageID = Convert::ToInt32(row->Cells["PackageID"]->Value);
		tb_pName->Text = row->Cells["PackageName"]->Value->ToString();
		tb_decrption->Text = row->Cells["Description"]->Value->ToString();
		tb_price->Text = row->Cells["Price"]->Value->ToString();
		tb_total->Text = row->Cells["Price"]->Value->ToString();
	}
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	cbox_time->Items->Clear();

	array<String^>^ allSlots = gcnew array<String^> {
		"09:00 AM - 10:00 AM",
			"11:00 AM - 12:00 PM",
			"01:00 PM - 02:00 PM",
			"03:00 PM - 04:00 PM"
	};

	DateTime selectedDate = dateTimePicker1->Value.Date;

	SqlConnection^ conn = DatabaseManager::GetConnection();
	try {
		conn->Open();
		String^ query = "SELECT TimeSlot FROM Bookings WHERE BookingDate = @date AND Status != 'Cancelled'";
		SqlCommand^ cmd = gcnew SqlCommand(query, conn);
		cmd->Parameters->AddWithValue("@date", selectedDate);

		SqlDataReader^ reader = cmd->ExecuteReader();
		List<String^>^ bookedSlots = gcnew List<String^>();

		while (reader->Read()) {
			bookedSlots->Add(reader["TimeSlot"]->ToString());
		}

		reader->Close();
		conn->Close();

		for each (String ^ slot in allSlots) {
			if (!bookedSlots->Contains(slot)) {
				cbox_time->Items->Add(slot);
			}
		}

		if (cbox_time->Items->Count > 0)
			cbox_time->SelectedIndex = 0;
		else
			MessageBox::Show("All time slots are booked for this date.");

	}
	catch (Exception^ ex) {
		MessageBox::Show("Error loading time slots: " + ex->Message);
		conn->Close();
	}
}
	   private: System::Void ResetForm() {
		   tb_vehical_no->Clear();
		   tb_vehicalType->Clear();
		   tb_pName->Clear();
		   tb_decrption->Clear();
		   tb_price->Clear();
		   tb_total->Clear();
		   cbox_time->Items->Clear();
		   dateTimePicker1->Value = DateTime::Now;
		   selectedPackageID = -1;
	   }

private: System::Void tb_confirm_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ vehicleNo = tb_vehical_no->Text->Trim();
	String^ vehicleType = tb_vehicalType->Text->ToString();
	DateTime date = dateTimePicker1->Value.Date;
	String^ timeSlot = cbox_time->SelectedItem->ToString();

	int userID = SessionManager::CurrentUserID; 

	if (vehicleNo == "" || vehicleType == "" || timeSlot == "" || selectedPackageID == -1) {
		MessageBox::Show("Please fill all required fields and select a service package.");
		return;
	}

	DatabaseManager::AddBooking(userID, vehicleNo, vehicleType, date, timeSlot, selectedPackageID);
	MessageBox::Show("Booking confirmed.");
	ResetForm();
}
private: System::Void tb_reset_Click(System::Object^ sender, System::EventArgs^ e) {
	tb_vehical_no->Clear();
	tb_vehicalType->Clear();
	tb_pName->Clear();
	tb_decrption->Clear();
	tb_price->Clear();
	tb_total->Clear();
	cbox_time->Items->Clear();
	dateTimePicker1->Value = DateTime::Now;
	selectedPackageID = -1;
}
private: System::Void bt_myBookings_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyBookings^ mybook = gcnew MyBookings();
	mybook->ShowDialog();
	this->Show();
}
};
}
