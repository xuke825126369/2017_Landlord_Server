﻿<%@ Page Title="" Language="C#" MasterPageFile="~/appaspx/stat/StatCommonCrocodile.master" AutoEventWireup="true" CodeBehind="StatCrocodile.aspx.cs" Inherits="WebManager.appaspx.stat.StatCrocodile" %>
<asp:Content ID="Content1" ContentPlaceHolderID="StatCommonCrocodile_HeadContent" runat="server">
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="StatCommonCrocodile_Content" runat="server">
    <div class="cSafeWidth">
        <h2>鳄鱼大亨参数调整</h2>
        <asp:Table ID="m_expRateTable" runat="server" CssClass="cTable">
        </asp:Table>
        <p>
            期望盈利率:<asp:TextBox ID="m_expRate" runat="server" style="width:100px;height:25px"></asp:TextBox>
        </p>
        <asp:Button ID="Button3" runat="server" Text="修改期望盈利率" onclick="onModifyExpRate" style="width:125px;height:25px"/>
        <asp:Button ID="Button1" runat="server" Text="重置" onclick="onReset" style="width:125px;height:25px"/>
        <span id="m_res" style="font-size:medium;color:red" runat="server"></span>
    </div>
</asp:Content>
