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
        Me.lblEMPNO = New System.Windows.Forms.Label()
        Me.lblEMPNAME = New System.Windows.Forms.Label()
        Me.lblSALARY = New System.Windows.Forms.Label()
        Me.txtEMPNO = New System.Windows.Forms.TextBox()
        Me.txtEMPNAME = New System.Windows.Forms.TextBox()
        Me.txtSALARY = New System.Windows.Forms.TextBox()
        Me.btnDISPLAY = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'lblEMPNO
        '
        Me.lblEMPNO.AutoSize = True
        Me.lblEMPNO.Location = New System.Drawing.Point(37, 43)
        Me.lblEMPNO.Name = "lblEMPNO"
        Me.lblEMPNO.Size = New System.Drawing.Size(52, 13)
        Me.lblEMPNO.TabIndex = 0
        Me.lblEMPNO.Text = "EMPNO :"
        '
        'lblEMPNAME
        '
        Me.lblEMPNAME.AutoSize = True
        Me.lblEMPNAME.Location = New System.Drawing.Point(37, 71)
        Me.lblEMPNAME.Name = "lblEMPNAME"
        Me.lblEMPNAME.Size = New System.Drawing.Size(67, 13)
        Me.lblEMPNAME.TabIndex = 1
        Me.lblEMPNAME.Text = "EMPNAME :"
        '
        'lblSALARY
        '
        Me.lblSALARY.AutoSize = True
        Me.lblSALARY.Location = New System.Drawing.Point(37, 103)
        Me.lblSALARY.Name = "lblSALARY"
        Me.lblSALARY.Size = New System.Drawing.Size(55, 13)
        Me.lblSALARY.TabIndex = 2
        Me.lblSALARY.Text = "SALARY :"
        '
        'txtEMPNO
        '
        Me.txtEMPNO.Location = New System.Drawing.Point(117, 43)
        Me.txtEMPNO.Name = "txtEMPNO"
        Me.txtEMPNO.Size = New System.Drawing.Size(100, 20)
        Me.txtEMPNO.TabIndex = 3
        '
        'txtEMPNAME
        '
        Me.txtEMPNAME.Location = New System.Drawing.Point(117, 71)
        Me.txtEMPNAME.Name = "txtEMPNAME"
        Me.txtEMPNAME.Size = New System.Drawing.Size(100, 20)
        Me.txtEMPNAME.TabIndex = 4
        '
        'txtSALARY
        '
        Me.txtSALARY.Location = New System.Drawing.Point(117, 103)
        Me.txtSALARY.Name = "txtSALARY"
        Me.txtSALARY.Size = New System.Drawing.Size(100, 20)
        Me.txtSALARY.TabIndex = 5
        '
        'btnDISPLAY
        '
        Me.btnDISPLAY.Location = New System.Drawing.Point(78, 12)
        Me.btnDISPLAY.Name = "btnDISPLAY"
        Me.btnDISPLAY.Size = New System.Drawing.Size(75, 23)
        Me.btnDISPLAY.TabIndex = 6
        Me.btnDISPLAY.Text = "display"
        Me.btnDISPLAY.UseVisualStyleBackColor = True
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.btnDISPLAY)
        Me.Controls.Add(Me.txtSALARY)
        Me.Controls.Add(Me.txtEMPNAME)
        Me.Controls.Add(Me.txtEMPNO)
        Me.Controls.Add(Me.lblSALARY)
        Me.Controls.Add(Me.lblEMPNAME)
        Me.Controls.Add(Me.lblEMPNO)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents lblEMPNO As System.Windows.Forms.Label
    Friend WithEvents lblEMPNAME As System.Windows.Forms.Label
    Friend WithEvents lblSALARY As System.Windows.Forms.Label
    Friend WithEvents txtEMPNO As System.Windows.Forms.TextBox
    Friend WithEvents txtEMPNAME As System.Windows.Forms.TextBox
    Friend WithEvents txtSALARY As System.Windows.Forms.TextBox
    Friend WithEvents btnDISPLAY As System.Windows.Forms.Button

End Class
