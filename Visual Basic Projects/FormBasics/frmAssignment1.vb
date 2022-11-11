'Assignment 1 - Create a basic form to display information about a missionary
'Telle Miller
Public Class frmAssignment1
    Private Sub MissionaryButton_Click(sender As Object, e As EventArgs) Handles missionaryButton.Click
        'Makes missionary image and missionary info visible
        picMissionary.Visible = True
        lblMissions.Visible = True
    End Sub

    Private Sub CloseButton_Click(sender As Object, e As EventArgs) Handles closeButton.Click
        'Closes form when clicked
        Close()
    End Sub
End Class
