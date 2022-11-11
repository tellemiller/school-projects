<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class frmAssignment7
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
        Me.components = New System.ComponentModel.Container()
        Dim lblID As System.Windows.Forms.Label
        Dim lblFirstName As System.Windows.Forms.Label
        Dim lblLastName As System.Windows.Forms.Label
        Dim lblAmount As System.Windows.Forms.Label
        Dim lblDonation As System.Windows.Forms.Label
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(frmAssignment7))
        Me.DonationsBindingNavigator = New System.Windows.Forms.BindingNavigator(Me.components)
        Me.BindingNavigatorAddNewItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorCountItem = New System.Windows.Forms.ToolStripLabel()
        Me.BindingNavigatorDeleteItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMoveFirstItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMovePreviousItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorSeparator = New System.Windows.Forms.ToolStripSeparator()
        Me.BindingNavigatorPositionItem = New System.Windows.Forms.ToolStripTextBox()
        Me.BindingNavigatorSeparator1 = New System.Windows.Forms.ToolStripSeparator()
        Me.BindingNavigatorMoveNextItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorMoveLastItem = New System.Windows.Forms.ToolStripButton()
        Me.BindingNavigatorSeparator2 = New System.Windows.Forms.ToolStripSeparator()
        Me.DonationsBindingNavigatorSaveItem = New System.Windows.Forms.ToolStripButton()
        Me.txtID = New System.Windows.Forms.TextBox()
        Me.txtFirstName = New System.Windows.Forms.TextBox()
        Me.txtLastName = New System.Windows.Forms.TextBox()
        Me.txtAmount = New System.Windows.Forms.TextBox()
        Me.dtpDate = New System.Windows.Forms.DateTimePicker()
        Me.btnClose = New System.Windows.Forms.Button()
        Me.btnFilter = New System.Windows.Forms.Button()
        Me.DonationsBindingSource = New System.Windows.Forms.BindingSource(Me.components)
        Me.TCMDonationsDataSet = New Assignment7_TCM.TCMDonationsDataSet()
        Me.DonationsTableAdapter = New Assignment7_TCM.TCMDonationsDataSetTableAdapters.DonationsTableAdapter()
        Me.TableAdapterManager = New Assignment7_TCM.TCMDonationsDataSetTableAdapters.TableAdapterManager()
        lblID = New System.Windows.Forms.Label()
        lblFirstName = New System.Windows.Forms.Label()
        lblLastName = New System.Windows.Forms.Label()
        lblAmount = New System.Windows.Forms.Label()
        lblDonation = New System.Windows.Forms.Label()
        CType(Me.DonationsBindingNavigator, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.DonationsBindingNavigator.SuspendLayout()
        CType(Me.DonationsBindingSource, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.TCMDonationsDataSet, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'lblID
        '
        lblID.AutoSize = True
        lblID.BackColor = System.Drawing.SystemColors.ActiveCaptionText
        lblID.ForeColor = System.Drawing.SystemColors.ButtonFace
        lblID.Location = New System.Drawing.Point(31, 73)
        lblID.Name = "lblID"
        lblID.Size = New System.Drawing.Size(21, 13)
        lblID.TabIndex = 1
        lblID.Text = "ID:"
        '
        'lblFirstName
        '
        lblFirstName.AutoSize = True
        lblFirstName.BackColor = System.Drawing.SystemColors.ActiveCaptionText
        lblFirstName.ForeColor = System.Drawing.SystemColors.ButtonHighlight
        lblFirstName.Location = New System.Drawing.Point(31, 99)
        lblFirstName.Name = "lblFirstName"
        lblFirstName.Size = New System.Drawing.Size(60, 13)
        lblFirstName.TabIndex = 3
        lblFirstName.Text = "First Name:"
        '
        'lblLastName
        '
        lblLastName.AutoSize = True
        lblLastName.BackColor = System.Drawing.SystemColors.ActiveCaptionText
        lblLastName.ForeColor = System.Drawing.SystemColors.ButtonHighlight
        lblLastName.Location = New System.Drawing.Point(31, 125)
        lblLastName.Name = "lblLastName"
        lblLastName.Size = New System.Drawing.Size(61, 13)
        lblLastName.TabIndex = 5
        lblLastName.Text = "Last Name:"
        '
        'lblAmount
        '
        lblAmount.AutoSize = True
        lblAmount.BackColor = System.Drawing.SystemColors.ActiveCaptionText
        lblAmount.ForeColor = System.Drawing.SystemColors.ButtonFace
        lblAmount.Location = New System.Drawing.Point(31, 151)
        lblAmount.Name = "lblAmount"
        lblAmount.Size = New System.Drawing.Size(46, 13)
        lblAmount.TabIndex = 7
        lblAmount.Text = "Amount:"
        '
        'lblDonation
        '
        lblDonation.AutoSize = True
        lblDonation.BackColor = System.Drawing.SystemColors.ActiveCaptionText
        lblDonation.ForeColor = System.Drawing.SystemColors.ButtonFace
        lblDonation.Location = New System.Drawing.Point(31, 178)
        lblDonation.Name = "lblDonation"
        lblDonation.Size = New System.Drawing.Size(79, 13)
        lblDonation.TabIndex = 9
        lblDonation.Text = "Donation Date:"
        '
        'DonationsBindingNavigator
        '
        Me.DonationsBindingNavigator.AddNewItem = Me.BindingNavigatorAddNewItem
        Me.DonationsBindingNavigator.BindingSource = Me.DonationsBindingSource
        Me.DonationsBindingNavigator.CountItem = Me.BindingNavigatorCountItem
        Me.DonationsBindingNavigator.DeleteItem = Me.BindingNavigatorDeleteItem
        Me.DonationsBindingNavigator.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.BindingNavigatorMoveFirstItem, Me.BindingNavigatorMovePreviousItem, Me.BindingNavigatorSeparator, Me.BindingNavigatorPositionItem, Me.BindingNavigatorCountItem, Me.BindingNavigatorSeparator1, Me.BindingNavigatorMoveNextItem, Me.BindingNavigatorMoveLastItem, Me.BindingNavigatorSeparator2, Me.BindingNavigatorAddNewItem, Me.BindingNavigatorDeleteItem, Me.DonationsBindingNavigatorSaveItem})
        Me.DonationsBindingNavigator.Location = New System.Drawing.Point(0, 0)
        Me.DonationsBindingNavigator.MoveFirstItem = Me.BindingNavigatorMoveFirstItem
        Me.DonationsBindingNavigator.MoveLastItem = Me.BindingNavigatorMoveLastItem
        Me.DonationsBindingNavigator.MoveNextItem = Me.BindingNavigatorMoveNextItem
        Me.DonationsBindingNavigator.MovePreviousItem = Me.BindingNavigatorMovePreviousItem
        Me.DonationsBindingNavigator.Name = "DonationsBindingNavigator"
        Me.DonationsBindingNavigator.PositionItem = Me.BindingNavigatorPositionItem
        Me.DonationsBindingNavigator.Size = New System.Drawing.Size(440, 25)
        Me.DonationsBindingNavigator.TabIndex = 0
        Me.DonationsBindingNavigator.Text = "BindingNavigator1"
        '
        'BindingNavigatorAddNewItem
        '
        Me.BindingNavigatorAddNewItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorAddNewItem.Image = CType(resources.GetObject("BindingNavigatorAddNewItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorAddNewItem.Name = "BindingNavigatorAddNewItem"
        Me.BindingNavigatorAddNewItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorAddNewItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorAddNewItem.Text = "Add new"
        '
        'BindingNavigatorCountItem
        '
        Me.BindingNavigatorCountItem.Name = "BindingNavigatorCountItem"
        Me.BindingNavigatorCountItem.Size = New System.Drawing.Size(35, 22)
        Me.BindingNavigatorCountItem.Text = "of {0}"
        Me.BindingNavigatorCountItem.ToolTipText = "Total number of items"
        '
        'BindingNavigatorDeleteItem
        '
        Me.BindingNavigatorDeleteItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorDeleteItem.Image = CType(resources.GetObject("BindingNavigatorDeleteItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorDeleteItem.Name = "BindingNavigatorDeleteItem"
        Me.BindingNavigatorDeleteItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorDeleteItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorDeleteItem.Text = "Delete"
        '
        'BindingNavigatorMoveFirstItem
        '
        Me.BindingNavigatorMoveFirstItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveFirstItem.Image = CType(resources.GetObject("BindingNavigatorMoveFirstItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveFirstItem.Name = "BindingNavigatorMoveFirstItem"
        Me.BindingNavigatorMoveFirstItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveFirstItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMoveFirstItem.Text = "Move first"
        '
        'BindingNavigatorMovePreviousItem
        '
        Me.BindingNavigatorMovePreviousItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMovePreviousItem.Image = CType(resources.GetObject("BindingNavigatorMovePreviousItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMovePreviousItem.Name = "BindingNavigatorMovePreviousItem"
        Me.BindingNavigatorMovePreviousItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMovePreviousItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMovePreviousItem.Text = "Move previous"
        '
        'BindingNavigatorSeparator
        '
        Me.BindingNavigatorSeparator.Name = "BindingNavigatorSeparator"
        Me.BindingNavigatorSeparator.Size = New System.Drawing.Size(6, 25)
        '
        'BindingNavigatorPositionItem
        '
        Me.BindingNavigatorPositionItem.AccessibleName = "Position"
        Me.BindingNavigatorPositionItem.AutoSize = False
        Me.BindingNavigatorPositionItem.Font = New System.Drawing.Font("Segoe UI", 9.0!)
        Me.BindingNavigatorPositionItem.Name = "BindingNavigatorPositionItem"
        Me.BindingNavigatorPositionItem.Size = New System.Drawing.Size(50, 23)
        Me.BindingNavigatorPositionItem.Text = "0"
        Me.BindingNavigatorPositionItem.ToolTipText = "Current position"
        '
        'BindingNavigatorSeparator1
        '
        Me.BindingNavigatorSeparator1.Name = "BindingNavigatorSeparator1"
        Me.BindingNavigatorSeparator1.Size = New System.Drawing.Size(6, 25)
        '
        'BindingNavigatorMoveNextItem
        '
        Me.BindingNavigatorMoveNextItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveNextItem.Image = CType(resources.GetObject("BindingNavigatorMoveNextItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveNextItem.Name = "BindingNavigatorMoveNextItem"
        Me.BindingNavigatorMoveNextItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveNextItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMoveNextItem.Text = "Move next"
        '
        'BindingNavigatorMoveLastItem
        '
        Me.BindingNavigatorMoveLastItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.BindingNavigatorMoveLastItem.Image = CType(resources.GetObject("BindingNavigatorMoveLastItem.Image"), System.Drawing.Image)
        Me.BindingNavigatorMoveLastItem.Name = "BindingNavigatorMoveLastItem"
        Me.BindingNavigatorMoveLastItem.RightToLeftAutoMirrorImage = True
        Me.BindingNavigatorMoveLastItem.Size = New System.Drawing.Size(23, 22)
        Me.BindingNavigatorMoveLastItem.Text = "Move last"
        '
        'BindingNavigatorSeparator2
        '
        Me.BindingNavigatorSeparator2.Name = "BindingNavigatorSeparator2"
        Me.BindingNavigatorSeparator2.Size = New System.Drawing.Size(6, 25)
        '
        'DonationsBindingNavigatorSaveItem
        '
        Me.DonationsBindingNavigatorSaveItem.DisplayStyle = System.Windows.Forms.ToolStripItemDisplayStyle.Image
        Me.DonationsBindingNavigatorSaveItem.Image = CType(resources.GetObject("DonationsBindingNavigatorSaveItem.Image"), System.Drawing.Image)
        Me.DonationsBindingNavigatorSaveItem.Name = "DonationsBindingNavigatorSaveItem"
        Me.DonationsBindingNavigatorSaveItem.Size = New System.Drawing.Size(23, 22)
        Me.DonationsBindingNavigatorSaveItem.Text = "Save Data"
        '
        'txtID
        '
        Me.txtID.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.DonationsBindingSource, "ID", True))
        Me.txtID.Location = New System.Drawing.Point(116, 70)
        Me.txtID.Name = "txtID"
        Me.txtID.Size = New System.Drawing.Size(200, 20)
        Me.txtID.TabIndex = 2
        '
        'txtFirstName
        '
        Me.txtFirstName.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.DonationsBindingSource, "FirstName", True))
        Me.txtFirstName.Location = New System.Drawing.Point(116, 96)
        Me.txtFirstName.Name = "txtFirstName"
        Me.txtFirstName.Size = New System.Drawing.Size(200, 20)
        Me.txtFirstName.TabIndex = 4
        '
        'txtLastName
        '
        Me.txtLastName.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.DonationsBindingSource, "LastName", True))
        Me.txtLastName.Location = New System.Drawing.Point(116, 122)
        Me.txtLastName.Name = "txtLastName"
        Me.txtLastName.Size = New System.Drawing.Size(200, 20)
        Me.txtLastName.TabIndex = 6
        '
        'txtAmount
        '
        Me.txtAmount.DataBindings.Add(New System.Windows.Forms.Binding("Text", Me.DonationsBindingSource, "Amount", True, System.Windows.Forms.DataSourceUpdateMode.OnValidation, Nothing, "C2"))
        Me.txtAmount.Location = New System.Drawing.Point(116, 148)
        Me.txtAmount.Name = "txtAmount"
        Me.txtAmount.Size = New System.Drawing.Size(200, 20)
        Me.txtAmount.TabIndex = 8
        '
        'dtpDate
        '
        Me.dtpDate.DataBindings.Add(New System.Windows.Forms.Binding("Value", Me.DonationsBindingSource, "DonationDate", True))
        Me.dtpDate.Location = New System.Drawing.Point(116, 174)
        Me.dtpDate.Name = "dtpDate"
        Me.dtpDate.Size = New System.Drawing.Size(200, 20)
        Me.dtpDate.TabIndex = 10
        '
        'btnClose
        '
        Me.btnClose.BackColor = System.Drawing.SystemColors.ActiveCaptionText
        Me.btnClose.ForeColor = System.Drawing.SystemColors.ButtonHighlight
        Me.btnClose.Location = New System.Drawing.Point(338, 86)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(87, 39)
        Me.btnClose.TabIndex = 11
        Me.btnClose.Text = "Close"
        Me.btnClose.UseVisualStyleBackColor = False
        '
        'btnFilter
        '
        Me.btnFilter.BackColor = System.Drawing.SystemColors.ActiveCaptionText
        Me.btnFilter.ForeColor = System.Drawing.SystemColors.ButtonHighlight
        Me.btnFilter.Location = New System.Drawing.Point(338, 138)
        Me.btnFilter.Name = "btnFilter"
        Me.btnFilter.Size = New System.Drawing.Size(87, 39)
        Me.btnFilter.TabIndex = 12
        Me.btnFilter.Text = "Filter"
        Me.btnFilter.UseVisualStyleBackColor = False
        '
        'DonationsBindingSource
        '
        Me.DonationsBindingSource.DataMember = "Donations"
        Me.DonationsBindingSource.DataSource = Me.TCMDonationsDataSet
        '
        'TCMDonationsDataSet
        '
        Me.TCMDonationsDataSet.DataSetName = "TCMDonationsDataSet"
        Me.TCMDonationsDataSet.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema
        '
        'DonationsTableAdapter
        '
        Me.DonationsTableAdapter.ClearBeforeFill = True
        '
        'TableAdapterManager
        '
        Me.TableAdapterManager.BackupDataSetBeforeUpdate = False
        Me.TableAdapterManager.DonationsTableAdapter = Me.DonationsTableAdapter
        Me.TableAdapterManager.UpdateOrder = Assignment7_TCM.TCMDonationsDataSetTableAdapters.TableAdapterManager.UpdateOrderOption.InsertUpdateDelete
        '
        'frmAssignment7
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.BackgroundImage = Global.Assignment7_TCM.My.Resources.Resources.clouds
        Me.ClientSize = New System.Drawing.Size(440, 263)
        Me.Controls.Add(Me.btnFilter)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(lblID)
        Me.Controls.Add(Me.txtID)
        Me.Controls.Add(lblFirstName)
        Me.Controls.Add(Me.txtFirstName)
        Me.Controls.Add(lblLastName)
        Me.Controls.Add(Me.txtLastName)
        Me.Controls.Add(lblAmount)
        Me.Controls.Add(Me.txtAmount)
        Me.Controls.Add(lblDonation)
        Me.Controls.Add(Me.dtpDate)
        Me.Controls.Add(Me.DonationsBindingNavigator)
        Me.Name = "frmAssignment7"
        Me.Text = "Assignment 7"
        CType(Me.DonationsBindingNavigator, System.ComponentModel.ISupportInitialize).EndInit()
        Me.DonationsBindingNavigator.ResumeLayout(False)
        Me.DonationsBindingNavigator.PerformLayout()
        CType(Me.DonationsBindingSource, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.TCMDonationsDataSet, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub

    Friend WithEvents TCMDonationsDataSet As TCMDonationsDataSet
    Friend WithEvents DonationsBindingSource As BindingSource
    Friend WithEvents DonationsTableAdapter As TCMDonationsDataSetTableAdapters.DonationsTableAdapter
    Friend WithEvents TableAdapterManager As TCMDonationsDataSetTableAdapters.TableAdapterManager
    Friend WithEvents DonationsBindingNavigator As BindingNavigator
    Friend WithEvents BindingNavigatorAddNewItem As ToolStripButton
    Friend WithEvents BindingNavigatorCountItem As ToolStripLabel
    Friend WithEvents BindingNavigatorDeleteItem As ToolStripButton
    Friend WithEvents BindingNavigatorMoveFirstItem As ToolStripButton
    Friend WithEvents BindingNavigatorMovePreviousItem As ToolStripButton
    Friend WithEvents BindingNavigatorSeparator As ToolStripSeparator
    Friend WithEvents BindingNavigatorPositionItem As ToolStripTextBox
    Friend WithEvents BindingNavigatorSeparator1 As ToolStripSeparator
    Friend WithEvents BindingNavigatorMoveNextItem As ToolStripButton
    Friend WithEvents BindingNavigatorMoveLastItem As ToolStripButton
    Friend WithEvents BindingNavigatorSeparator2 As ToolStripSeparator
    Friend WithEvents DonationsBindingNavigatorSaveItem As ToolStripButton
    Friend WithEvents txtID As TextBox
    Friend WithEvents txtFirstName As TextBox
    Friend WithEvents txtLastName As TextBox
    Friend WithEvents txtAmount As TextBox
    Friend WithEvents dtpDate As DateTimePicker
    Friend WithEvents btnClose As Button
    Friend WithEvents btnFilter As Button
End Class
