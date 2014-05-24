#Include "FiveWin.ch"
*
Function Main()
	Public Linha:="",FileLocal:="C:\",Filiacao:="",FileDir:="",lSave:=.F.,AbreBand:=.F.
	
	DEFINE ICON oIco RESOURCE "FR3TOPRG"
	DEFINE DIALOG oDlg TITLE "FR3toPRG" RESOURCE "DLG_GET" ICON OICO
	   REDEFINE GET oGet var FileLocal OF oDlg ID 4002 Valid !Empty(FileLocal) ACTION ( FileLocal:=cGetFile( "*.Fr3", "Selecione o Arquivo" ),oGet:Refresh()) BITMAP "LUPA"
	   REDEFINE BUTTONBMP oBtnBmp1 OF oWnd ID 4003 ACTION (oDlg:End() , lSave:=.T.)
	   REDEFINE BUTTONBMP oBtnBmp2 OF oWnd ID 4004 ACTION (oDlg:End() , lSave:=.F.) cancel
   ACTIVATE DIALOG oDlg CENTERED
	IF ! lSave
		Return .F.
	Endif
	*
	IF Right(FileLocal,3) # "fr3"
		MsgInfo("Tipo do arquivo especificado não é compativel com a aplicação.","Atenção")
		Return .F.
	Endif
	*
	Linha+="//============================================================================//"+CRLF
	Linha+="//   FR3  TO  PRG                                			By: Arthur Silvestre //"+CRLF
	Linha+="//                                                        						   //"+CRLF
	Linha+="//                                                                            //"+CRLF
	Linha+="//Data da Geração: "+DTOC(DATE())+"                                                   //"+CRLF
	Linha+="//Arquivo Importado: "+FileLocal+"                            //"+CRLF
	Linha+="//============================================================================//"+CRLF
	Linha+='#Include "FiveWin.CH"'+CRLF
	Linha+='#Include "FastRepH.CH"'+CRLF
	Linha+=CRLF
	Linha+=CRLF
	Linha+="Function Main()"+CRLF
	Linha+="	FrPrn:=frReportManager():new()"+CRLF
	Linha+=CRLF
	Linha+="	AddVariavel()"+CRLF
	Linha+=CRLF
	Linha+="	FrPrn:ShowReport()"+CRLF
	Linha+="	FrPrn:DestroyFR()"+CRLF
	Linha+="Return .T."+CRLF
	Linha+=CRLF
	Linha+=CRLF
	Linha+="Function AddVariavel()"+CRLF
	
	//===================================//
			   EscreveFr3(FileLocal)
	//===================================//

  	Linha+='Return .t.'+CRLF
	Linha+=CRLF
	Linha+=CRLF
	Linha+=CRLF
	Linha+="Function PropriedadesFR(oBj,Propriedades)"+CRLF
	Linha+="	Local aPro:={} "+CRLF
	Linha+="	Local aProp:={} "+CRLF
	Linha+=CRLF
	Linha+='	aPro:=HB_ATokens(Propriedades,";")'+CRLF
	Linha+=CRLF	
	Linha+='	for x:=1 to len(aPro)'+CRLF
	Linha+='		if (AT(".",aPro[x]))>0'+CRLF
	Linha+='			 aadd(aProp,Substr(aPro[x],1,AT(".",aPro[x])-1))'+CRLF
	Linha+='		    aadd(aProp,Substr(aPro[x],AT(".",aPro[x])+1,AT("=",aPro[x])-(1+AT(".",aPro[x]))))'+CRLF
	Linha+='		    aadd(aProp,Substr(aPro[x],AT("=",aPro[x])+1,Len(aPro[x])-AT("=",aPro[x])))'+CRLF
 	Linha+='		    IF right(aProp[3],2) == "N*"'+CRLF
	Linha+='			 	FrPrn:SetProperty(oBj+"."+aProp[1],aProp[2],Val(Substr(StrTran(aProp[3],",","."),1,Len(aProp[3])-2)))'+CRLF
	Linha+='		    ELSE'+CRLF
	Linha+='			 	FrPrn:SetProperty(oBj+"."+aProp[1],aProp[2],aProp[3])'+CRLF
	Linha+='		    ENDIF'+CRLF
	Linha+='			 aProp:={}'+CRLF
	Linha+='		else'+CRLF
	Linha+='		    aadd(aProp,Substr(aPro[x],1,AT("=",aPro[x])-1))'+CRLF
	Linha+='		    aadd(aProp,Substr(aPro[x],AT("=",aPro[x])+1,Len(aPro[x])-AT("=",aPro[x])))'+CRLF
	Linha+='		    IF right(aProp[2],2) == "N*"'+CRLF
	Linha+='			 	FrPrn:SetProperty(oBj,aProp[1],Val(Substr(StrTran(aProp[2],",","."),1,Len(aProp[2])-2)))'+CRLF
	Linha+='		    ELSE'+CRLF
	Linha+='			 	FrPrn:SetProperty(oBj,aProp[1],aProp[2])'+CRLF
	Linha+='		    ENDIF'+CRLF
	Linha+='			 aProp:={}'+CRLF
	Linha+='		endif'+CRLF
	Linha+='	next'+CRLF
	Linha+=CRLF
	Linha+='Return .t.'+CRLF
	Linha+=CRLF
	Linha+=CRLF
	Linha+="//============================================================================//"+CRLF
	Linha+="//   FR3  TO  PRG                                			By: Arthur Silvestre //"+CRLF
	Linha+="//                                                                            //"+CRLF
	Linha+="//                                                                            //"+CRLF
	Linha+="//Data da Geração: "+DTOC(DATE())+"                                                   //"+CRLF
	Linha+="//Arquivo Importado: "+FileLocal+"                            //"+CRLF
	Linha+="//============================================================================//"
	*
	vFileLocal:= HB_ATokens(FileLocal,'\')
	For x:=1 to ( Len(vFileLocal) - 1 )
		FileDir+=IIF( ! (x # 1) , Upper( vFileLocal[x]+"\" ) , Lower( vFileLocal[x]+"\" ))
	Next
	FileName:=SubStr(vFileLocal[Len(vFileLocal)],1,Len(vFileLocal[Len(vFileLocal)])-4)
	MemoWrit( FileDir+FileName+".prg",Linha)
	MsgInfo("Arquivo "+FileDir+FileName+".prg Foi Gerado com Sucesso.","")
	WinExec("explorer "+FileDir)
Return .T.

FUNCTION EscreveFr3( FileLocal )
	LOCAL cXML
	oText = TTxtFile():New( FileLocal )	//Read Mode
   nPage:= 1
	nPageAtua:=1
	Do while !oText:EOF()
		mText:= oText:ReadLine() ; oText:Skip()
		mText:=Alltrim(StrTran(StrTran(StrTran(StrTran(mText,"<"),">"),"?"),"/"))
		vText:= HB_ATokens(Left(mText,Len(mText)-1),'"')
		*
		IF SubStr(vText[1],1,13) == "TfrxDataPage " .and. nPage == 1
			 sLinha:=CRLF+"//Nova Pagina//"+CRLF+"FrPrn:NewReport("+'"'+"Page"+alltrim(Transform(nPage,"@E99"))+'"'+")"+CRLF+"   PropriedadesFR("+'"Page'+alltrim(Transform(nPage,"@E99"))+'","'												//+'"LeftMargin=3,7;RightMargin=3,4;TopMargin=4;BottomMargin=10;PaperWidth=210;PaperHeight=297;PaperSize=9;ColumnWidth=202"'
          x:=1
			 Do while !(x == len(vText) -1)
				x:=x+2
				sLinha:= Alltrim(sLinha) + Alltrim(vText[x]) + Alltrim(vText[x+1]) + ';'
			 enddo
		ENDIF
      *
		IF SubStr(vText[1],1,15) == "TfrxReportPage " .and. nPage == 1
          sLinha:=sLinha+Alltrim(Right(vText[1],5))+vText[2]+';'
			 x:=1
			 Do while !(x == len(vText) -1)
				x:=x+2
				sLinha := Alltrim(sLinha) + Alltrim(vText[x]) + Alltrim(vText[x+1]) + ';'
			 enddo
			 sLinha:=Left(sLinha,Len(sLinha)-1)+'")'+CRLF+CRLF
      	 sPage:='"'+"Page"+alltrim(Transform(nPage,"@E99"))+'"'
			 nPage++
			 Linha+=sLinha
			 Filiacao:=""
		ENDIF
		*
		IF SubStr(vText[1],1,15) == "TfrxReportPage " .and. nPage # 1
			IF nPageAtua >= 2
				 sLinha:=CRLF+"//Nova Pagina//"+CRLF+"FrPrn:AddPage("+'"'+"Page"+alltrim(Transform(nPage,"@E99"))+'"'+")"+CRLF+"   PropriedadesFR("+'"Page'+alltrim(Transform(nPage,"@E99"))+'","'
	          x:=1
				 Do while !(x == len(vText) -1)
					x:=x+2
					sLinha:= Alltrim(sLinha) + Alltrim(vText[x]) + Alltrim(vText[x+1]) + ';'
				 enddo
				 sLinha:=Left(sLinha,Len(sLinha)-1)+'")'+CRLF+CRLF
	      	sPage:='"'+"Page"+alltrim(Transform(nPage,"@E99"))+'"'
				nPage++
				Linha+=sLinha
			ENDIF
			nPageAtua++
			Filiacao:=""
		ENDIF
		//IF (SubStr(vText[1],1,15) == "TfrxMasterData" .Or. SubStr(vText[1],1,15) == "TfrxPageHeader"  .Or. SubStr(vText[1],1,15) == "TfrxPageFooter") .And. AbreBand == .T.
		IF (AbreBand == .T.) .And. (SubStr(vText[1],1,16) == "TfrxReportTitle " .Or. SubStr(vText[1],1,18) == "TfrxReportSummary " .Or. SubStr(vText[1],1,15) == "TfrxPageHeader " .Or. SubStr(vText[1],1,15) == "TfrxPageFooter " .Or. SubStr(vText[1],1,11) == "TfrxHeader " .Or. SubStr(vText[1],1,11) == "TfrxFooter " .Or. SubStr(vText[1],1,15) == "TfrxMasterData " .Or. SubStr(vText[1],1,15) == "TfrxDetailData " .Or. SubStr(vText[1],1,18) == "TfrxSubdetailData " .Or. SubStr(vText[1],1,14) == "TfrxDataBand4 " .Or. SubStr(vText[1],1,14) == "TfrxDataBand5 " .Or. SubStr(vText[1],1,14) == "TfrxDataBand6 " .Or. SubStr(vText[1],1,16) == "TfrxGroupHeader " .Or. SubStr(vText[1],1,16) == "TfrxGroupFooter " .Or. SubStr(vText[1],1,10) == "TfrxChild " .Or. SubStr(vText[1],1,17) == "TfrxColumnHeader " .Or. SubStr(vText[1],1,17) == "TfrxColumnFooter " .Or. SubStr(vText[1],1,12) == "TfrxOverlay ")
         Filiacao:=""
			AbreBand:=.F.
			//sLinha:="//Fechamento do "+strtran(alltrim(vText[1])," Name=")+"//"+CRLF+CRLF
			//Linha+=sLinha
			&&O Fechamento de qualquer classe virá sempre antes da sua abertura, pois se for após, sempre abrirá e fechará no mesmo instante. ArthurSilvestre(29/07/2013)
		ENDIF
		IF (AbreBand == .F.) .And. (SubStr(vText[1],1,16) == "TfrxReportTitle " .Or. SubStr(vText[1],1,18) == "TfrxReportSummary " .Or. SubStr(vText[1],1,15) == "TfrxPageHeader " .Or. SubStr(vText[1],1,15) == "TfrxPageFooter " .Or. SubStr(vText[1],1,11) == "TfrxHeader " .Or. SubStr(vText[1],1,11) == "TfrxFooter " .Or. SubStr(vText[1],1,15) == "TfrxMasterData " .Or. SubStr(vText[1],1,15) == "TfrxDetailData " .Or. SubStr(vText[1],1,18) == "TfrxSubdetailData " .Or. SubStr(vText[1],1,14) == "TfrxDataBand4 " .Or. SubStr(vText[1],1,14) == "TfrxDataBand5 " .Or. SubStr(vText[1],1,14) == "TfrxDataBand6 " .Or. SubStr(vText[1],1,16) == "TfrxGroupHeader " .Or. SubStr(vText[1],1,16) == "TfrxGroupFooter " .Or. SubStr(vText[1],1,10) == "TfrxChild " .Or. SubStr(vText[1],1,17) == "TfrxColumnHeader " .Or. SubStr(vText[1],1,17) == "TfrxColumnFooter " .Or. SubStr(vText[1],1,12) == "TfrxOverlay ")
			IF SubStr(vText[1],1,16) == "TfrxReportTitle "
				TipBand:="frxReportTitle"
			ELSEIF SubStr(vText[1],1,18) == "TfrxReportSummary "
				TipBand:="frxReportSummary"
			ELSEIF SubStr(vText[1],1,15) == "TfrxPageHeader "
				TipBand:="frxPageHeader"
			ELSEIF SubStr(vText[1],1,15) == "TfrxPageFooter "
				TipBand:="frxPageFooter"
			ELSEIF SubStr(vText[1],1,11) == "TfrxHeader "
				TipBand:="frxHeader"
			ELSEIF SubStr(vText[1],1,11) == "TfrxFooter "
				TipBand:="frxFooter"
			ELSEIF SubStr(vText[1],1,15) == "TfrxMasterData "
				TipBand:="frxMasterData"
			ELSEIF SubStr(vText[1],1,15) == "TfrxDetailData "
				TipBand:="frxDetailData"
			ELSEIF SubStr(vText[1],1,18) == "TfrxSubdetailData "
				TipBand:="frxSubdetailData"
			ELSEIF SubStr(vText[1],1,14) == "TfrxDataBand4 "
				TipBand:="frxDataBand4"
			ELSEIF SubStr(vText[1],1,14) == "TfrxDataBand5 "
				TipBand:="frxDataBand5"
			ELSEIF SubStr(vText[1],1,14) == "TfrxDataBand6 "
				TipBand:="frxDataBand6"
			ELSEIF SubStr(vText[1],1,16) == "TfrxGroupHeader "
				TipBand:="frxGroupHeader"
			ELSEIF SubStr(vText[1],1,16) == "TfrxGroupFooter "
				TipBand:="frxGroupFooter"
			ELSEIF SubStr(vText[1],1,10) == "TfrxChild "
				TipBand:="frxChild"
			ELSEIF SubStr(vText[1],1,17) == "TfrxColumnHeader "
				TipBand:="frxColumnHeader"
			ELSEIF SubStr(vText[1],1,17) == "TfrxColumnFooter "
				TipBand:="frxColumnFooter"
			ELSEIF SubStr(vText[1],1,12) == "TfrxOverlay "
				TipBand:="frxOverlay"
			ELSE
				TipBand:=""
			ENDIF
			&&
			sLinha:='FrPrn:AddBand("'+vText[2]+'",'+sPage+','+TipBand+')'+CRLF+'   PropriedadesFR("'+vText[2]+'","'
         x:=1
			Do while !(x == len(vText) -1)
				x:=x+2
				IF vText[x] == " Left=" .or. vText[x] == " Top=" .or. vText[x] == " Width=" .or. vText[x] == " Height="
			 	   vText[x+1]:=vText[x+1]+"N*"
				Endif
				IF Alltrim(vText[x]) == "DataSet="
					loop
				ENDIF
				sLinha:= Alltrim(sLinha) + Alltrim(vText[x]) + Alltrim(vText[x+1]) + ';'
			enddo
			sLinha:=Left(sLinha,Len(sLinha)-1)+'")'+CRLF+CRLF
			Linha+=sLinha
			Filiacao:='"'+vText[2]+'"'
			AbreBand:=.T.
		ENDIF
		IF SubStr(vText[1],1,13) == "TfrxMemoView "
			 sLinha:="FrPrn:AddMemo("+IIF(!Empty(Filiacao),Filiacao,sPage)+',"'+vText[2]+'",'+"'"+TextoMemo(vText[Len(vText)])+"'"+',' + StrTran(vText[4],",",".") + ',' + StrTran(vText[6],",",".") + ',' + StrTran(vText[8],",",".") + ',' + StrTran(vText[10],",",".") + ')'+CRLF+'      PropriedadesFR("'+vText[2]+'","'
			 x:=1
			 Do while !(x == len(vText) -1)
				x:=x+2
				IF SubStr(alltrim(vText[x]),1,4) == "Left"  .or. SubStr(alltrim(vText[x]),1,3) == "Top" .or. SubStr(alltrim(vText[x]),1,5) == "Width" .or. SubStr(alltrim(vText[x]),1,6) == "Height" .or. SubStr(alltrim(vText[x]),1,4) == "Text"
					Loop
				ENDIF
				IF vText[x] == " Frame.Typ="
					IF Alltrim(vText[x+1]) == "1" 
						sProp:=Alltrim(vText[x]) + '[ftLeft];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "2"
						sProp:=Alltrim(vText[x]) + '[ftRight];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "3" 
						sProp:=Alltrim(vText[x]) + '[ftLeft,ftRight];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "4" 
						sProp:=Alltrim(vText[x]) + '[ftTop];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "5" 
						sProp:=Alltrim(vText[x]) + '[ftLeft,ftTop];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "6" 
						sProp:=Alltrim(vText[x]) + '[ftRight,ftTop];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "7" 
						sProp:=Alltrim(vText[x]) + '[ftLeft,ftRight,ftTop];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "8" 
						sProp:=Alltrim(vText[x]) + '[ftBottom];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "9" 
						sProp:=Alltrim(vText[x]) + '[ftLeft,ftBottom];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "10" 
						sProp:=Alltrim(vText[x]) + '[ftRight,ftBottom];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "11" 
						sProp:=Alltrim(vText[x]) + '[ftLeft,ftRight,ftBottom];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "12" 
						sProp:=Alltrim(vText[x]) + '[ftBottom,ftTop];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "13" 
						sProp:=Alltrim(vText[x]) + '[ftLeft,ftBottom,ftTop];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "14"
						sProp:=Alltrim(vText[x]) + '[ftRight,ftBottom,ftTop];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "15" 
						sProp:=Alltrim(vText[x]) + '[ftLeft,ftRight,ftBottom,ftTop];'
				   ENDIF
				ELSEIF vText[x] == " Font.Style="
					IF Alltrim(vText[x+1]) == "0" 
						sProp:=Alltrim(vText[x]) + '0;'
				   ENDIF
					IF Alltrim(vText[x+1]) == "1" 
						sProp:=Alltrim(vText[x]) + '[fsBold];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "2" 
						sProp:=Alltrim(vText[x]) + '[fsItalic];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "3" 
						sProp:=Alltrim(vText[x]) + '[fsBold,fsItalic];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "4" 
						sProp:=Alltrim(vText[x]) + '[fsUnderline];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "5" 
						sProp:=Alltrim(vText[x]) + '[fsBold,fsUnderline];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "6" 
						sProp:=Alltrim(vText[x]) + '[fsItalic,fsUnderline];'
				   ENDIF
					IF Alltrim(vText[x+1]) == "7" 
						sProp:=Alltrim(vText[x]) + '[fsBold,fsItalic,fsUnderline];'
				   ENDIF
            ELSE
					sProp:=Alltrim(vText[x]) + Alltrim(vText[x+1]) + ';'
				ENDIF	
				IF Alltrim(vText[x]) == "DataSet="
					loop
				ENDIF
				sLinha := Alltrim(sLinha) + sProp
			 enddo
			 sLinha:=Left(sLinha,Len(sLinha)-1)+'")'+CRLF+CRLF
			 Linha+="    "+sLinha
		ENDIF
		IF SubStr(vText[1],1,16) == "TfrxPictureView "
			 sLinha:=CRLF+'FrPrn:AddPicture('+IIF(!Empty(Filiacao),Filiacao,sPage)+',"'+vText[2]+'",'+"DIGITE O CAMINHO DA IMAGEM"+','+ + StrTran(vText[4],",",".") + ',' + StrTran(vText[6],",",".") + ',' + StrTran(vText[8],",",".") + ',' + StrTran(vText[10],",",".") + ')'+CRLF+'      PropriedadesFR("'+vText[2]+'","'
          x:=1
			 Do while !(x == len(vText) -1)
				x:=x+2
				IF SubStr(alltrim(vText[x]),1,4) == "Left"  .or. SubStr(alltrim(vText[x]),1,3) == "Top" .or. SubStr(alltrim(vText[x]),1,5) == "Width" .or. SubStr(alltrim(vText[x]),1,6) == "Height" .or. SubStr(alltrim(vText[x]),1,4) == "Text" .or. SubStr(alltrim(vText[x]),1,16) == "Picture.PropData"
					Loop
				ENDIF
				sLinha:= Alltrim(sLinha) + Alltrim(vText[x]) + Alltrim(vText[x+1]) + ';'
			 enddo
			 sLinha:=Left(sLinha,Len(sLinha)-1)+'")'+CRLF+CRLF
			 Linha+="    "+sLinha
		ENDIF
	ENDDO
RETURN

Function TextoMemo(sTexto)
	
	sTexto:=StrTRan(sTexto,"&#34;",'"')

Return sTexto

Function log10	
Function floor