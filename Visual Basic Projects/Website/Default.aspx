<%@ Page Title="Home Page" Language="VB" MasterPageFile="~/Site.Master" AutoEventWireup="true" CodeBehind="Default.aspx.vb" Inherits="Assignment8_TCM._Default" %>

<asp:Content ID="BodyContent" ContentPlaceHolderID="MainContent" runat="server">
    
    <div style="width:960px; margin:0 auto;">
        <h1>All about me</h1><hr>
        <p>Hello! This webpage is a project created for my CSIS 208 course at Liberty University. You can find information about me, my favorite bible verse, and an inspiring missionary using the links above.</p>
        <asp:Image ID="Image1" runat="server" ImageUrl="~/texas_image.jpg" ImageAlign="Middle" Height="350" Width="960" />
        <hr><p>The image above is of beautiful Austin, Texas, where I currently reside.</p>
    </div>
</asp:Content>
