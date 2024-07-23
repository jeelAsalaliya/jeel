Imports System.Math

Private Sub MathFunc()
    Messagebox.show("abs=" & abs(-1.01).ToString)
    Messagebox.show("int=" & int(-1.1).ToString)
    Messagebox.show("fix=" & fix(-1.1).ToString)
    Messagebox.show("round=" & round(3.51, 1).ToString)
    Messagebox.show("oct="&oct(47).ToString)
    Messagebox.show("hex="&hex(47).ToString)
    Messagebox.show("pow=" & pow(2.3).ToString)
    Messagebox.show("sqrt=" & sqrt(25).ToString)
End Sub
MathFunc()
