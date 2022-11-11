'Assignment 6 - Income Tracker
'Telle Miller - CSIS208-B01
Public Class frmAssignment6
    Dim tracker As New IncomeTracker 'Object of created class
    Private Sub FrmAssignment6_Load(sender As Object, e As EventArgs) Handles MyBase.Load
        Dim strStartingBalance As String
        Dim dblStartingBalance As Double

        'Program will not proceed until a starting balance is entered
        Do While strStartingBalance = ""
            strStartingBalance = InputBox("Please enter a starting balance")
        Loop

        Double.TryParse(strStartingBalance, dblStartingBalance)
        tracker.addIncome(dblStartingBalance) 'Sets starting balance using IncomeTracker method

        'Appending income information to lstIncome
        lstIncome.Items.Add("Current month income")
        lstIncome.Items.Add("-----------------------------------------")
        lstIncome.Items.Add("Starting balance - " & FormatCurrency(tracker.totalIncome()))

        'Appending expense information to lstExpense
        lstExpense.Items.Add("Current month expenses")
        lstExpense.Items.Add("----------------------------------------")

        txtTotalIncome.Text = FormatCurrency(tracker.totalIncome()) 'Updates Total Income tracker
    End Sub

    Private Sub BtnEnterIncome_Click(sender As Object, e As EventArgs) Handles btnEnterIncome.Click
        Dim dblExtraIncome As Double
        Dim strIncomeName As String

        'Error checking to ensure a value is entered for the income to be added
        If txtAmount.Text = "" Then
            MessageBox.Show("Please enter the value of the income to add")
            Return
        End If

        Double.TryParse(txtAmount.Text, dblExtraIncome)
        tracker.addIncome(dblExtraIncome) 'Adds new income using class method

        'Program will not proceed until a name for the new income is added
        Do While strIncomeName = ""
            strIncomeName = InputBox("Please enter what the income is from")
        Loop

        'Updating TotalIncome tracker and lstIncome ledger
        lstIncome.Items.Add(strIncomeName & " - " & FormatCurrency(dblExtraIncome))
        txtAmount.Clear()
        txtTotalIncome.Text = FormatCurrency(tracker.totalIncome())
    End Sub

    Private Sub BtnEnterExpense_Click(sender As Object, e As EventArgs) Handles btnEnterExpense.Click
        Dim dblExtraExpense As Double
        Dim strExpenseName As String

        'Error checking to ensure a value is entered for the expense to be added
        If txtAmount.Text = "" Then
            MessageBox.Show("Please enter the value of the expense to add")
            Return
        End If

        'Program will not proceed until a name for the new expense is added
        Do While strExpenseName = ""
            strExpenseName = InputBox("Please enter what the expense is for")
        Loop

        Double.TryParse(txtAmount.Text, dblExtraExpense)
        tracker.addExpense(dblExtraExpense) 'Adds new expense using class method

        'Updating TotalIncome tracker and lstExpense ledger
        lstExpense.Items.Add(strExpenseName & " - " & FormatCurrency(dblExtraExpense))
        txtAmount.Clear()
        txtTotalIncome.Text = FormatCurrency(tracker.totalIncome())
    End Sub
End Class
