Public Class Form1

    Private Sub btnArithmetic_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles btnArithmetic.Click
        Dim a, b, res As Integer
        a = 6
        b = 3
        res = a + b
        MessageBox.Show("Addition=" & res.ToString)

        res = a - b
        MessageBox.Show("Subtraction=" & res.ToString)

        res = a * b
        MessageBox.Show("Multiplication=" & res.ToString)

        res = a \ b
        MessageBox.Show("Division=" & res.ToString)

        res = a Mod b
        MessageBox.Show("Modulus="&res.ToString)
    End Sub
End Class
