'Assignment 7 - Database Interface
'Telle Miller - CSIS 208-B02
Public Class frmAssignment7
    Private Sub DonationsBindingNavigatorSaveItem_Click(sender As Object, e As EventArgs) Handles DonationsBindingNavigatorSaveItem.Click
        'Trys to save changes to database, prints exception information if it fails
        Try
            Me.Validate()
            Me.DonationsBindingSource.EndEdit()
            Me.TableAdapterManager.UpdateAll(Me.TCMDonationsDataSet)
            MessageBox.Show("Changes saved.", "Save Success", MessageBoxButtons.OK, MessageBoxIcon.Information)
        Catch ex As Exception
            MessageBox.Show(ex.Message, "Save Error", MessageBoxButtons.OK, MessageBoxIcon.Error)
        End Try
    End Sub

    Private Sub frmAssignment7_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Me.DonationsTableAdapter.Fill(Me.TCMDonationsDataSet.Donations) 'Loads all data from Table into form
    End Sub

    Private Sub btnClose_Click(sender As Object, e As EventArgs) Handles btnClose.Click 'Closes application
        Close()
    End Sub

    Private Sub btnFilter_Click(sender As Object, e As EventArgs) Handles btnFilter.Click 'Uses SQL query to only shows results with donations > $50
        Me.DonationsTableAdapter.FillBy(Me.TCMDonationsDataSet.Donations)
    End Sub
End Class
