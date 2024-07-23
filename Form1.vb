Public Class Form1
    Private Sub btnDISPLAY_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnDISPLAY.Click
        Dim s As Student
        Dim sd As New StudDetail(txtRNO.Text, txtNAME.Text, txtHEIGHT.Text, txtWEIGHT.Text)
        s = sd
        s.display()
    End Sub
End Class
