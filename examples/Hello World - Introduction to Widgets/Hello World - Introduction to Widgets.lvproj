<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="14008000">
	<Property Name="NI.LV.All.SourceOnly" Type="Bool">true</Property>
	<Item Name="My Computer" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">My Computer/VI Server</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="Source" Type="Folder">
			<Item Name="1. Constructing and Using a Widget" Type="Folder">
				<Item Name="1. Main.vi" Type="VI" URL="../Source/1. Constructing and Using a Widget/1. Main.vi"/>
			</Item>
			<Item Name="2. Managing a Widget Layout" Type="Folder">
				<Item Name="2. Main.vi" Type="VI" URL="../Source/2. Managing a Widget Layout/2. Main.vi"/>
			</Item>
			<Item Name="3a. Connecting a Signal to a Qt Slot" Type="Folder">
				<Item Name="3a. Main.vi" Type="VI" URL="../Source/3a. Connecting a Signal to a Qt Slot/3a. Main.vi"/>
			</Item>
			<Item Name="3b. Connecting a Signal to a LabVIEW Event" Type="Folder">
				<Item Name="3b. Main.vi" Type="VI" URL="../Source/3b. Connecting a Signal to a LabVIEW Event/3b. Main.vi"/>
			</Item>
			<Item Name="3c. Connecting a Signal to a LabVIEW Callback" Type="Folder">
				<Item Name="3c. Callback.vi" Type="VI" URL="../Source/3c. Connecting a Signal to a LabVIEW Callback/3c. Callback.vi"/>
				<Item Name="3c. Main.vi" Type="VI" URL="../Source/3c. Connecting a Signal to a LabVIEW Callback/3c. Main.vi"/>
			</Item>
			<Item Name="4. Inheriting from a Widget" Type="Folder">
				<Item Name="4. Main.vi" Type="VI" URL="../Source/4. Inheriting from a Widget/4. Main.vi"/>
				<Item Name="4. Number Widget.lvclass" Type="LVClass" URL="../Source/4. Inheriting from a Widget/Number Widget/4. Number Widget.lvclass"/>
			</Item>
			<Item Name="5. Creating a User-Defined Signal" Type="Folder">
				<Item Name="5. Main.vi" Type="VI" URL="../Source/5. Creating a User-Defined Signal/5. Main.vi"/>
				<Item Name="5. Number Widget.lvclass" Type="LVClass" URL="../Source/5. Creating a User-Defined Signal/Number Widget/5. Number Widget.lvclass"/>
			</Item>
			<Item Name="6. Reusing Components Dynamically" Type="Folder">
				<Item Name="6. Main.vi" Type="VI" URL="../Source/6. Reusing Components Dynamically/6. Main.vi"/>
				<Item Name="6. Number Widget.lvclass" Type="LVClass" URL="../Source/6. Reusing Components Dynamically/Number Widget/6. Number Widget.lvclass"/>
			</Item>
		</Item>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
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
				<Item Name="General Error Handler CORE.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler CORE.vi"/>
				<Item Name="General Error Handler.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/General Error Handler.vi"/>
				<Item Name="Get LV Class Name.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/LVClass/Get LV Class Name.vi"/>
				<Item Name="Get String Text Bounds.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Get String Text Bounds.vi"/>
				<Item Name="Get Text Rect.vi" Type="VI" URL="/&lt;vilib&gt;/picture/picture.llb/Get Text Rect.vi"/>
				<Item Name="GetHelpDir.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetHelpDir.vi"/>
				<Item Name="GetRTHostConnectedProp.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/GetRTHostConnectedProp.vi"/>
				<Item Name="Longest Line Length in Pixels.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Longest Line Length in Pixels.vi"/>
				<Item Name="LVBoundsTypeDef.ctl" Type="VI" URL="/&lt;vilib&gt;/Utility/miscctls.llb/LVBoundsTypeDef.ctl"/>
				<Item Name="LVNumericRepresentation.ctl" Type="VI" URL="/&lt;vilib&gt;/numeric/LVNumericRepresentation.ctl"/>
				<Item Name="Not Found Dialog.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Not Found Dialog.vi"/>
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
			<Item Name="LQ Core.lvlib" Type="Library" URL="../../../src/LabVIEW/LQ Core/LQ Core.lvlib"/>
			<Item Name="QAction.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QAction/QAction.lvclass"/>
			<Item Name="QBoxLayout.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QBoxLayout/QBoxLayout.lvclass"/>
			<Item Name="QFont.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt GUI/QFont/QFont.lvclass"/>
			<Item Name="QFrame.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QFrame/QFrame.lvclass"/>
			<Item Name="QGridLayout.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QGridLayout/QGridLayout.lvclass"/>
			<Item Name="QIcon.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt GUI/QIcon/QIcon.lvclass"/>
			<Item Name="QLayout.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QLayout/QLayout.lvclass"/>
			<Item Name="QLCDNumber.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QLCDNumber/QLCDNumber.lvclass"/>
			<Item Name="QPixmap.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt GUI/QPixmap/QPixmap.lvclass"/>
			<Item Name="QRect.ctl" Type="VI" URL="../../../src/LabVIEW/LQ Core/QRect.ctl"/>
			<Item Name="QScreen.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt GUI/QScreen/QScreen.lvclass"/>
			<Item Name="QSize.ctl" Type="VI" URL="../../../src/LabVIEW/LQ Core/QSize.ctl"/>
			<Item Name="Qt.lvlib" Type="Library" URL="../../../src/LabVIEW/LQ Core/Qt/Qt.lvlib"/>
			<Item Name="QWidget.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QWidget/QWidget.lvclass"/>
			<Item Name="QWindow.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt GUI/QWindow/QWindow.lvclass"/>
			<Item Name="QwtAbstractScale.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qwt/QwtAbstractScale/QwtAbstractScale.lvclass"/>
			<Item Name="QwtAbstractSlider.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qwt/QwtAbstractSlider/QwtAbstractSlider.lvclass"/>
			<Item Name="QwtSlider.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qwt/QwtSlider/QwtSlider.lvclass"/>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
