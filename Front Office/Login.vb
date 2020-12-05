Public Class Login

    Private Sub Label2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Label2.Click

    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles BtnCancel.Click

    End Sub

    Private Sub Login_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        TxtPassword.UseSystemPasswordChar = True
    End Sub

    Private Sub BtnLogin_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles BtnLogin.Click
        If TxtUsername.Text = "" And TxtPassword.Text = "" Then
            MsgBox("Username dan Password tidak boleh kosong!", MsgBoxStyle.Exclamation, "Isi Username dan Password")
        ElseIf TxtUsername.Text = "surya" And TxtPassword.Text = "12345" Then
            MsgBox("Login Berhasil", MsgBoxStyle.Information, "Akses Berhasil")
            MainMenu.Show()
            Me.Hide()
        Else
            MsgBox("Kombinasi Username dan Password Salah", MsgBoxStyle.Critical, "Cek Username dan Password")
        End If
    End Sub
End Class
