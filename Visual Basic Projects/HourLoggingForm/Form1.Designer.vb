<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment4
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
        Me.lblMissionHoursHeader = New System.Windows.Forms.Label()
        Me.lblYouthMinistry = New System.Windows.Forms.Label()
        Me.lblFoodDrive = New System.Windows.Forms.Label()
        Me.lblMissionTrip = New System.Windows.Forms.Label()
        Me.lblChristmasParty = New System.Windows.Forms.Label()
        Me.lblYouthMinistryHours = New System.Windows.Forms.Label()
        Me.lblHoursDonated = New System.Windows.Forms.Label()
        Me.txtHoursDonated = New System.Windows.Forms.TextBox()
        Me.lstMissions = New System.Windows.Forms.ListBox()
        Me.lstTotals = New System.Windows.Forms.ListBox()
        Me.btnAddHours = New System.Windows.Forms.Button()
        Me.btnClose = New System.Windows.Forms.Button()
        Me.lblFoodDriveHours = New System.Windows.Forms.Label()
        Me.lblMissionTripHours = New System.Windows.Forms.Label()
        Me.lblChristmasPartyHours = New System.Windows.Forms.Label()
        Me.SuspendLayout()
        '
        'lblMissionHoursHeader
        '
        Me.lblMissionHoursHeader.AutoSize = True
        Me.lblMissionHoursHeader.Font = New System.Drawing.Font("Microsoft Sans Serif", 15.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionHoursHeader.Location = New System.Drawing.Point(316, 23)
        Me.lblMissionHoursHeader.Name = "lblMissionHoursHeader"
        Me.lblMissionHoursHeader.Size = New System.Drawing.Size(162, 25)
        Me.lblMissionHoursHeader.TabIndex = 0
        Me.lblMissionHoursHeader.Text = "Mission Hours"
        '
        'lblYouthMinistry
        '
        Me.lblYouthMinistry.AutoSize = True
        Me.lblYouthMinistry.Location = New System.Drawing.Point(657, 68)
        Me.lblYouthMinistry.Name = "lblYouthMinistry"
        Me.lblYouthMinistry.Size = New System.Drawing.Size(73, 13)
        Me.lblYouthMinistry.TabIndex = 0
        Me.lblYouthMinistry.Text = "Youth Ministry"
        '
        'lblFoodDrive
        '
        Me.lblFoodDrive.AutoSize = True
        Me.lblFoodDrive.Location = New System.Drawing.Point(661, 146)
        Me.lblFoodDrive.Name = "lblFoodDrive"
        Me.lblFoodDrive.Size = New System.Drawing.Size(59, 13)
        Me.lblFoodDrive.TabIndex = 0
        Me.lblFoodDrive.Text = "Food Drive"
        '
        'lblMissionTrip
        '
        Me.lblMissionTrip.AutoSize = True
        Me.lblMissionTrip.Location = New System.Drawing.Point(661, 232)
        Me.lblMissionTrip.Name = "lblMissionTrip"
        Me.lblMissionTrip.Size = New System.Drawing.Size(63, 13)
        Me.lblMissionTrip.TabIndex = 0
        Me.lblMissionTrip.Text = "Mission Trip"
        '
        'lblChristmasParty
        '
        Me.lblChristmasParty.AutoSize = True
        Me.lblChristmasParty.Location = New System.Drawing.Point(651, 320)
        Me.lblChristmasParty.Name = "lblChristmasParty"
        Me.lblChristmasParty.Size = New System.Drawing.Size(79, 13)
        Me.lblChristmasParty.TabIndex = 0
        Me.lblChristmasParty.Text = "Christmas Party"
        '
        'lblYouthMinistryHours
        '
        Me.lblYouthMinistryHours.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblYouthMinistryHours.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblYouthMinistryHours.Location = New System.Drawing.Point(644, 88)
        Me.lblYouthMinistryHours.Name = "lblYouthMinistryHours"
        Me.lblYouthMinistryHours.Size = New System.Drawing.Size(100, 41)
        Me.lblYouthMinistryHours.TabIndex = 0
        Me.lblYouthMinistryHours.Text = "0"
        Me.lblYouthMinistryHours.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblHoursDonated
        '
        Me.lblHoursDonated.AutoSize = True
        Me.lblHoursDonated.Location = New System.Drawing.Point(120, 102)
        Me.lblHoursDonated.Name = "lblHoursDonated"
        Me.lblHoursDonated.Size = New System.Drawing.Size(79, 13)
        Me.lblHoursDonated.TabIndex = 0
        Me.lblHoursDonated.Text = "Hours Donated"
        '
        'txtHoursDonated
        '
        Me.txtHoursDonated.Location = New System.Drawing.Point(110, 118)
        Me.txtHoursDonated.Name = "txtHoursDonated"
        Me.txtHoursDonated.Size = New System.Drawing.Size(100, 20)
        Me.txtHoursDonated.TabIndex = 0
        '
        'lstMissions
        '
        Me.lstMissions.FormattingEnabled = True
        Me.lstMissions.Location = New System.Drawing.Point(57, 146)
        Me.lstMissions.Name = "lstMissions"
        Me.lstMissions.Size = New System.Drawing.Size(199, 199)
        Me.lstMissions.TabIndex = 1
        '
        'lstTotals
        '
        Me.lstTotals.FormattingEnabled = True
        Me.lstTotals.Location = New System.Drawing.Point(321, 68)
        Me.lstTotals.Name = "lstTotals"
        Me.lstTotals.Size = New System.Drawing.Size(285, 303)
        Me.lstTotals.TabIndex = 0
        Me.lstTotals.TabStop = False
        '
        'btnAddHours
        '
        Me.btnAddHours.Location = New System.Drawing.Point(132, 351)
        Me.btnAddHours.Name = "btnAddHours"
        Me.btnAddHours.Size = New System.Drawing.Size(58, 38)
        Me.btnAddHours.TabIndex = 2
        Me.btnAddHours.Text = "Add Hours"
        Me.btnAddHours.UseVisualStyleBackColor = True
        '
        'btnClose
        '
        Me.btnClose.Location = New System.Drawing.Point(432, 377)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(75, 23)
        Me.btnClose.TabIndex = 3
        Me.btnClose.Text = "Close"
        Me.btnClose.UseVisualStyleBackColor = True
        '
        'lblFoodDriveHours
        '
        Me.lblFoodDriveHours.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblFoodDriveHours.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblFoodDriveHours.Location = New System.Drawing.Point(644, 170)
        Me.lblFoodDriveHours.Name = "lblFoodDriveHours"
        Me.lblFoodDriveHours.Size = New System.Drawing.Size(100, 41)
        Me.lblFoodDriveHours.TabIndex = 0
        Me.lblFoodDriveHours.Text = "0"
        Me.lblFoodDriveHours.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblMissionTripHours
        '
        Me.lblMissionTripHours.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblMissionTripHours.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblMissionTripHours.Location = New System.Drawing.Point(644, 255)
        Me.lblMissionTripHours.Name = "lblMissionTripHours"
        Me.lblMissionTripHours.Size = New System.Drawing.Size(100, 41)
        Me.lblMissionTripHours.TabIndex = 0
        Me.lblMissionTripHours.Text = "0"
        Me.lblMissionTripHours.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'lblChristmasPartyHours
        '
        Me.lblChristmasPartyHours.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.lblChristmasPartyHours.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblChristmasPartyHours.Location = New System.Drawing.Point(644, 345)
        Me.lblChristmasPartyHours.Name = "lblChristmasPartyHours"
        Me.lblChristmasPartyHours.Size = New System.Drawing.Size(100, 41)
        Me.lblChristmasPartyHours.TabIndex = 0
        Me.lblChristmasPartyHours.Text = "0"
        Me.lblChristmasPartyHours.TextAlign = System.Drawing.ContentAlignment.MiddleCenter
        '
        'frmAssignment4
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.Desktop
        Me.ClientSize = New System.Drawing.Size(800, 426)
        Me.Controls.Add(Me.lblChristmasPartyHours)
        Me.Controls.Add(Me.lblMissionTripHours)
        Me.Controls.Add(Me.lblFoodDriveHours)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(Me.btnAddHours)
        Me.Controls.Add(Me.lstTotals)
        Me.Controls.Add(Me.lstMissions)
        Me.Controls.Add(Me.txtHoursDonated)
        Me.Controls.Add(Me.lblHoursDonated)
        Me.Controls.Add(Me.lblYouthMinistryHours)
        Me.Controls.Add(Me.lblChristmasParty)
        Me.Controls.Add(Me.lblMissionTrip)
        Me.Controls.Add(Me.lblFoodDrive)
        Me.Controls.Add(Me.lblYouthMinistry)
        Me.Controls.Add(Me.lblMissionHoursHeader)
        Me.Name = "frmAssignment4"
        Me.Text = "Assignment 4"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents lblMissionHoursHeader As Label
    Friend WithEvents lblYouthMinistry As Label
    Friend WithEvents lblFoodDrive As Label
    Friend WithEvents lblMissionTrip As Label
    Friend WithEvents lblChristmasParty As Label
    Friend WithEvents lblYouthMinistryHours As Label
    Friend WithEvents lblHoursDonated As Label
    Friend WithEvents txtHoursDonated As TextBox
    Friend WithEvents lstMissions As ListBox
    Friend WithEvents lstTotals As ListBox
    Friend WithEvents btnAddHours As Button
    Friend WithEvents btnClose As Button
    Friend WithEvents lblFoodDriveHours As Label
    Friend WithEvents lblMissionTripHours As Label
    Friend WithEvents lblChristmasPartyHours As Label
End Class
