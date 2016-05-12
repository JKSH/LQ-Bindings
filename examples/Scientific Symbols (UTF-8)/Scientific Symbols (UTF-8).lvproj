<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="14008000">
	<Property Name="NI.LV.All.SourceOnly" Type="Bool">true</Property>
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
			<Item Name="First order RC circuit.png" Type="Document" URL="../Resources/First order RC circuit.png"/>
			<Item Name="README.txt" Type="Document" URL="../Resources/README.txt"/>
		</Item>
		<Item Name="Source" Type="Folder">
			<Item Name="Derived Params Widget.lvclass" Type="LVClass" URL="../Source/Derived Params Widget/Derived Params Widget.lvclass"/>
			<Item Name="Main.vi" Type="VI" URL="../Source/Main.vi"/>
			<Item Name="System Spec Widget.lvclass" Type="LVClass" URL="../Source/System Spec Widget/System Spec Widget.lvclass"/>
		</Item>
		<Item Name="Dependencies" Type="Dependencies">
			<Item Name="vi.lib" Type="Folder">
				<Item Name="Application Directory.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/file.llb/Application Directory.vi"/>
				<Item Name="Clear Errors.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Clear Errors.vi"/>
				<Item Name="Error Cluster From Error Code.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/error.llb/Error Cluster From Error Code.vi"/>
				<Item Name="eventsource.ctl" Type="VI" URL="/&lt;vilib&gt;/event_ctls.llb/eventsource.ctl"/>
				<Item Name="Get LV Class Name.vi" Type="VI" URL="/&lt;vilib&gt;/Utility/LVClass/Get LV Class Name.vi"/>
				<Item Name="LVNumericRepresentation.ctl" Type="VI" URL="/&lt;vilib&gt;/numeric/LVNumericRepresentation.ctl"/>
				<Item Name="NI_FileType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/lvfile.llb/NI_FileType.lvlib"/>
				<Item Name="VariantType.lvlib" Type="Library" URL="/&lt;vilib&gt;/Utility/VariantDataType/VariantType.lvlib"/>
			</Item>
			<Item Name="LQ Core.lvlib" Type="Library" URL="../../../src/LabVIEW/LQ Core/LQ Core.lvlib"/>
			<Item Name="LQChart.lvclass" Type="LVClass" URL="../../../src/LabVIEW/LQ Extras/LQChart/LQChart.lvclass"/>
			<Item Name="QAbstractSpinBox.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QAbstractSpinBox/QAbstractSpinBox.lvclass"/>
			<Item Name="QAction.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QAction/QAction.lvclass"/>
			<Item Name="QBoxLayout.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QBoxLayout/QBoxLayout.lvclass"/>
			<Item Name="QDoubleSpinBox.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QDoubleSpinBox/QDoubleSpinBox.lvclass"/>
			<Item Name="QFont.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt GUI/QFont/QFont.lvclass"/>
			<Item Name="QFormLayout.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QFormLayout/QFormLayout.lvclass"/>
			<Item Name="QFrame.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QFrame/QFrame.lvclass"/>
			<Item Name="QGroupBox.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QGroupBox/QGroupBox.lvclass"/>
			<Item Name="QIcon.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt GUI/QIcon/QIcon.lvclass"/>
			<Item Name="QLabel.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QLabel/QLabel.lvclass"/>
			<Item Name="QLayout.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QLayout/QLayout.lvclass"/>
			<Item Name="QPixmap.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt GUI/QPixmap/QPixmap.lvclass"/>
			<Item Name="QRect.ctl" Type="VI" URL="../../../src/LabVIEW/LQ Core/QRect.ctl"/>
			<Item Name="QScreen.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt GUI/QScreen/QScreen.lvclass"/>
			<Item Name="QSize.ctl" Type="VI" URL="../../../src/LabVIEW/LQ Core/QSize.ctl"/>
			<Item Name="QSpinBox.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QSpinBox/QSpinBox.lvclass"/>
			<Item Name="Qt.lvlib" Type="Library" URL="../../../src/LabVIEW/LQ Core/Qt/Qt.lvlib"/>
			<Item Name="QWidget.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt Widgets/QWidget/QWidget.lvclass"/>
			<Item Name="QWindow.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qt GUI/QWindow/QWindow.lvclass"/>
			<Item Name="QwtPlot.lvclass" Type="LVClass" URL="../../../src/LabVIEW/Qwt/QwtPlot/QwtPlot.lvclass"/>
		</Item>
		<Item Name="Build Specifications" Type="Build"/>
	</Item>
</Project>
