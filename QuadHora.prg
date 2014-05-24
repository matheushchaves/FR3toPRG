//============================================================================//
//   FR3  TO  PRG                                			By: Arthur Silvestre //
//                                                        						   //
//                                                                            //
//Data da Gera��o: 07/30/13                                                   //
//Arquivo Importado: C:\des\MGSP\REPS\QuadHora.fr3                            //
//============================================================================//
#Include "FiveWin.CH"
#Include "FastRepH.CH"


Function Main()
	FrPrn:=frReportManager():new()

	AddVariavel()

	FrPrn:ShowReport()
	FrPrn:DestroyFR()
Return .T.


Function AddVariavel()
//Nova Pagina//
FrPrn:NewReport("Page1")
   PropriedadesFR("Page1","Height=1000;Left=0;Top=0;Width=1000;Name=Page1;Orientation=poLandscape;PaperWidth=297;PaperHeight=210;PaperSize=9;LeftMargin=5;RightMargin=14;TopMargin=0,5;BottomMargin=10;ColumnWidth=0;ColumnPositions.Text=;BackPicturePrintable=False;PrintIfEmpty=False;HGuides.Text=;VGuides.Text=")

FrPrn:AddBand("MasterData1","Page1",frxMasterData)
   PropriedadesFR("MasterData1","Font.Charset=1;Font.Color=536870911;Font.Height=-13;Font.Name=Arial;Font.Style=0;Height=22,67718N*;Left=0N*;ParentFont=False;Restrictions=2;Top=253,22851N*;Width=1050,70934N*;ColumnWidth=0;ColumnGap=0;DataSet=oDM.;DataSetName=TEMP;RowCount=0;Stretched=True")

    FrPrn:AddMemo("MasterData1","Memo27",'[TEMP."Matrfun"]',0,0,75.5906,22.67718)
      PropriedadesFR("Memo27","ShowHint=False;DataField=Matrfun;DataSet=oDM.;DataSetName=TEMP;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.LeftLine.Width=2;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("MasterData1","Memo28",'[TEMP."Nomefun"]',75.5906,0,291.02381,22.67718)
      PropriedadesFR("Memo28","ShowHint=False;DataField=Nomefun;DataSet=oDM.;DataSetName=TEMP;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("MasterData1","Memo30",'[TEMP."Lotafun"]',600.94527,0,120.94496,22.67718)
      PropriedadesFR("Memo30","ShowHint=False;DataField=Lotafun;DataSet=oDM.;DataSetName=TEMP;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("MasterData1","Memo26",'[TEMP."Hora1en"]',721.89023,0,86.92919,22.67718)
      PropriedadesFR("Memo26","ShowHint=False;DataField=Hora1en;DataSet=oDM.;DataSetName=TEMP;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("MasterData1","Memo31",'[TEMP."Hora1sa"]',808.81942,0,79.37013,22.67718)
      PropriedadesFR("Memo31","ShowHint=False;DataField=Hora1sa;DataSet=oDM.;DataSetName=TEMP;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("MasterData1","Memo32",'[TEMP."Hora2sa"]',971.33921,0,79.37013,22.67718)
      PropriedadesFR("Memo32","ShowHint=False;DataField=Hora2sa;DataSet=oDM.;DataSetName=TEMP;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.RightLine.Width=2;HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("MasterData1","Memo33",'[TEMP."Hora2en"]',888.18955,0,83.14966,22.67718)
      PropriedadesFR("Memo33","ShowHint=False;DataField=Hora2en;DataSet=oDM.;DataSetName=TEMP;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("MasterData1","Memo29",'[TEMP."DESCCAS"]',366.61441,0,234.33086,22.67718)
      PropriedadesFR("Memo29","ShowHint=False;DataField=DESCCAS;DataSet=oDM.;DataSetName=TEMP;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False;VAlign=vaCenter")

//Fechamento do TfrxMasterData//

FrPrn:AddBand("PageHeader1","Page1",frxPageHeader)
   PropriedadesFR("PageHeader1","Height=173,85838N*;Left=0N*;Top=18,89765N*;Width=1050,70934N*")

    FrPrn:AddMemo("PageHeader1","Memo23",'',0,143.62204724,75.5906,439.93700787)
      PropriedadesFR("Memo23","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-17;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.LeftLine.Width=2;ParentFont=False")

    FrPrn:AddMemo("PageHeader1","Memo4",'Empresa: [Sempre13."RASOEMP"]',188.9765,41.57483,861.73284,41.57483)
      PropriedadesFR("Memo4","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-27;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.TopLine.Width=2;Frame.RightLine.Width=2;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo6",'Logradouro: [Sempre13."END1EMP"]',188.9765,83.14966,461.10266,30.23624)
      PropriedadesFR("Memo6","ShowHint=False;DataField=End1emp;Font.Charset=1;Font.Color=-16777208;Font.Height=-19;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo8",'Numero: [Sempre13."NUMLOGR"]',650.07916,83.14966,400.63018,30.23624)
      PropriedadesFR("Memo8","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-19;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.RightLine.Width=2;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo9",'Cidade: [Sempre13."MUN1EMP"]',366.61441,113.3859,260.78757,30.23624)
      PropriedadesFR("Memo9","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-19;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo10",'Estado: [Sempre13."SIU1EMP"]',627.40198,113.3859,423.30736,30.23624)
      PropriedadesFR("Memo10","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-19;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.RightLine.Width=2;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo7",'Bairro: [Sempre13."BAI1EMP"]',188.9765,113.3859,177.63791,30.23624)
      PropriedadesFR("Memo7","ShowHint=False;DataField=Bai1emp;Font.Charset=1;Font.Color=-16777208;Font.Height=-19;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo5",'QUADRO DE HORÁRIO',0,0,1073.38652,41.57483)
      PropriedadesFR("Memo5","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-29;Font.Name=Times New Roman;Font.Style=0;HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo11",'',0,41.57483,188.9765,102.04731)
      PropriedadesFR("Memo11","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-19;Font.Name=Times New Roman;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.LeftLine.Width=2;Frame.TopLine.Width=2;Frame.RightLine.Width=2;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo1",'Código',0,143.62214,75.5906,30.23624)
      PropriedadesFR("Memo1","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-19;Font.Name=Times New Roman;Font.Style=1;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.LeftLine.Width=2;Frame.TopLine.Width=2;Frame.BottomLine.Width=2;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo2",'Funcionário',75.5906,143.62214,291.02381,30.23624)
      PropriedadesFR("Memo2","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-19;Font.Name=Times New Roman;Font.Style=1;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.TopLine.Width=2;Frame.BottomLine.Width=2;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo12",'Função',366.61441,143.62214,234.33086,30.23624)
      PropriedadesFR("Memo12","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-19;Font.Name=Times New Roman;Font.Style=1;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.TopLine.Width=2;Frame.BottomLine.Width=2;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo13",'Departamento',600.94527,143.62214,120.94496,30.23624)
      PropriedadesFR("Memo13","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-19;Font.Name=Times New Roman;Font.Style=1;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.TopLine.Width=2;Frame.BottomLine.Width=2;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo14",'1º Turno',721.89023,143.62214,166.29932,15.11812)
      PropriedadesFR("Memo14","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-16;Font.Name=Times New Roman;Font.Style=1;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.TopLine.Width=2;HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo15",'2º Turno',888.18955,143.62214,162.51979,15.11812)
      PropriedadesFR("Memo15","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-16;Font.Name=Times New Roman;Font.Style=1;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.TopLine.Width=2;Frame.RightLine.Width=2;HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo16",'Entrada',721.89023,158.74026,86.92919,15.11812)
      PropriedadesFR("Memo16","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-13;Font.Name=Times New Roman;Font.Style=1;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.BottomLine.Width=2;HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo17",'Saída',808.81942,158.74026,79.37013,15.11812)
      PropriedadesFR("Memo17","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-13;Font.Name=Times New Roman;Font.Style=1;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.BottomLine.Width=2;HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo18",'Entrada',888.18955,158.74026,83.14966,15.11812)
      PropriedadesFR("Memo18","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-13;Font.Name=Times New Roman;Font.Style=1;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.BottomLine.Width=2;HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo19",'Saída',971.33921,158.74026,79.37013,15.11812)
      PropriedadesFR("Memo19","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-13;Font.Name=Times New Roman;Font.Style=1;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.RightLine.Width=2;Frame.BottomLine.Width=2;HAlign=haCenter;ParentFont=False;VAlign=vaCenter")

    FrPrn:AddMemo("PageHeader1","Memo34",'',75.5906,143.62214,291.02381,439.93700787)
      PropriedadesFR("Memo34","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-17;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False")

    FrPrn:AddMemo("PageHeader1","Memo36",'',600.94527,143.62214,120.94496,439.93700787)
      PropriedadesFR("Memo36","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-17;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False")

    FrPrn:AddMemo("PageHeader1","Memo37",'',721.89023,173.85825795,86.92919,409.67626819)
      PropriedadesFR("Memo37","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-17;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False")

    FrPrn:AddMemo("PageHeader1","Memo38",'',808.81942,173.85838,79.37013,409.67626819)
      PropriedadesFR("Memo38","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-17;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False")

    FrPrn:AddMemo("PageHeader1","Memo39",'',888.18955,173.85838,83.14966,409.67626819)
      PropriedadesFR("Memo39","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-17;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];ParentFont=False")

    FrPrn:AddMemo("PageHeader1","Memo40",'',971.33921,173.85838,79.37013,409.67626819)
      PropriedadesFR("Memo40","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-17;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.RightLine.Width=2;ParentFont=False")

//Fechamento do TfrxMasterData//

FrPrn:AddBand("PageFooter1","Page1",frxPageFooter)
   PropriedadesFR("PageFooter1","Height=170,07885N*;Left=0N*;Top=336,37817N*;Width=1050,70934N*")

    FrPrn:AddMemo("PageFooter1","Memo20",'',0,0,1050.70934,170.07885)
      PropriedadesFR("Memo20","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-17;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.LeftLine.Width=2;Frame.TopLine.Width=2;Frame.RightLine.Width=2;Frame.BottomLine.Width=2;ParentFont=False")

    FrPrn:AddMemo("PageFooter1","Memo3",'Empregador, [Sempre13."Rasoemp"]',691.65399,120.94496,343.93723,22.67718)
      PropriedadesFR("Memo3","ShowHint=False;DataSet=oDM.;DataSetName=Sempre13;Font.Charset=1;Font.Color=-16777208;Font.Height=-17;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftTop];HAlign=haCenter;ParentFont=False")

    FrPrn:AddMemo("PageFooter1","Memo21",'',0,154.96073,1050.70934,15.11812)
      PropriedadesFR("Memo21","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-17;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftLeft,ftRight,ftBottom,ftTop];Frame.LeftLine.Width=2;Frame.TopLine.Width=2;Frame.RightLine.Width=2;Frame.BottomLine.Width=2;ParentFont=False")

    FrPrn:AddMemo("PageFooter1","Memo22",'Observações:',7.55906,11.33859,1031.81169,18.89765)
      PropriedadesFR("Memo22","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftBottom];ParentFont=False")

    FrPrn:AddMemo("PageFooter1","Memo24",'',7.55906,30.23624,1031.81169,18.89765)
      PropriedadesFR("Memo24","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftBottom];ParentFont=False")

    FrPrn:AddMemo("PageFooter1","Memo25",'',7.55906,49.13389,1031.81169,18.89765)
      PropriedadesFR("Memo25","ShowHint=False;Font.Charset=1;Font.Color=-16777208;Font.Height=-15;Font.Name=Arial;Font.Style=0;Frame.Typ=[ftBottom];ParentFont=False")

//Fechamento do TfrxMasterData//

Return .t.



Function PropriedadesFR(oBj,Propriedades)
	Local aPro:={} 
	Local aProp:={} 

	aPro:=HB_ATokens(Propriedades,";")

	for x:=1 to len(aPro)
		if (AT(".",aPro[x]))>0
			 aadd(aProp,Substr(aPro[x],1,AT(".",aPro[x])-1))
		    aadd(aProp,Substr(aPro[x],AT(".",aPro[x])+1,AT("=",aPro[x])-(1+AT(".",aPro[x]))))
		    aadd(aProp,Substr(aPro[x],AT("=",aPro[x])+1,Len(aPro[x])-AT("=",aPro[x])))
		    IF right(aProp[3],2) == "N"
			 	FrPrn:SetProperty(oBj+"."+aProp[1],aProp[2],Val(Substr(StrTran(aProp[3],",","."),1,Len(aProp[3])-2)))
		    ELSE
			 	FrPrn:SetProperty(oBj+"."+aProp[1],aProp[2],aProp[3])
		    ENDIF
			 aProp:={}
		else
		    aadd(aProp,Substr(aPro[x],1,AT("=",aPro[x])-1))
		    aadd(aProp,Substr(aPro[x],AT("=",aPro[x])+1,Len(aPro[x])-AT("=",aPro[x])))
		    IF right(aProp[2],2) == "N"
			 	FrPrn:SetProperty(oBj,aProp[1],Val(Substr(StrTran(aProp[2],",","."),1,Len(aProp[2])-2)))
		    ELSE
			 	FrPrn:SetProperty(oBj,aProp[1],aProp[2])
		    ENDIF
			 aProp:={}
		endif
	next

Return .t.


//============================================================================//
//   FR3  TO  PRG                                			By: Arthur Silvestre //
//                                                                            //
//                                                                            //
//Data da Gera��o: 07/30/13                                                   //
//Arquivo Importado: C:\des\MGSP\REPS\QuadHora.fr3                            //
//============================================================================//