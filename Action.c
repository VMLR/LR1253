Action()
{
	
	web_add_cookie("SRCHUID=V=2&GUID=F58DEF1DC50E47A9946272229A673A4B; DOMAIN=api.bing.com");

	web_add_cookie("MUIDB=181864C9C8D46C493FCB6DD3C9A66D76; DOMAIN=api.bing.com");

	web_add_cookie("SRCHD=AF=IE8SSC; DOMAIN=api.bing.com");

	web_add_cookie("SRCHUSR=DOB=20160519; DOMAIN=api.bing.com");

	web_add_cookie("_EDGE_V=1; DOMAIN=api.bing.com");

	web_add_cookie("MUID=181864C9C8D46C493FCB6DD3C9A66D76; DOMAIN=api.bing.com");

	web_add_cookie("SRCHHPGUSR=CW=1903&CH=929; DOMAIN=api.bing.com");

	web_add_cookie("_RwBf=s=70&o=16; DOMAIN=api.bing.com");

	web_url("qsml.aspx", 
		"URL=http://api.bing.com/qsml.aspx?query=http%3A%2F%2Fkalimanjaro.hpswlabs.hpswlabs.adapps.hp.com%2Fstreaming-test%2F&maxwidth=32765&rowheight=20&sectionHeight=200&FORM=IE8SSC&market=en-us", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_custom_request("urs.asmx", 
		"URL=https://urs.microsoft.com/urs.asmx?MSURS-Client-Key=Jf5RH3mZXbcHpS%2bFUIzICA%3d%3d&MSURS-Patented-Lock=jsLKAWDfBzQ%3d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<RepLookup v=\"3\"><G>ED8654D5-B9F0-4DD9-B3E8-F8F560086FDF</G><O>00000000-0000-0000-0000-000000000000</O><D>9.0.8110.0</D><C>9.00.8112.16421</C><OS>6.1.7601.1.0</OS><I>9.0.8112.16421</I><L>en-US</L><R><Rq><URL>aHR0cDovL2thbGltYW5qYXJvLmhwc3dsYWJzLmhwc3dsYWJzLmFkYXBwcy5ocC5jb20vc3RyZWFtaW5nLXRlc3Qv</URL><O>POST</O><T>TOP</T><HIP>0.0.0.0</HIP></Rq></R></RepLookup>", 
		LAST);

	web_custom_request("urs.asmx_2", 
		"URL=https://urs.microsoft.com/urs.asmx?MSURS-Client-Key=fQNRx43Z5IhBEI175EZXtg%3d%3d&MSURS-Patented-Lock=nDmsWwe3TCs%3d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<RepLookup v=\"3\"><G>ED8654D5-B9F0-4DD9-B3E8-F8F560086FDF</G><O>00000000-0000-0000-0000-000000000000</O><D>9.0.8110.0</D><C>9.00.8112.16421</C><OS>6.1.7601.1.0</OS><I>9.0.8112.16421</I><L>en-US</L><R><Rq><URL>aHR0cDovL2thbGltYW5qYXJvLmhwc3dsYWJzLmhwc3dsYWJzLmFkYXBwcy5ocC5jb20vc3RyZWFtaW5nLXRlc3Qv</URL><O>PRE</O><T>TOP</T><HIP>0.0.0.0</HIP></Rq></R></RepLookup>", 
		LAST);

	lr_think_time(5);

	web_url("qsml.aspx_2", 
		"URL=http://api.bing.com/qsml.aspx?query=http%3A%2F%2Fkalimanjaro.hpswlabs.hpswlabs.adapps.hp.com%2Fstreaming-test&maxwidth=32765&rowheight=20&sectionHeight=200&FORM=IE8SSC&market=en-us", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_url("qsml.aspx_3", 
		"URL=http://api.bing.com/qsml.aspx?query=http%3A%2F%2Fkalimanjaro.hpswlabs.hpswlabs.adapps.hp.com%2Fstreaming-tes&maxwidth=32765&rowheight=20&sectionHeight=200&FORM=IE8SSC&market=en-us", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("qsml.aspx_4", 
		"URL=http://api.bing.com/qsml.aspx?query=http%3A%2F%2Fkalimanjaro.hpswlabs.hpswlabs.adapps.hp.com%2Fstreaming-t&maxwidth=32765&rowheight=20&sectionHeight=200&FORM=IE8SSC&market=en-us", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_url("qsml.aspx_5", 
		"URL=http://api.bing.com/qsml.aspx?query=http%3A%2F%2Fkalimanjaro.hpswlabs.hpswlabs.adapps.hp.com%2Fs&maxwidth=32765&rowheight=20&sectionHeight=200&FORM=IE8SSC&market=en-us", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		LAST);

	web_url("qsml.aspx_6", 
		"URL=http://api.bing.com/qsml.aspx?query=http%3A%2F%2Fkalimanjaro.hpswlabs.hpswlabs.adapps.hp.com%2F&maxwidth=32765&rowheight=20&sectionHeight=200&FORM=IE8SSC&market=en-us", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("urs.asmx_3", 
		"URL=https://urs.microsoft.com/urs.asmx?MSURS-Client-Key=GPE90lotTDwz2JwGBzf0/w%3d%3d&MSURS-Patented-Lock=ZhLYcFTXJDg%3d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<RepLookup v=\"3\"><G>ED8654D5-B9F0-4DD9-B3E8-F8F560086FDF</G><O>00000000-0000-0000-0000-000000000000</O><D>9.0.8110.0</D><C>9.00.8112.16421</C><OS>6.1.7601.1.0</OS><I>9.0.8112.16421</I><L>en-US</L><R><Rq><URL>aHR0cDovL2thbGltYW5qYXJvLmhwc3dsYWJzLmhwc3dsYWJzLmFkYXBwcy5ocC5jb20v</URL><O>POST</O><T>TOP</T><HIP>0.0.0.0</HIP></Rq></R></RepLookup>", 
		LAST);

	web_add_cookie("MUID=035F7E67964A6957394F763C924A6FC9; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MC1=GUID=9ed62297c038d24cbea28995c983af52&HASH=9722&LV=201511&V=4&LU=1447167121009; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAAAMBgAA/0HEc1pMoEikfiKLGp2pNA!!&V=4; DOMAIN=iecvlist.microsoft.com");

	web_custom_request("urs.asmx_4", 
		"URL=https://urs.microsoft.com/urs.asmx?MSURS-Client-Key=YcSbHKMNM/Jui77e/SI3mw%3d%3d&MSURS-Patented-Lock=4xeBBhRyg0U%3d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<RepLookup v=\"3\"><G>ED8654D5-B9F0-4DD9-B3E8-F8F560086FDF</G><O>00000000-0000-0000-0000-000000000000</O><D>9.0.8110.0</D><C>9.00.8112.16421</C><OS>6.1.7601.1.0</OS><I>9.0.8112.16421</I><L>en-US</L><R><Rq><URL>aHR0cDovL2thbGltYW5qYXJvLmhwc3dsYWJzLmhwc3dsYWJzLmFkYXBwcy5ocC5jb20v</URL><O>PRE</O><T>TOP</T><HIP>0.0.0.0</HIP></Rq></R></RepLookup>", 
		EXTRARES, 
		"Url=https://iecvlist.microsoft.com/ie11blocklist/1401746408/versionlist.xml", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(1424);

	web_custom_request("urs.asmx_5", 
		"URL=https://urs.microsoft.com/urs.asmx?MSURS-Client-Key=YcSbHKMNM/Jui77e/SI3mw%3d%3d&MSURS-Patented-Lock=4xeBBhRyg0U%3d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<RepLookup v=\"3\"><G>ED8654D5-B9F0-4DD9-B3E8-F8F560086FDF</G><O>00000000-0000-0000-0000-000000000000</O><D>9.0.8110.0</D><C>9.00.8112.16421</C><OS>6.1.7601.1.0</OS><I>9.0.8112.16421</I><L>en-US</L><R><Rq><URL>aHR0cDovL2thbGltYW5qYXJvLmhwc3dsYWJzLmhwc3dsYWJzLmFkYXBwcy5ocC5jb20v</URL><O>PRE</O><T>TOP</T><HIP>0.0.0.0</HIP></Rq></R></RepLookup>", 
		LAST);

	web_custom_request("urs.asmx_6", 
		"URL=https://urs.microsoft.com/urs.asmx?MSURS-Client-Key=GPE90lotTDwz2JwGBzf0/w%3d%3d&MSURS-Patented-Lock=ZhLYcFTXJDg%3d", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=utf-8", 
		"Body=<RepLookup v=\"3\"><G>ED8654D5-B9F0-4DD9-B3E8-F8F560086FDF</G><O>00000000-0000-0000-0000-000000000000</O><D>9.0.8110.0</D><C>9.00.8112.16421</C><OS>6.1.7601.1.0</OS><I>9.0.8112.16421</I><L>en-US</L><R><Rq><URL>aHR0cDovL2thbGltYW5qYXJvLmhwc3dsYWJzLmhwc3dsYWJzLmFkYXBwcy5ocC5jb20v</URL><O>POST</O><T>TOP</T><HIP>0.0.0.0</HIP></Rq></R></RepLookup>", 
		LAST);

	return 0;
}