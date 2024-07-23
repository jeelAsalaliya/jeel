Public Class Form1
    Structure EMPLOYEE
        Dim empno As Integer
        Dim ename As String
        Dim salary As Double

        Sub New(ByVal empno As Integer, ByVal ename As String, ByVal salary As Double)
            Me.empno = empno
            Me.ename = ename
            Me.salary = salary

        End Sub

        Function getempno() As Integer
            Return empno
        End Function

        Function getenm() As String
            Return ename
        End Function

        Function getsal() As Double
            Return salary
        End Function
    End Structure


    Private Sub btnDISPLAY_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnDISPLAY.Click
        Dim e1 As New EMPLOYEE(101, "AAA", 30000)

        txtEMPNO.Text = CStr(e1.getempno)
        txtEMPNAME.Text = e1.getenm
        txtSALARY.Text = CStr(e1.getsal)
    End Sub
End Class
