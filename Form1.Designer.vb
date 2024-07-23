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
        Me.btnobj = New System.Windows.Forms.Button()
        Me.btncollection = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'btnobj
        '
        Me.btnobj.BackColor = System.Drawing.SystemColors.ControlDarkDark
        Me.btnobj.ForeColor = System.Drawing.Color.Cornsilk
        Me.btnobj.Location = New System.Drawing.Point(34, 46)
        Me.btnobj.Name = "btnobj"
        Me.btnobj.Size = New System.Drawing.Size(179, 23)
        Me.btnobj.TabIndex = 0
        Me.btnobj.Text = "objectArray"
        Me.btnobj.UseVisualStyleBackColor = False
        '
        'btncollection
        '
        Me.btncollection.BackColor = System.Drawing.SystemColors.ButtonShadow
        Me.btncollection.ForeColor = System.Drawing.Color.DarkBlue
        Me.btncollection.Location = New System.Drawing.Point(34, 85)
        Me.btncollection.Name = "btncollection"
        Me.btncollection.Size = New System.Drawing.Size(179, 23)
        Me.btncollection.TabIndex = 1
        Me.btncollection.Text = "collectionexample"
        Me.btncollection.UseVisualStyleBackColor = False
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(284, 261)
        Me.Controls.Add(Me.btncollection)
        Me.Controls.Add(Me.btnobj)
        Me.Name = "Form1"
        Me.Text = "Form1"
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents btnobj As System.Windows.Forms.Button
    Friend WithEvents btncollection As System.Windows.Forms.Button

End Class
