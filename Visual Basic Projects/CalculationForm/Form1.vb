'Assignment 2 - Mission Hour Calculator
'Creates a calculator to determine remaining hours for 3 missions
'Telle Miller

Public Class frmAssignment2
    Private Sub BtnCalculate_Click(sender As Object, e As EventArgs) Handles btnCalculate.Click
        'Calculates remaining hours for selected mission when clicked
        'declaring variables
        Dim inthoursworked As Integer
        Dim intnumberpeople As Integer
        Dim inthoursrequired As Integer
        Dim inttotalhoursworked As Integer

        'error checking
        If txtbHoursWorked.Text = "" Then
            MessageBox.Show("Please enter the number of hours worked.")
            txtbHoursWorked.Select()
            Return
        End If
        If txtbNumberPeople.Text = "" Then
            MessageBox.Show("Please enter the number of people who worked.")
            txtbNumberPeople.Select()
            Return
        End If

        'assign values
        Integer.TryParse(txtbHoursWorked.Text, inthoursworked)
        Integer.TryParse(txtbNumberPeople.Text, intnumberpeople)

        Select Case True
            Case radFoodPantry.Checked
                inthoursrequired = 100
            Case radYouthMinistry.Checked
                inthoursrequired = 80
            Case radMissionTrips.Checked
                inthoursrequired = 150
            Case Else
                MessageBox.Show("Please select a mission.")
                Return
        End Select

        'perform calculations
        inttotalhoursworked = intnumberpeople * inthoursworked
        txtbTotalHours.Text = inttotalhoursworked

        If inttotalhoursworked >= inthoursrequired Then
            txtbHoursRemaining.Text = 0
            MessageBox.Show("The hour requirements for this mission have been fulfilled.")
        Else
            txtbHoursRemaining.Text = inthoursrequired - inttotalhoursworked
        End If
    End Sub

    Private Sub BtnClear_Click(sender As Object, e As EventArgs) Handles btnClear.Click
        'Clears fields when clicked
        txtbHoursWorked.ResetText()
        txtbNumberPeople.ResetText()
        txtbHoursRemaining.ResetText()
        txtbTotalHours.ResetText()
        radFoodPantry.Select()
    End Sub

    Private Sub BtnClose_Click(sender As Object, e As EventArgs) Handles btnClose.Click
        'Closes application when clicked
        Close()
    End Sub
End Class
