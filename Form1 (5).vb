Public Class Form1

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load

    End Sub

    Private Sub txtname_keypress(ByVal sender As System.Object, ByVal e As KeyPressEventArgs) Handles txtname_KeyPress
        If (e.keychar >= Chr(65) And e.keychar <= Chr(90)) Or (e.keychar >= Chr(97) And e.keychar <= Chr(122)) Or (e.keychar = Chr(32)) Then
            e.Handled = False
        Else
            e.Handled = True
        End If

    Private Sub txtpwd_keydown(ByVal sender As System.Object, ByVal e As KeyEventArgs) Handles txtpwd.KeyDown
        If e.KeyCode = Keys.F1 Then
            txtpwd.Clear()
            MessageBox.Show("minimum length 5 characters")
        End If
    End Sub


    Private Sub txtuserid_keydown(ByVal sender As System.Object, ByVal e As KeyEventArgs) Handles txtuserid.KeyDown
        Dim code As String
        code = CStr(e.KeyCode)
        lblkeycode.text = code
    End Sub

    Private Function lblkeycode() As Object
        Throw New NotImplementedException
    End Function

End Class


