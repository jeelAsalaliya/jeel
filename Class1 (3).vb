Imports System.Data.OleDb


Public Class student
    Dim cn As New OleDbConnection("proider=microsoft.ACE=OLEDB.120 Datasource ='D:\sybca08\vb.net\ClassLibrary7'")

    Dim cm As OleDbCommand
    Dim da As OleDbDataAdapter
    Dim ds As New DataSet

    Public Sub IUD(ByVal str As String)
        If cn.State = ConnectionState.Closed Then
            cn.Open()
        End If

        cm = New OleDbCommand(str, cn)
        cm.ExecuteNonQuery()
        cn.Close()
    End Sub

    Public Function display(ByVal str As String) As DataSet
        da = New OleDbDataAdapter(str, cn)
        ds.Tables.Clear()
        da.Fill(ds)
        Return ds
    End Function
End Class
