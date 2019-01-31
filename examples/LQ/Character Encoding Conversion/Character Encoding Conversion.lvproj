<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="14008000">
	<Property Name="NI.LV.All.SourceOnly" Type="Bool">true</Property>
	<Property Name="NI.Project.Description" Type="Str">By default, LabVIEW assumes that all textual data is encoded according to your system locale. As a result, for example, a Japanese version of LabVIEW cannot properly display Thai text. In contrast, LQ assumes that all textual data is encoded in UTF-8, which supports the most of the languages in use today.

You can use a text codec to convert text from a non-local encoding to UTF-8, and vice-versa.


&lt;b&gt;Showcase&lt;/b&gt;
- Ability to parse text from a variety of encodings.</Property>
	<Property Name="ThirdParty.LV.ExampleFinder" Type="Str">&lt;?xml version="1.0" encoding="UTF-8"?&gt;
&lt;nidna:ExampleProgram 
    xmlns:nidna="http://www.ni.com/Schemas/DNA/1.0" 
    xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" 
    xsi:schemaLocation="http://www.ni.com/Schemas/DNA/1.0 ..\DNA\1.0\NiExampleProgram.xsd" 
    SchemaVersion="1.0" 
    ContentType="EXAMPLE" 
&lt;Title&gt;
	&lt;Text Locale="US"&gt;Character Encoding Conversion.lvproj&lt;/Text&gt;
&lt;/Title&gt;
&lt;Description&gt;
	&lt;Text Locale="US"&gt;By default, LabVIEW assumes that all textual data is encoded according to your system locale. As a result, for example, a Japanese version of LabVIEW cannot properly display Thai text. In contrast, LQ assumes that all textual data is encoded in UTF-8, which supports the most of the languages in use today.

You can use a text codec to convert text from a non-local encoding to UTF-8, and vice-versa.


&lt;b&gt;Showcase&lt;/b&gt;
- Ability to parse text from a variety of encodings.&lt;/Text&gt;
&lt;/Description&gt;
&lt;Keywords&gt;
	&lt;Item&gt;LQ&lt;/Item&gt;
	&lt;Item&gt;Qt&lt;/Item&gt;
	&lt;Item&gt;translation&lt;/Item&gt;
	&lt;Item&gt;localization&lt;/Item&gt;
	&lt;Item&gt;internationalization&lt;/Item&gt;
	&lt;Item&gt;i18n&lt;/Item&gt;
	&lt;Item&gt;Unicode&lt;/Item&gt;
	&lt;Item&gt;UTF-8&lt;/Item&gt;
