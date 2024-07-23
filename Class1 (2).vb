
Public Class animal
    Sub live()
        Breathing()
    End Sub
    Sub live2()
        MyClass.Breathing()
    End Sub

    Overridable Sub Breathing()
        MsgBox("Breathing..")
    End Sub
End Class