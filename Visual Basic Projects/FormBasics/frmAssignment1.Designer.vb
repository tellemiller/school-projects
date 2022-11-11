<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment1
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
        Me.missionaryButton = New System.Windows.Forms.Button()
        Me.closeButton = New System.Windows.Forms.Button()
        Me.lblMissions = New System.Windows.Forms.Label()
        Me.picMissionary = New System.Windows.Forms.PictureBox()
        Me.picStudentImage = New System.Windows.Forms.PictureBox()
        Me.txtVerse = New System.Windows.Forms.TextBox()
        CType(Me.picMissionary, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picStudentImage, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'missionaryButton
        '
        Me.missionaryButton.Location = New System.Drawing.Point(554, 114)
        Me.missionaryButton.Name = "missionaryButton"
        Me.missionaryButton.Size = New System.Drawing.Size(138, 72)
        Me.missionaryButton.TabIndex = 0
        Me.missionaryButton.Text = "&Missionary"
        Me.missionaryButton.UseVisualStyleBackColor = True
        '
        'closeButton
        '
        Me.closeButton.Location = New System.Drawing.Point(554, 208)
        Me.closeButton.Name = "closeButton"
        Me.closeButton.Size = New System.Drawing.Size(138, 72)
        Me.closeButton.TabIndex = 1
        Me.closeButton.Text = "&Close"
        Me.closeButton.UseVisualStyleBackColor = True
        '
        'lblMissions
        '
        Me.lblMissions.AutoSize = True
        Me.lblMissions.Font = New System.Drawing.Font("Microsoft Sans Serif", 18.0!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissions.Location = New System.Drawing.Point(49, 70)
        Me.lblMissions.Name = "lblMissions"
        Me.lblMissions.Size = New System.Drawing.Size(225, 116)
        Me.lblMissions.TabIndex = 2
        Me.lblMissions.Text = "Jim Elliot" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Telle Miller" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Mrs. Miranda Dyer" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "8/30/2021"
        Me.lblMissions.Visible = False
        '
        'picMissionary
        '
        Me.picMissionary.Image = Global.Assignment1.My.Resources.Resources.jim_elliot
        Me.picMissionary.Location = New System.Drawing.Point(74, 198)
        Me.picMissionary.Name = "picMissionary"
        Me.picMissionary.Size = New System.Drawing.Size(168, 218)
        Me.picMissionary.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picMissionary.TabIndex = 3
        Me.picMissionary.TabStop = False
        Me.picMissionary.Visible = False
        '
        'picStudentImage
        '
        Me.picStudentImage.Image = Global.Assignment1.My.Resources.Resources.cross
        Me.picStudentImage.Location = New System.Drawing.Point(303, 50)
        Me.picStudentImage.Name = "picStudentImage"
        Me.picStudentImage.Size = New System.Drawing.Size(209, 195)
        Me.picStudentImage.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picStudentImage.TabIndex = 4
        Me.picStudentImage.TabStop = False
        '
        'txtVerse
        '
        Me.txtVerse.BackColor = System.Drawing.SystemColors.AppWorkspace
        Me.txtVerse.BorderStyle = System.Windows.Forms.BorderStyle.None
        Me.txtVerse.Font = New System.Drawing.Font("Poor Richard", 14.25!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtVerse.ForeColor = System.Drawing.SystemColors.InactiveCaptionText
        Me.txtVerse.Location = New System.Drawing.Point(281, 260)
        Me.txtVerse.Multiline = True
        Me.txtVerse.Name = "txtVerse"
        Me.txtVerse.Size = New System.Drawing.Size(252, 156)
        Me.txtVerse.TabIndex = 5
        Me.txtVerse.TabStop = False
        Me.txtVerse.Text = "And he said to them, ""Go into all the world and " & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "proclaim the gospel to the whol" &
    "e creation.""" & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & Global.Microsoft.VisualBasic.ChrW(13) & Global.Microsoft.VisualBasic.ChrW(10) & "Mark 16:15"
        Me.txtVerse.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'frmAssignment1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.Highlight
        Me.ClientSize = New System.Drawing.Size(707, 439)
        Me.Controls.Add(Me.txtVerse)
        Me.Controls.Add(Me.picStudentImage)
        Me.Controls.Add(Me.picMissionary)
        Me.Controls.Add(Me.lblMissions)
        Me.Controls.Add(Me.closeButton)
        Me.Controls.Add(Me.missionaryButton)
        Me.Name = "frmAssignment1"
        Me.Text = "Assignment 1"
        CType(Me.picMissionary, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picStudentImage, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents missionaryButton As Button
    Friend WithEvents closeButton As Button
    Friend WithEvents lblMissions As Label
    Friend WithEvents picMissionary As PictureBox
    Friend WithEvents picStudentImage As PictureBox
    Friend WithEvents txtVerse As TextBox
End Class
