'Assignment 4 - Mission Hour Tracker, Updated
'Creates an application to track hours donated for 4 given missions
'Telle Miller

Public Class frmAssignment4
    Dim missions() As String = {"Youth Ministry", "Food Drive", "Mission Trip", "Christmas Party"}

    Private Sub FrmAssignment4_Load(sender As Object, e As EventArgs) Handles MyBase.Load 'function called on application load to handle setup
        'clears lstTotals ListBox
        lstTotals.Items.Clear()

        'loads missions to lstMissions ListBox
        For i As Integer = 0 To missions.Count - 1
            lstMissions.Items.Add(missions(i))
        Next

        'adding identifying information to lstTotals ListBox
        lstTotals.Items.Add("Hour Recording for 10/03/2021")
        lstTotals.Items.Add("Hours Recorded by Telle Miller")
        lstTotals.Items.Add("_______________________________")
    End Sub

    Private Sub BtnAddHours_Click(sender As Object, e As EventArgs) Handles btnAddHours.Click 'function called to add hours to a specific mission
        Dim intHoursDonated As Integer
        Dim strMission As String

        'array to track hours
        Static intTotalHours(3) As Integer

        'error checking
        If txtHoursDonated.Text = "" Then
            MessageBox.Show("Please enter the number of hours worked.")
            txtHoursDonated.Select()
            Return
        End If
        If lstMissions.SelectedIndex = -1 Then
            MessageBox.Show("Please select a mission to add hours to.")
            lstMissions.Select()
            Return
        End If

        'converting hours donated from string to integer
        strMission = lstMissions.SelectedItem
        Integer.TryParse(txtHoursDonated.Text, intHoursDonated)

        'receiving name of donator, references GetLastName() function
        Dim strName As String = InputBox("Please enter the name of the person who served")
        lstTotals.Items.Add(GetLastName(strName) & "- Served " & intHoursDonated & " hours")
        lstTotals.Items.Add("")

        'adding donated hours to running totals and updating labels
        intTotalHours(lstMissions.SelectedIndex) += intHoursDonated
        lblYouthMinistryHours.Text = intTotalHours(0).ToString
        lblFoodDriveHours.Text = intTotalHours(1).ToString
        lblMissionTripHours.Text = intTotalHours(2).ToString
        lblChristmasPartyHours.Text = intTotalHours(3).ToString

        'clearing fields for next entry
        txtHoursDonated.Clear()
        lstMissions.ClearSelected()
    End Sub

    Private Sub BtnClose_Click(sender As Object, e As EventArgs) Handles btnClose.Click
        'Closes application when clicked
        Close()
    End Sub

    Private Function GetLastName(ByVal name As String) As String 'returns last name given a string in "FirstName LastName" format. Space character is required
        Return name.Substring(name.IndexOf(" ") + 1)
    End Function
End Class
