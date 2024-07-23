Public Class Form1
    Dim s1 As New student
    Dim ds As New DataSet

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        ds = s1.display("select *from coursemst")
        cmbcourse.Datasource = ds.Tables(0)
        cmbcourse.DisplayMember = "coursename"
        cmbcourse.ValueMember = "courseid"
    End Sub

    Private Sub btnsearch_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnsearch.Click
        ds=s1.display("select s.rno,s.name,s.address,s.phone,s.email,s.gender,c.coursename from student s,coursemast c where c.courseid = s.courseid and sname like '"&txtstudentname.Text&"%' and s.courseid=" &cmbcourse.selectedValue&" order by rno")
        DataGridView.DataSource = ds.Tables(0)
    End Sub
End Class
