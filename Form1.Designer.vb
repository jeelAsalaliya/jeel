<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.LBLRNO = New System.Windows.Forms.Label()
        Me.LBLNAME = New System.Windows.Forms.Label()
        Me.LBLHEIGHT = New System.Windows.Forms.Label()
        Me.LBLWEIGHT = New System.Windows.Forms.Label()
        Me.txtRNO = New System.Windows.Forms.TextBox()
        Me.txtNAME = New System.Windows.Forms.TextBox()
        Me.txtHEIGHT = New System.Windows.Forms.TextBox()
        Me.txtWEIGHT = New System.Windows.Forms.TextBox()
        Me.btnDISPLAY = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'LBLRNO
        '
        Me.LBLRNO.AutoSize = True
        Me.LBLRNO.Location = New System.Drawing.Point(25, 57)
        Me.LBLRNO.Name = "LBLRNO"
        Me.LBLRNO.Size = New System.Drawing.Size(37, 13)
        Me.LBLRNO.TabIndex = 0
        Me.LBLRNO.Text = "RNO :"
        '
        'LBLNAME
        '
        Me.LBLNAME.AutoSize = True
        Me.LBLNAME.Location = New System.Drawing.Point(25, 87)
        Me.LBLNAME.Name = "LBLNAME"
        Me.LBLNAME.Size = New System.Drawing.Size(44, 13)
        Me.LBLNAME.TabIndex = 1
        Me.LBLNAME.Text = "NAME :"
        '
        'LBLHEIGHT
        '
        Me.LBLHEIGHT.AutoSize = True
        Me.LBLHEIGHT.Location = New System.Drawing.Point(30, 120)
        Me.LBLHEIGHT.Name = "LBLHEIGHT"
        Me.LBLHEIGHT.Size = New System.Drawing.Size(54, 13)
        Me.LBLHEIGHT.TabIndex = 2
        Me.LBLHEIGHT.Text = "HEIGHT :"
        '
        'LBLWEIGHT
        '
        Me.LBLWEIGHT.AutoSize = True
        Me.LBLWEIGHT.Location = New System.Drawing.Point(30, 150)
        Me.LBLWEIGHT.Name = "LBLWEIGHT"
        Me.LBLWEIGHT.Size = New System.Drawing.Size(57, 13)
        Me.LBLWEIGHT.TabIndex = 3
        Me.LBLWEIGHT.Text = "WEIGHT :"
        '
        'txtRNO
        '
        Me.txtRNO.Location = New System.Drawing.Point(97, 57)
        Me.txtRNO.Name = "txtRNO"
        Me.txtRNO.Size = New System.Drawing.Size(94, 20)
        Me.txtRNO.TabIndex = 4
        '
        'txtNAME
        '
        Me.txtNAME.Location = New System.Drawing.Point(97, 87)
        Me.txtNAME.Name = "txtNAME"
        Me.txtNAME.Size = New System.Drawing.Size(100, 20)
        Me.txtNAME.TabIndex = 5
        '
        'txtHEIGHT
        '
        Me.txtHEIGHT.Location = New System.Drawing.Point(97, 120)
        Me.txtHEIGHT.Name = "txtHEIGHT"
        Me.txtHEIGHT.Size = New System.Drawing.Size(100, 20)
        Me.txtHEIGHT.TabIndex = 6
        '
        'txtWEIGHT
        '
        Me.txtWEIGHT.Location = New System.Drawing.Point(97, 150)
        Me.txtWEIGHT.Name = "txtWEIGHT"
        Me.txtWEIGHT.Size = New System.Drawing.Size(100, 20)
        Me.txtWEIGHT.TabIndex = 7
        '
        'btnDISPLAY
        '
        Me.btnDISPLAY.Location = New System.Drawing.Point(68, 191)
        Me.btnDISPLAY.Name = "btnDISPLAY"
        Me.btnDISPLAY.Size = New System.Drawing.Size(129, 23)
        Me.btnDISPLAY.TabIndex = 8
        Me.btnDISPLAY.Text = "Display"
        Me.btnDISPLAY.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.btnDISPLAY)
        Me.Controls.Add(Me.txtWEIGHT)
        Me.Controls.Add(Me.txtHEIGHT)
        Me.Controls.Add(Me.txtNAME)
        Me.Controls.Add(Me.txtRNO)
        Me.Controls.Add(Me.LBLWEIGHT)
        Me.Controls.Add(Me.LBLHEIGHT)
        Me.Controls.Add(Me.LBLNAME)
        Me.Controls.Add(Me.LBLRNO)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents LBLRNO As System.Windows.Forms.Label
    Friend WithEvents LBLNAME As System.Windows.Forms.Label
    Friend WithEvents LBLHEIGHT As System.Windows.Forms.Label
    Friend WithEvents LBLWEIGHT As System.Windows.Forms.Label
    Friend WithEvents txtRNO As System.Windows.Forms.TextBox
    Friend WithEvents txtNAME As System.Windows.Forms.TextBox
    Friend WithEvents txtHEIGHT As System.Windows.Forms.TextBox
    Friend WithEvents txtWEIGHT As System.Windows.Forms.TextBox
    Friend WithEvents btnDISPLAY As System.Windows.Forms.Button

End Class
