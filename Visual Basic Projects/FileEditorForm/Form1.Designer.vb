<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment5
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
        Me.lblMembers = New System.Windows.Forms.Label()
        Me.lstMembers = New System.Windows.Forms.ListBox()
        Me.lblCount = New System.Windows.Forms.Label()
        Me.txtCount = New System.Windows.Forms.TextBox()
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip()
        Me.mnuFile = New System.Windows.Forms.ToolStripMenuItem()
        Me.mnuEdit = New System.Windows.Forms.ToolStripMenuItem()
        Me.mnuSort = New System.Windows.Forms.ToolStripMenuItem()
        Me.mnuCreateFile = New System.Windows.Forms.ToolStripMenuItem()
        Me.mnuAddMember = New System.Windows.Forms.ToolStripMenuItem()
        Me.mnuDeleteMember = New System.Windows.Forms.ToolStripMenuItem()
        Me.mnuAscending = New System.Windows.Forms.ToolStripMenuItem()
        Me.mnuDescending = New System.Windows.Forms.ToolStripMenuItem()
        Me.mnuExit = New System.Windows.Forms.ToolStripMenuItem()
        Me.MenuStrip1.SuspendLayout()
        Me.SuspendLayout()
        '
        'lblMembers
        '
        Me.lblMembers.Anchor = CType((((System.Windows.Forms.AnchorStyles.Top Or System.Windows.Forms.AnchorStyles.Bottom) _
            Or System.Windows.Forms.AnchorStyles.Left) _
            Or System.Windows.Forms.AnchorStyles.Right), System.Windows.Forms.AnchorStyles)
        Me.lblMembers.Font = New System.Drawing.Font("Rockwell", 20.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMembers.Location = New System.Drawing.Point(169, 39)
        Me.lblMembers.Name = "lblMembers"
        Me.lblMembers.Size = New System.Drawing.Size(212, 50)
        Me.lblMembers.TabIndex = 0
        Me.lblMembers.Text = "Members"
        Me.lblMembers.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lstMembers
        '
        Me.lstMembers.FormattingEnabled = True
        Me.lstMembers.Location = New System.Drawing.Point(55, 92)
        Me.lstMembers.Name = "lstMembers"
        Me.lstMembers.Size = New System.Drawing.Size(440, 264)
        Me.lstMembers.TabIndex = 0
        '
        'lblCount
        '
        Me.lblCount.AutoSize = True
        Me.lblCount.Font = New System.Drawing.Font("Microsoft Sans Serif", 14.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblCount.Location = New System.Drawing.Point(186, 389)
        Me.lblCount.Name = "lblCount"
        Me.lblCount.Size = New System.Drawing.Size(65, 24)
        Me.lblCount.TabIndex = 2
        Me.lblCount.Text = "Count"
        '
        'txtCount
        '
        Me.txtCount.Location = New System.Drawing.Point(267, 389)
        Me.txtCount.Name = "txtCount"
        Me.txtCount.ReadOnly = True
        Me.txtCount.Size = New System.Drawing.Size(100, 20)
        Me.txtCount.TabIndex = 0
        Me.txtCount.TabStop = False
        '
        'MenuStrip1
        '
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.mnuFile, Me.mnuEdit, Me.mnuSort})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(550, 24)
        Me.MenuStrip1.TabIndex = 1
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'mnuFile
        '
        Me.mnuFile.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.mnuExit})
        Me.mnuFile.Name = "mnuFile"
        Me.mnuFile.Size = New System.Drawing.Size(37, 20)
        Me.mnuFile.Text = "File"
        '
        'mnuEdit
        '
        Me.mnuEdit.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.mnuCreateFile, Me.mnuAddMember, Me.mnuDeleteMember})
        Me.mnuEdit.Name = "mnuEdit"
        Me.mnuEdit.Size = New System.Drawing.Size(39, 20)
        Me.mnuEdit.Text = "Edit"
        '
        'mnuSort
        '
        Me.mnuSort.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.mnuAscending, Me.mnuDescending})
        Me.mnuSort.Name = "mnuSort"
        Me.mnuSort.Size = New System.Drawing.Size(40, 20)
        Me.mnuSort.Text = "Sort"
        '
        'mnuCreateFile
        '
        Me.mnuCreateFile.Name = "mnuCreateFile"
        Me.mnuCreateFile.ShortcutKeys = CType((System.Windows.Forms.Keys.Control Or System.Windows.Forms.Keys.C), System.Windows.Forms.Keys)
        Me.mnuCreateFile.Size = New System.Drawing.Size(196, 22)
        Me.mnuCreateFile.Text = "Create File"
        '
        'mnuAddMember
        '
        Me.mnuAddMember.Name = "mnuAddMember"
        Me.mnuAddMember.ShortcutKeys = CType((System.Windows.Forms.Keys.Control Or System.Windows.Forms.Keys.M), System.Windows.Forms.Keys)
        Me.mnuAddMember.Size = New System.Drawing.Size(196, 22)
        Me.mnuAddMember.Text = "Add Member"
        '
        'mnuDeleteMember
        '
        Me.mnuDeleteMember.Name = "mnuDeleteMember"
        Me.mnuDeleteMember.ShortcutKeys = CType((System.Windows.Forms.Keys.Control Or System.Windows.Forms.Keys.B), System.Windows.Forms.Keys)
        Me.mnuDeleteMember.Size = New System.Drawing.Size(196, 22)
        Me.mnuDeleteMember.Text = "Delete Member"
        '
        'mnuAscending
        '
        Me.mnuAscending.Name = "mnuAscending"
        Me.mnuAscending.ShortcutKeys = CType((System.Windows.Forms.Keys.Control Or System.Windows.Forms.Keys.A), System.Windows.Forms.Keys)
        Me.mnuAscending.Size = New System.Drawing.Size(180, 22)
        Me.mnuAscending.Text = "Ascend"
        '
        'mnuDescending
        '
        Me.mnuDescending.Name = "mnuDescending"
        Me.mnuDescending.ShortcutKeys = CType((System.Windows.Forms.Keys.Control Or System.Windows.Forms.Keys.D), System.Windows.Forms.Keys)
        Me.mnuDescending.Size = New System.Drawing.Size(180, 22)
        Me.mnuDescending.Text = "Descend"
        '
        'mnuExit
        '
        Me.mnuExit.Name = "mnuExit"
        Me.mnuExit.ShortcutKeys = CType((System.Windows.Forms.Keys.Control Or System.Windows.Forms.Keys.E), System.Windows.Forms.Keys)
        Me.mnuExit.Size = New System.Drawing.Size(180, 22)
        Me.mnuExit.Text = "Exit"
        '
        'frmAssignment5
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.Desktop
        Me.ClientSize = New System.Drawing.Size(550, 450)
        Me.Controls.Add(Me.txtCount)
        Me.Controls.Add(Me.lblCount)
        Me.Controls.Add(Me.lstMembers)
        Me.Controls.Add(Me.lblMembers)
        Me.Controls.Add(Me.MenuStrip1)
        Me.Name = "frmAssignment5"
        Me.Text = "Assignment 5"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents lblMembers As Label
    Friend WithEvents lstMembers As ListBox
    Friend WithEvents lblCount As Label
    Friend WithEvents txtCount As TextBox
    Friend WithEvents MenuStrip1 As MenuStrip
    Friend WithEvents mnuFile As ToolStripMenuItem
    Friend WithEvents mnuExit As ToolStripMenuItem
    Friend WithEvents mnuEdit As ToolStripMenuItem
    Friend WithEvents mnuCreateFile As ToolStripMenuItem
    Friend WithEvents mnuAddMember As ToolStripMenuItem
    Friend WithEvents mnuDeleteMember As ToolStripMenuItem
    Friend WithEvents mnuSort As ToolStripMenuItem
    Friend WithEvents mnuAscending As ToolStripMenuItem
    Friend WithEvents mnuDescending As ToolStripMenuItem
End Class
