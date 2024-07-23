Module conversion
    Function ReverseString(ByVal str As String) As String
        Dim strrev As String = " "
        For i As Integer = 0 To str.Length - 1
            strrev = strrev & str.Substring(str.Length - 1 - i, 1)
        Next
        Return strrev
    End Function

    Function palindrome(ByVal str As String) As String
        Dim strrev As String = ReverseString(str)

        If str.Equals(strrev) Then
            Return "it is a palindrom string:"
        Else
            Return "it is not a palindrom string:"
        End If
    End Function

    Function DECTOBIN(ByVal dec As Integer) As String
        Dim bin As String = "  "
        Dim remainder As Integer = 0

        Do
            remainder = dec Mod 2
            bin = bin & remainder.ToString
            dec = CInt(Math.Floor(dec / 2))
        Loop While dec > 0
        Return ReverseString(bin)
    End Function
End Module