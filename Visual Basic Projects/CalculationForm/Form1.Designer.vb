<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment2
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
        Me.grpMissions = New System.Windows.Forms.GroupBox()
        Me.radMissionTrips = New System.Windows.Forms.RadioButton()
        Me.radYouthMinistry = New System.Windows.Forms.RadioButton()
        Me.radFoodPantry = New System.Windows.Forms.RadioButton()
        Me.btnCalculate = New System.Windows.Forms.Button()
        Me.btnClose = New System.Windows.Forms.Button()
        Me.btnClear = New System.Windows.Forms.Button()
        Me.lblNumberHours = New System.Windows.Forms.Label()
        Me.txtbHoursWorked = New System.Windows.Forms.TextBox()
        Me.lblNumberPeople = New System.Windows.Forms.Label()
        Me.txtbNumberPeople = New System.Windows.Forms.TextBox()
        Me.lblTotalHours = New System.Windows.Forms.Label()
        Me.lblHoursRemaining = New System.Windows.Forms.Label()
        Me.txtbTotalHours = New System.Windows.Forms.TextBox()
        Me.txtbHoursRemaining = New System.Windows.Forms.TextBox()
        Me.grpMissions.SuspendLayout()
        Me.SuspendLayout()
        '
        'grpMissions
        '
        Me.grpMissions.Controls.Add(Me.radMissionTrips)
        Me.grpMissions.Controls.Add(Me.radYouthMinistry)
        Me.grpMissions.Controls.Add(Me.radFoodPantry)
        Me.grpMissions.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.grpMissions.Location = New System.Drawing.Point(12, 28)
        Me.grpMissions.Name = "grpMissions"
        Me.grpMissions.Size = New System.Drawing.Size(200, 100)
        Me.grpMissions.TabIndex = 0
        Me.grpMissions.TabStop = False
        Me.grpMissions.Text = "Missions"
        '
        'radMissionTrips
        '
        Me.radMissionTrips.AutoSize = True
        Me.radMissionTrips.Location = New System.Drawing.Point(6, 65)
        Me.radMissionTrips.Name = "radMissionTrips"
        Me.radMissionTrips.Size = New System.Drawing.Size(119, 20)
        Me.radMissionTrips.TabIndex = 2
        Me.radMissionTrips.TabStop = True
        Me.radMissionTrips.Text = "Mission Trips"
        Me.radMissionTrips.UseVisualStyleBackColor = True
        '
        'radYouthMinistry
        '
        Me.radYouthMinistry.AutoSize = True
        Me.radYouthMinistry.Location = New System.Drawing.Point(6, 42)
        Me.radYouthMinistry.Name = "radYouthMinistry"
        Me.radYouthMinistry.Size = New System.Drawing.Size(122, 20)
        Me.radYouthMinistry.TabIndex = 1
        Me.radYouthMinistry.TabStop = True
        Me.radYouthMinistry.Text = "Youth Ministry"
        Me.radYouthMinistry.UseVisualStyleBackColor = True
        '
        'radFoodPantry
        '
        Me.radFoodPantry.AutoSize = True
        Me.radFoodPantry.Location = New System.Drawing.Point(6, 19)
        Me.radFoodPantry.Name = "radFoodPantry"
        Me.radFoodPantry.Size = New System.Drawing.Size(110, 20)
        Me.radFoodPantry.TabIndex = 0
        Me.radFoodPantry.TabStop = True
        Me.radFoodPantry.Text = "Food Pantry"
        Me.radFoodPantry.UseVisualStyleBackColor = True
        '
        'btnCalculate
        '
        Me.btnCalculate.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnCalculate.Location = New System.Drawing.Point(223, 114)
        Me.btnCalculate.Name = "btnCalculate"
        Me.btnCalculate.Size = New System.Drawing.Size(90, 45)
        Me.btnCalculate.TabIndex = 8
        Me.btnCalculate.Text = "Calcu&late"
        Me.btnCalculate.UseVisualStyleBackColor = True
        '
        'btnClose
        '
        Me.btnClose.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnClose.Location = New System.Drawing.Point(418, 114)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(94, 45)
        Me.btnClose.TabIndex = 10
        Me.btnClose.Text = "&Close"
        Me.btnClose.UseVisualStyleBackColor = True
        '
        'btnClear
        '
        Me.btnClear.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.btnClear.Location = New System.Drawing.Point(319, 114)
        Me.btnClear.Name = "btnClear"
        Me.btnClear.Size = New System.Drawing.Size(93, 45)
        Me.btnClear.TabIndex = 9
        Me.btnClear.Text = "Cle&ar"
        Me.btnClear.UseVisualStyleBackColor = True
        '
        'lblNumberHours
        '
        Me.lblNumberHours.AutoSize = True
        Me.lblNumberHours.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblNumberHours.Location = New System.Drawing.Point(236, 28)
        Me.lblNumberHours.Name = "lblNumberHours"
        Me.lblNumberHours.Size = New System.Drawing.Size(121, 16)
        Me.lblNumberHours.TabIndex = 4
        Me.lblNumberHours.Text = "How many hours"
        Me.lblNumberHours.UseWaitCursor = True
        '
        'txtbHoursWorked
        '
        Me.txtbHoursWorked.Location = New System.Drawing.Point(246, 47)
        Me.txtbHoursWorked.Multiline = True
        Me.txtbHoursWorked.Name = "txtbHoursWorked"
        Me.txtbHoursWorked.Size = New System.Drawing.Size(94, 50)
        Me.txtbHoursWorked.TabIndex = 5
        Me.txtbHoursWorked.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'lblNumberPeople
        '
        Me.lblNumberPeople.AutoSize = True
        Me.lblNumberPeople.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblNumberPeople.Location = New System.Drawing.Point(386, 28)
        Me.lblNumberPeople.Name = "lblNumberPeople"
        Me.lblNumberPeople.Size = New System.Drawing.Size(133, 16)
        Me.lblNumberPeople.TabIndex = 6
        Me.lblNumberPeople.Text = "Number of People"
        '
        'txtbNumberPeople
        '
        Me.txtbNumberPeople.Location = New System.Drawing.Point(402, 47)
        Me.txtbNumberPeople.Multiline = True
        Me.txtbNumberPeople.Name = "txtbNumberPeople"
        Me.txtbNumberPeople.Size = New System.Drawing.Size(94, 50)
        Me.txtbNumberPeople.TabIndex = 7
        Me.txtbNumberPeople.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'lblTotalHours
        '
        Me.lblTotalHours.AutoSize = True
        Me.lblTotalHours.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblTotalHours.Location = New System.Drawing.Point(37, 197)
        Me.lblTotalHours.Name = "lblTotalHours"
        Me.lblTotalHours.Size = New System.Drawing.Size(164, 16)
        Me.lblTotalHours.TabIndex = 8
        Me.lblTotalHours.Text = "Number of Total Hours"
        '
        'lblHoursRemaining
        '
        Me.lblHoursRemaining.AutoSize = True
        Me.lblHoursRemaining.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.lblHoursRemaining.Location = New System.Drawing.Point(294, 197)
        Me.lblHoursRemaining.Name = "lblHoursRemaining"
        Me.lblHoursRemaining.Size = New System.Drawing.Size(202, 16)
        Me.lblHoursRemaining.TabIndex = 9
        Me.lblHoursRemaining.Text = "Number of Hours Remaining"
        '
        'txtbTotalHours
        '
        Me.txtbTotalHours.BackColor = System.Drawing.SystemColors.Desktop
        Me.txtbTotalHours.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtbTotalHours.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtbTotalHours.Location = New System.Drawing.Point(76, 228)
        Me.txtbTotalHours.Multiline = True
        Me.txtbTotalHours.Name = "txtbTotalHours"
        Me.txtbTotalHours.ReadOnly = True
        Me.txtbTotalHours.Size = New System.Drawing.Size(78, 26)
        Me.txtbTotalHours.TabIndex = 10
        Me.txtbTotalHours.TabStop = False
        Me.txtbTotalHours.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'txtbHoursRemaining
        '
        Me.txtbHoursRemaining.BackColor = System.Drawing.SystemColors.Desktop
        Me.txtbHoursRemaining.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle
        Me.txtbHoursRemaining.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.txtbHoursRemaining.Location = New System.Drawing.Point(352, 228)
        Me.txtbHoursRemaining.Multiline = True
        Me.txtbHoursRemaining.Name = "txtbHoursRemaining"
        Me.txtbHoursRemaining.ReadOnly = True
        Me.txtbHoursRemaining.Size = New System.Drawing.Size(78, 26)
        Me.txtbHoursRemaining.TabIndex = 11
        Me.txtbHoursRemaining.TabStop = False
        Me.txtbHoursRemaining.TextAlign = System.Windows.Forms.HorizontalAlignment.Center
        '
        'frmAssignment2
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackColor = System.Drawing.SystemColors.Desktop
        Me.ClientSize = New System.Drawing.Size(536, 269)
        Me.Controls.Add(Me.txtbHoursRemaining)
        Me.Controls.Add(Me.txtbTotalHours)
        Me.Controls.Add(Me.lblHoursRemaining)
        Me.Controls.Add(Me.lblTotalHours)
        Me.Controls.Add(Me.txtbNumberPeople)
        Me.Controls.Add(Me.lblNumberPeople)
        Me.Controls.Add(Me.txtbHoursWorked)
        Me.Controls.Add(Me.lblNumberHours)
        Me.Controls.Add(Me.btnClear)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(Me.btnCalculate)
        Me.Controls.Add(Me.grpMissions)
        Me.Name = "frmAssignment2"
        Me.RightToLeft = System.Windows.Forms.RightToLeft.No
        Me.Text = "Assignment 2"
        Me.grpMissions.ResumeLayout(False)
        Me.grpMissions.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents grpMissions As GroupBox
    Friend WithEvents radMissionTrips As RadioButton
    Friend WithEvents radYouthMinistry As RadioButton
    Friend WithEvents radFoodPantry As RadioButton
    Friend WithEvents btnCalculate As Button
    Friend WithEvents btnClose As Button
    Friend WithEvents btnClear As Button
    Friend WithEvents lblNumberHours As Label
    Friend WithEvents txtbHoursWorked As TextBox
    Friend WithEvents lblNumberPeople As Label
    Friend WithEvents txtbNumberPeople As TextBox
    Friend WithEvents lblTotalHours As Label
    Friend WithEvents lblHoursRemaining As Label
    Friend WithEvents txtbTotalHours As TextBox
    Friend WithEvents txtbHoursRemaining As TextBox
End Class