&lt;/Keywords&gt;
&lt;Navigation&gt;
	&lt;Item&gt;3155&lt;/Item&gt;
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
			<Item Name="English.utf-8" Type="Document" URL="../Resources/English.utf-8"/>
			<Item Name="Japanese.shift-jis" Type="Document" URL="../Resources/Japanese.shift-jis"/>
			<Item Name="Japanese.utf-8" Type="Document" URL="../Resources/Japanese.utf-8"/>
			<Item Name="README.txt" Type="Document" URL="../Resources/README.txt"/>
			<Item Name="Thai.tis-620" Type="Document" URL="../Resources/Thai.tis-620"/>
			<Item Name="Thai.utf-8" Type="Document" URL="../Resources/Thai.utf-8"/>
		</Item>
		<Item Name="Get Available Codecs.vi" Type="VI" URL="../Source/Get Available Codecs.vi"/>
		<Item Name="Main.vi" Type="VI" URL="../Source/Main.vi"/>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Application Directory.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Application Directory.vi"/>
				<Item Name="BuildHelpPath.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/BuildHelpPath.vi"/>
				<Item Name="Check Special Tags.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Check Special Tags.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Convert property node font to graphics font.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Convert property node font to graphics font.vi"/>
				<Item Name="Details Display Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Details Display Dialog.vi"/>
				<Item Name="DialogType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogType.ctl"/>
				<Item Name="DialogTypeEnum.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/DialogTypeEnum.ctl"/>
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="Error Code Database.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Code Database.vi"/>
				<Item Name="ErrWarn.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/ErrWarn.ctl"/>
				<Item Name="eventsource.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventsource.ctl"/>
				<Item Name="eventvkey.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventvkey.ctl"/>
				<Item Name="Find Tag.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Find Tag.vi"/>
				<Item Name="Format Message String.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Format Message String.vi"/>
				<Item Name="General Error Handler Core CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler Core CORE.vi"/>
				<Item Name="General Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler.vi"/>
				<Item Name="Get LV Class Name.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/LVClass/Get LV Class Name.vi"/>
				<Item Name="Get String Text Bounds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Get String Text Bounds.vi"/>
				<Item Name="Get Text Rect.vi" Type="VI" URL="/&lt;vilib&gt;/picture/picture.llb/Get Text Rect.vi"/>
				<Item Name="GetHelpDir.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetHelpDir.vi"/>
				<Item Name="GetRTHostConnectedProp.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetRTHostConnectedProp.vi"/>
				<Item Name="Longest Line Length in Pixels.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Longest Line Length in Pixels.vi"/>
				<Item Name="LQ Core.lvlib" Type="Library" URL="/&lt;vilib&gt;/addons/LQ/LQ Core/LQ Core.lvlib"/>
				<Item Name="LVBoundsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBoundsTypeDef.ctl"/>
				<Item Name="LVComboBoxStrsAndValuesArrayTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVComboBoxStrsAndValuesArrayTypeDef.ctl"/>
				<Item Name="LVNumericRepresentation.ctl" Type="VI" URL="/&lt;vilib&gt;/numeric/LVNumericRepresentation.ctl"/>
				<Item Name="LVRectTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVRectTypeDef.ctl"/>
				<Item Name="NI_FileType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/lvfile.llb/NI_FileType.lvlib"/>
				<Item Name="Not Found Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Not Found Dialog.vi"/>
				<Item Name="QAbstractScrollArea.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QAbstractScrollArea/QAbstractScrollArea.lvclass"/>
				<Item Name="QAction.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QAction/QAction.lvclass"/>
				<Item Name="QColor.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QColor/QColor.lvclass"/>
				<Item Name="QFont.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QFont/QFont.lvclass"/>
				<Item Name="QFrame.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QFrame/QFrame.lvclass"/>
				<Item Name="QIcon.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QIcon/QIcon.lvclass"/>
				<Item Name="QLayout.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QLayout/QLayout.lvclass"/>
				<Item Name="QPixmap.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QPixmap/QPixmap.lvclass"/>
				<Item Name="QPoint.ctl" Type="VI" URL="/&lt;vilib&gt;/addons/LQ/LQ Core/QPoint.ctl"/>
				<Item Name="QRect.ctl" Type="VI" URL="/&lt;vilib&gt;/addons/LQ/LQ Core/QRect.ctl"/>
				<Item Name="QScreen.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QScreen/QScreen.lvclass"/>
				<Item Name="QSize.ctl" Type="VI" URL="/&lt;vilib&gt;/addons/LQ/LQ Core/QSize.ctl"/>
				<Item Name="Qt.lvlib" Type="Library" URL="/&lt;vilib&gt;/addons/LQ/LQ Core/Qt/Qt.lvlib"/>
				<Item Name="QTextCodec.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/LQ Core/QTextCodec/QTextCodec.lvclass"/>
				<Item Name="QTextEdit.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QTextEdit/QTextEdit.lvclass"/>
				<Item Name="QWidget.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt Widgets/QWidget/QWidget.lvclass"/>
				<Item Name="QWindow.lvclass" Type="LVClass" URL="/&lt;vilib&gt;/addons/LQ/Qt GUI/QWindow/QWindow.lvclass"/>
				<Item Name="Search and Replace Pattern.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Search and Replace Pattern.vi"/>
				<Item Name="Set Bold Text.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set Bold Text.vi"/>
				<Item Name="Set String Value.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Set String Value.vi"/>
				<Item Name="Simple Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Simple Error Handler.vi"/>
				<Item Name="TagReturnType.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/TagReturnType.ctl"/>
				<Item Name="Three Button Dialog CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog CORE.vi"/>
				<Item Name="Three Button Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Three Button Dialog.vi"/>
				<Item Name="Trim Whitespace.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Trim Whitespace.vi"/>
				<Item Name="VariantType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/VariantDataType/VariantType.lvlib"/>
				<Item Name="whitespace.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/whitespace.ctl"/>
			</Item>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
