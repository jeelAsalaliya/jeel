Imports System.Data.OleDb

Public Class studmast
    Dim ds As New student
    Dim MaxRow, inc As Integer
    Dim gender As String = ""
    Dim s1 As New student
    Dim cm As OleDbCommand

    Private Sub studentmast_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        ds = CType(s1.display("select *from coursemst"), student)
        cmbcourse.DataSource = ds.Tables(0)
        cmbcourse.DisplayMember = "coursename"
        cmbcourse.ValueMember = "courseid"
        fillstudentdata()
    End Sub

    Private Sub fillstudentdata()
        ds = CType(s1.display("select s.sid,s.rno,s.name,s.address,s.phone,s.email,s.gender,c.coursename,from student s,coursemst c where c.courseid = s.courseid order by rno"), student)

        DataGridView.DataSource = ds.Tables(0)
        DataGridView.Columns(0).visible = False
        MaxRow = ds.Tables(0).Rows.count
    End Sub

    Private Sub btninsert_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btninsert.Click
        If rbmale.Checked = True Then
            gender = "male"
        ElseIf rbfemale.Checked = True Then
            gender = "female"
        End If
    End Sub
End Class
