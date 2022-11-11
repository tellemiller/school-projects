Public Class IncomeTracker
    Private m_TotalIncome As Double

    Public ReadOnly Property totalIncome() As Double
        Get
            Return m_TotalIncome
        End Get
    End Property

    Sub addIncome(ByVal income As Double)
        m_TotalIncome += income
    End Sub

    Sub addExpense(ByVal expense As Double)
        'Check to display a warning if the m_totalIncome becomes negative
        If Not m_TotalIncome < 0 And m_TotalIncome - expense < 0 Then
            MessageBox.Show("Warning: You now have a negative balance")
        End If

        m_TotalIncome -= expense
    End Sub
End Class
