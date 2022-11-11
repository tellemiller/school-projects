'Assignment 5 - Member Tracking Application
'Application to open, create, and edit text files
'Telle Miller
Public Class frmAssignment5
    Dim strMemberFile As String 'global variable for target filename
    Private Function RefreshList() 'function to update ListBox and counting Label
        lstMembers.DataSource = IO.File.ReadAllLines(strMemberFile)
        lstMembers.SelectedIndex = -1

        txtCount.Text = lstMembers.Items.Count
    End Function

    Private Sub MnuExit_Click(sender As Object, e As EventArgs) Handles mnuExit.Click 'exits program
        Close()
    End Sub

    Private Sub FrmAssignment5_Load(sender As Object, e As EventArgs) Handles MyBase.Load 'sub called on form load, sets default filename
        strMemberFile = "Youth_Members.txt"
        RefreshList()
    End Sub

    Private Sub MnuAscending_Click(sender As Object, e As EventArgs) Handles mnuAscending.Click 'sorts file in ascending order
        Dim ascendQuery = From member In IO.File.ReadAllLines(strMemberFile)
                          Order By member Ascending
                          Select member
        lstMembers.DataSource = ascendQuery.ToList()
    End Sub

    Private Sub MnuDescending_Click(sender As Object, e As EventArgs) Handles mnuDescending.Click 'sorts file in descending order
        Dim descendQuery = From member In IO.File.ReadAllLines(strMemberFile)
                           Order By member Descending
                           Select member
        lstMembers.DataSource = descendQuery.ToList()
    End Sub

    Private Sub MnuAddMember_Click(sender As Object, e As EventArgs) Handles mnuAddMember.Click 'adds new member line item to text file
        Dim newMember As String = InputBox("Please enter the new member name")

        'exits sub if provided input is empty string
        If newMember = "" Then
            MessageBox.Show("Please enter the name of the member.")
            Return
        End If

        'adds input to text file using StreamWriter object
        Dim sw As IO.StreamWriter
        sw = IO.File.AppendText(strMemberFile)
        sw.WriteLine(newMember)
        sw.Close()

        RefreshList()
    End Sub

    Private Sub MnuDeleteMember_Click(sender As Object, e As EventArgs) Handles mnuDeleteMember.Click 'deletes member line item from text file
        'exits sub if a member is not selected for deletion
        If lstMembers.SelectedIndex = -1 Then
            MessageBox.Show("You must select a member to delete.")
            Return
        End If

        Dim deleteMember As String = lstMembers.SelectedItem
        Dim deleteQuery = From member In IO.File.ReadAllLines(strMemberFile)
                          Where member <> deleteMember
                          Select member

        IO.File.WriteAllLines(strMemberFile, deleteQuery)
        RefreshList()
    End Sub

    Private Sub MnuCreateFile_Click(sender As Object, e As EventArgs) Handles mnuCreateFile.Click 'creates a new .txt file or opens a previously existing one
        Dim newFileCreate = InputBox("Please enter the name of the new file")

        'exits sub if provided file name is an empty string
        If newFileCreate = "" Then
            MessageBox.Show("Please enter a name for the new file.")
            Return
        End If

        strMemberFile = newFileCreate & ".txt"

        'if specified file name does not exist, then create the file
        If Not IO.File.Exists(strMemberFile) Then
            Dim sw As IO.StreamWriter = IO.File.CreateText(strMemberFile)
            sw.Close()
        End If

        'if the file name already exists, the named file will be loaded instead of created
        RefreshList()
    End Sub
End Class
