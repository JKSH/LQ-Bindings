<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="14008000">
	<Property Name="NI.LV.All.SourceOnly" Type="Bool">true</Property>
	<Property Name="NI.Project.Description" Type="Str">Showcases the API for manipulating the Windows task bar.</Property>
	<Property Name="ThirdParty.LV.ExampleFinder" Type="Str">&lt;?xml version="1.0" encoding="UTF-8"?&gt;
&lt;nidna:ExampleProgram 
    xmlns:nidna="http://www.ni.com/Schemas/DNA/1.0" 
    xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" 
    xsi:schemaLocation="http://www.ni.com/Schemas/DNA/1.0 ..\DNA\1.0\NiExampleProgram.xsd" 
    SchemaVersion="1.0" 
    ContentType="EXAMPLE" 
&lt;Title&gt;
	&lt;Text Locale="US"&gt;Windows Taskbar Integration.lvproj&lt;/Text&gt;
&lt;/Title&gt;
&lt;Description&gt;
	&lt;Text Locale="US"&gt;Showcases the API for manipulating the Windows task bar.&lt;/Text&gt;
&lt;/Description&gt;
&lt;Keywords&gt;
	&lt;Item&gt;LQ&lt;/Item&gt;
	&lt;Item&gt;Qt&lt;/Item&gt;
	&lt;Item&gt;GUI&lt;/Item&gt;
&lt;/Keywords&gt;
&lt;Navigation&gt;
	&lt;Item&gt;3755&lt;/Item&gt;
&lt;/Navigation&gt;
&lt;FileType&gt;LV Project&lt;/FileType&gt;
&lt;Metadata&gt;
&lt;Item Name="RTSupport"&gt;&lt;/Item&gt;
&lt;/Metadata&gt;
&lt;ProgrammingLanguages&gt;
&lt;Item&gt;LabVIEW&lt;/Item&gt;
&lt;/ProgrammingLanguages&gt;
&lt;RequiredSoftware&gt;
&lt;NiSoftware MinVersion="14.0"&gt;LabVIEW&lt;/NiSoftware&gt; 
&lt;/RequiredSoftware&gt;</Property>
	<Item Name="My Computer" Type="My Computer">
		<Property Name="NI.SortType" Type="Int">1</Property>
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="Resources" Type="Folder">
			<Item Name="pause.png" Type="Document" URL="../Resources/pause.png"/>
			<Item Name="play.png" Type="Document" URL="../Resources/play.png"/>
			<Item Name="README.txt" Type="Document" URL="../Resources/README.txt"/>
			<Item Name="refresh.png" Type="Document" URL="../Resources/refresh.png"/>
			<Item Name="stop.png" Type="Document" URL="../Resources/stop.png"/>
		</Item>
		<Item Name="Command.ctl" Type="VI" URL="../Source/Command.ctl"/>
		<Item Name="Main.vi" Type="VI" URL="../Source/Main.vi"/>
		<Item Name="State.ctl" Type="VI" URL="../Source/State.ctl"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Application Directory.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Application Directory.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="eventsource.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventsource.ctl"/>
				<Item Name="Get LV Class Name.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/LVClass/Get LV Class Name.vi"/>
				<Item Name="LQ Core.lvlib" Type="Library" URL="/&lt;vilib&gt;/addons/LQ/LQ Core/LQ Core.lvlib"/>
				<Item Name="LVNumericRepresentation.ctl" Type="VI" URL="/&lt;vilib&gt;/numeric/LVNumericRepresentation.ctl"/>
				<Item Name="NI_FileType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/lvfile.llb/NI_FileType.lvlib"/>
				<Item Name="QAction.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QAction/QAction.lvclass"/>
				<Item Name="QFont.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QFont/QFont.lvclass"/>
				<Item Name="QFrame.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QFrame/QFrame.lvclass"/>
				<Item Name="QIcon.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QIcon/QIcon.lvclass"/>
				<Item Name="QLabel.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QLabel/QLabel.lvclass"/>
				<Item Name="QLayout.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QLayout/QLayout.lvclass"/>
				<Item Name="QPixmap.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QPixmap/QPixmap.lvclass"/>
				<Item Name="QRect.ctl" Type="VI" URL="/&lt;vilib&gt;/addons/LQ/LQ Core/QRect.ctl"/>
				<Item Name="QScreen.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QScreen/QScreen.lvclass"/>
				<Item Name="QSize.ctl" Type="VI" URL="/&lt;vilib&gt;/addons/LQ/LQ Core/QSize.ctl"/>
				<Item Name="Qt.lvlib" Type="Library" URL="/&lt;vilib&gt;/addons/LQ/LQ Core/Qt/Qt.lvlib"/>
				<Item Name="QWidget.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QWidget/QWidget.lvclass"/>
				<Item Name="QWindow.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QWindow/QWindow.lvclass"/>
				<Item Name="QWinTaskbarButton.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Windows Extras/QWinTaskbarButton/QWinTaskbarButton.lvclass"/>
				<Item Name="QWinTaskbarProgress.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Windows Extras/QWinTaskbarProgress/QWinTaskbarProgress.lvclass"/>
				<Item Name="QWinThumbnailToolBar.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Windows Extras/QWinThumbnailToolBar/QWinThumbnailToolBar.lvclass"/>
				<Item Name="QWinThumbnailToolButton.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Windows Extras/QWinThumbnailToolButton/QWinThumbnailToolButton.lvclass"/>
				<Item Name="VariantType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/VariantDataType/VariantType.lvlib"/>
			</Item>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
