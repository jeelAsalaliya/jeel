Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

    End Sub

    Private Sub BTNREVERSE_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles BTNREVERSE.Click
        Dim strrev As String = " "
        strrev = Conversion.ReverseStr(txtstringno1.Text)
        txtReverseStr.text = strrev
    End Sub



    Private Function txtstringno() As Object
        Throw New NotImplementedException
    End Function

    Private Sub chkPalin_click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles chkPalin.CheckedChanged
        Dim chkPalin As String = " "
        chkPalin = Conversion.Palindrom(txtstringno1.Text)
        MessageBox.Show(chkPalin)
    End Sub



    Private Sub txtpalindrom_click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles txtpalindrom.TextChanged

    End Sub

    Private Sub btnDECTOBIN_click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnDECTOBIN.Click
        Dim bin As String = " "
        bin = Conversion.DECTOBIN(txtstringno1.Text)
        txtbin1.Text = bin
    End Sub

    Private Function txtbin() As Object
        Throw New NotImplementedException
    End Function

End Class
