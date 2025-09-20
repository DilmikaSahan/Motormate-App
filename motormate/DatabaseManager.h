#pragma once
#include "SessionManager.h"
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;

public ref class DatabaseManager
{
private:
    static String^ connectionString = "Data Source=DESKTOP-FCI9A7V\\SQLEXPRESS;Initial Catalog=VehicleServiceCenter_db;Integrated Security=True";

public:
    // Get connection
    static SqlConnection^ GetConnection()
    {
        return gcnew SqlConnection(connectionString);
    }

    // 1. Execute INSERT, UPDATE, DELETE
    static bool ExecuteNonQuery(String^ query, SqlParameterCollection^ parameters)
    {
        SqlConnection^ conn = GetConnection();
        try
        {
            conn->Open();
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            for each (SqlParameter ^ param in parameters)
                cmd->Parameters->Add(param);

            cmd->ExecuteNonQuery();
            conn->Close();
            return true;
        }
        catch (Exception^ ex)
        {
            Console::WriteLine("Error: " + ex->Message);
            conn->Close();
            return false;
        }
    }

    // 2. Execute SELECT query and return reader
    static SqlDataReader^ ExecuteQuery(String^ query, SqlParameterCollection^ parameters, SqlConnection^% outConn)
    {
        outConn = GetConnection();
        try
        {
            outConn->Open();
            SqlCommand^ cmd = gcnew SqlCommand(query, outConn);
            for each (SqlParameter ^ param in parameters)
                cmd->Parameters->Add(param);

            return cmd->ExecuteReader(CommandBehavior::CloseConnection);
        }
        catch (Exception^ ex)
        {
            Console::WriteLine("Error: " + ex->Message);
            outConn->Close();
            return nullptr;
        }
    }

    // Inside DatabaseManager class
    static String^ GetUserRole(String^ username, String^ password)
    {
        Console::WriteLine("DEBUG - Username: " + username);
        Console::WriteLine("DEBUG - Password: " + password);

        SqlConnection^ conn = GetConnection();
        try
        {
            conn->Open();
            String^ query = "SELECT userID, role FROM users WHERE username=@username AND password=@password";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@username", username->Trim());
            cmd->Parameters->AddWithValue("@password", password->Trim());

            SqlDataReader^ reader = cmd->ExecuteReader();

            if (reader->Read())
            {
                int userID = Convert::ToInt32(reader["userID"]);
                String^ role = reader["role"]->ToString();

                // Set the session user ID
                SessionManager::CurrentUserID = userID;

                reader->Close();
                conn->Close();

                return role;
            }
            else
            {
                reader->Close();
                conn->Close();
                return nullptr;
            }
        }
        catch (Exception^ ex)
        {
            Console::WriteLine("Error: " + ex->Message);
            return nullptr;
        }
    }


    static DataTable^ GetAllServicePackages()
    {
        SqlConnection^ conn = GetConnection();
        DataTable^ table = gcnew DataTable();

        try
        {
            conn->Open();
            String^ query = "SELECT * FROM ServicePackages";
            SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, conn);
            adapter->Fill(table);
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Error: " + ex->Message);
        }
        finally
        {
            conn->Close();
        }

        return table;
    }

    static void AddServicePackage(String^ name, String^ description, double price)
    {
        SqlConnection^ conn = GetConnection();

        try
        {
            conn->Open();
            String^ query = "INSERT INTO ServicePackages (PackageName, Description, Price) VALUES (@name, @desc, @price)";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@name", name);
            cmd->Parameters->AddWithValue("@desc", description);
            cmd->Parameters->AddWithValue("@price", price);
            cmd->ExecuteNonQuery();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Insert Error: " + ex->Message);
        }
        finally
        {
            conn->Close();
        }
    }

    static void UpdateServicePackage(int id, String^ name, String^ description, double price)
    {
        SqlConnection^ conn = GetConnection();

        try
        {
            conn->Open();
            String^ query = "UPDATE ServicePackages SET PackageName=@name, Description=@desc, Price=@price WHERE PackageID=@id";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@name", name);
            cmd->Parameters->AddWithValue("@desc", description);
            cmd->Parameters->AddWithValue("@price", price);
            cmd->Parameters->AddWithValue("@id", id);
            cmd->ExecuteNonQuery();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Update Error: " + ex->Message);
        }
        finally
        {
            conn->Close();
        }
    }
    static void DeleteServicePackage(int packageID) {
        SqlConnection^ conn = GetConnection();

        try {
            conn->Open();
            String^ query = "DELETE FROM ServicePackages WHERE PackageID = @id";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", packageID);
            cmd->ExecuteNonQuery();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Delete Error: " + ex->Message);
        }
        finally {
            conn->Close();
        }
    }

    static void AddBooking(int userID, String^ vehicleNo, String^ type, DateTime date, String^ timeSlot, int packageID) {
        SqlConnection^ conn = GetConnection();
        String^ query = "INSERT INTO Bookings (UserID, VehicleNumber, VehicleType, BookingDate, TimeSlot, PackageID, Status) " +
            "VALUES (@userID, @vehicleNo, @type, @date, @slot, @packageID, 'Pending')";
        SqlCommand^ cmd = gcnew SqlCommand(query, conn);
        cmd->Parameters->AddWithValue("@userID", userID);
        cmd->Parameters->AddWithValue("@vehicleNo", vehicleNo);
        cmd->Parameters->AddWithValue("@type", type);
        cmd->Parameters->AddWithValue("@date", date);
        cmd->Parameters->AddWithValue("@slot", timeSlot);
        cmd->Parameters->AddWithValue("@packageID", packageID);

        try {
            conn->Open();
            cmd->ExecuteNonQuery();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Booking Error: " + ex->Message);
        }
        finally {
            conn->Close();
        }
    }
    static String^ GetUsernameByID(int userID)
    {
        SqlConnection^ conn = GetConnection();
        try
        {
            conn->Open();
            String^ query = "SELECT username FROM users WHERE userID=@id";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", userID);

            Object^ result = cmd->ExecuteScalar();
            conn->Close();

            if (result != nullptr)
                return result->ToString();
            else
                return nullptr;
        }
        catch (Exception^ ex)
        {
            Console::WriteLine("Error: " + ex->Message);
            return nullptr;
        }

    }



};
