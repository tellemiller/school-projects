<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment6
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
        Me.lstIncome = New System.Windows.Forms.ListBox()
        Me.lstExpense = New System.Windows.Forms.ListBox()
        Me.lblAmount = New System.Windows.Forms.Label()
        Me.lblIncome = New System.Windows.Forms.Label()
        Me.txtAmount = New System.Windows.Forms.TextBox()
        Me.txtTotalIncome = New System.Windows.Forms.TextBox()
        Me.btnEnterIncome = New System.Windows.Forms.Button()
        Me.btnEnterExpense = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'lstIncome
        '
        Me.lstIncome.FormattingEnabled = True
        Me.lstIncome.Location = New System.Drawing.Point(30, 52)
        Me.lstIncome.Name = "lstIncome"
        Me.lstIncome.Size = New System.Drawing.Size(274, 316)
        Me.lstIncome.TabIndex = 0
        Me.lstIncome.TabStop = False
        '
        'lstExpense
        '
        Me.lstExpense.FormattingEnabled = True
        Me.lstExpense.Location = New System.Drawing.Point(491, 52)
        Me.lstExpense.Name = "lstExpense"
        Me.lstExpense.Size = New System.Drawing.Size(274, 316)
        Me.lstExpense.TabIndex = 0
        Me.lstExpense.TabStop = False
        '
        'lblAmount
        '
        Me.lblAmount.AutoSize = True
        Me.lblAmount.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblAmount.Location = New System.Drawing.Point(375, 52)
        Me.lblAmount.Name = "lblAmount"
        Me.lblAmount.Size = New System.Drawing.Size(49, 13)
        Me.lblAmount.TabIndex = 2
        Me.lblAmount.Text = "Amount"
        '
        'lblIncome
        '
        Me.lblIncome.AutoSize = True
        Me.lblIncome.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblIncome.Location = New System.Drawing.Point(357, 355)
        Me.lblIncome.Name = "lblIncome"
        Me.lblIncome.Size = New System.Drawing.Size(81, 13)
        Me.lblIncome.TabIndex = 3
        Me.lblIncome.Text = "Total Income"
        '
        'txtAmount
        '
        Me.txtAmount.Location = New System.Drawing.Point(347, 68)
        Me.txtAmount.Multiline = True
        Me.txtAmount.Name = "txtAmount"
        Me.txtAmount.Size = New System.Drawing.Size(100, 53)
        Me.txtAmount.TabIndex = 0
        Me.txtAmount.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'txtTotalIncome
        '
        Me.txtTotalIncome.Location = New System.Drawing.Point(347, 371)
        Me.txtTotalIncome.Multiline = True
        Me.txtTotalIncome.Name = "txtTotalIncome"
        Me.txtTotalIncome.ReadOnly = True
        Me.txtTotalIncome.Size = New System.Drawing.Size(100, 52)
        Me.txtTotalIncome.TabIndex = 0
        Me.txtTotalIncome.TabStop = False
        Me.txtTotalIncome.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'btnEnterIncome
        '
        Me.btnEnterIncome.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnEnterIncome.Location = New System.Drawing.Point(336, 164)
        Me.btnEnterIncome.Name = "btnEnterIncome"
        Me.btnEnterIncome.Size = New System.Drawing.Size(130, 54)
        Me.btnEnterIncome.TabIndex = 1
        Me.btnEnterIncome.Text = "Enter &Income"
        Me.btnEnterIncome.UseVisualStyleBackColor = True
        '
        'btnEnterExpense
        '
        Me.btnEnterExpense.Font = New System.Drawing.Font("Microsoft Sans Serif", 8.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnEnterExpense.Location = New System.Drawing.Point(336, 242)
        Me.btnEnterExpense.Name = "btnEnterExpense"
        Me.btnEnterExpense.Size = New System.Drawing.Size(130, 54)
        Me.btnEnterExpense.TabIndex = 2
        Me.btnEnterExpense.Text = "Enter &Expense"
        Me.btnEnterExpense.UseVisualStyleBackColor = True
        '
        'frmAssignment6
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = Global.Assignment6_TCM.My.Resources.Resources.numbers
        Me.ClientSize = New System.Drawing.Size(800, 450)
        Me.Controls.Add(Me.btnEnterExpense)
        Me.Controls.Add(Me.btnEnterIncome)
        Me.Controls.Add(Me.txtTotalIncome)
        Me.Controls.Add(Me.txtAmount)
        Me.Controls.Add(Me.lblIncome)
        Me.Controls.Add(Me.lblAmount)
        Me.Controls.Add(Me.lstExpense)
        Me.Controls.Add(Me.lstIncome)
        Me.Name = "frmAssignment6"
        Me.Text = "Assignment 6"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents lstIncome As ListBox
    Friend WithEvents lstExpense As ListBox
    Friend WithEvents lblAmount As Label
    Friend WithEvents lblIncome As Label
    Friend WithEvents txtAmount As TextBox
    Friend WithEvents txtTotalIncome As TextBox
    Friend WithEvents btnEnterIncome As Button
    Friend WithEvents btnEnterExpense As Button
End Class
