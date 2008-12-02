var wlantopmenu = new Object();
wlantopmenu.basicset="Grundlegende<br>Wireless-Einstellungen";
wlantopmenu.security="Sicherheit im<br>&nbsp;Wireless-Netzwerkbetrieb";
wlantopmenu.macfilter="Wireless-MAC-Filter";
wlantopmenu.advwireless="Erweiterte<br>Wireless-Einstellungen";

var wlanleftmenu = new Object();
wlanleftmenu.wirelessnet="Wireless-Netzwerkmodus";
wlanleftmenu.wirelessmacfilter="Wireless-MAC-Filter";
wlanleftmenu.advwireless="Erweitertes Wireless";

var wlansetup = new Object();
//wlansetup.networkmode="Wireless Network Mode";*
wlansetup.networkmode="Wireless-Netzwerkmodus";
wlansetup.ssid="Wireless-Netzwerk-Name\n&nbsp;(SSID)";
wlansetup.channel="Wireless-Kanal";
wlansetup.ssidbroadcast="Wireless-SSID-Übertragung";
wlansetup.aonly="Nur A";
wlansetup.mixed="Gemischt";
wlansetup.bonly="Nur B";
wlansetup.gonly="Nur G";
//wlansetup.superg="Super-G";*
wlansetup.superg="Super-G";
//wlansetup.turbogdyn="TurboG Dynamic";
wlansetup.turbogdyn="TurboG Dynamic";
wlansetup.ch1="2,412 GHz";
wlansetup.ch2="2,417 GHz";
wlansetup.ch3="2,422 GHz";
wlansetup.ch4="2,427 GHz";
wlansetup.ch5="2,432 GHz";
wlansetup.ch6="2,437 GHz";
wlansetup.ch7="2,442 GHz";
wlansetup.ch8="2,447 GHz";
wlansetup.ch9="2,452 GHz";
wlansetup.ch10="2,457 GHz";
wlansetup.ch11="2,462 GHz";
wlansetup.ch12="2,467 GHz";
wlansetup.ch13="2,472 GHz";
wlansetup.ch14="2,477 GHz";

var wlansec = new Object();
wlansec.wpapersharekey="WPA Vorläufiger gemeinsamer Schlüssel";
wlansec.wparadius="WPA RADIUS";
wlansec.radius="RADIUS";
wlansec.wep="WEP";
wlansec.secmode="Sicherheitsmodus";
wlansec.wpaalg="WPA-Algorithmen";
wlansec.tkip="TKIP";
wlansec.aes="AES";
wlansec.wpaskey="WPA Gemeinsamer &nbsp;Schlüssel";
wlansec.groupkey="Erneuerung &nbsp;Gruppenschlüssel";
wlansec.seconds="Sekunden";
wlansec.radiussrv="RADIUS-Server-<br>&nbsp;Adresse";
wlansec.radiusport="RADIUS-Port";
wlansec.sharekey="Freigegebener<br>&nbsp;Schlüssel";

wlansec.keyretimeout="Wartezeit für &nbsp;Schlüsselerneuerung";
wlansec.deftrankey="Standard-<br>&nbsp;Übertragungsschlüssel";
wlansec.wepencry="WEP-Verschlüsselung";
wlansec.tenhex="64 Bit (10 Hexadezimalziffern)";
wlansec.twentysixhex="128 Bit (26 Hexadezimalziffern)";
wlansec.passphrase="Passphrase";
wlansec.key1="Schlüssel 1";
wlansec.key2="Schlüssel 2";
wlansec.key3="Schlüssel 3";
wlansec.key4="Schlüssel 4";

var wlanfilter = new Object();
wlanfilter.prevent="Verweigern";
wlanfilter.pclist="Bei Auswahl der Option <b>Verweigern</b> <br>wird den aufgeführten Computern der Zugriff auf das <br>Wireless-Netzwerk verweigert.";
wlanfilter.network="Netzwerk";
wlanfilter.permitonly="Nur zulassen";
wlanfilter.pclisttoacc="Bei Auswahl der Option <b>Nur zulassen</b> <br>wird nur den aufgeführten Computern der Zugriff auf <br>das Wireless-Netzwerk erlaubt.";

var wlanmaclist = new Object();
wlanmaclist.macaddrlist="MAC-Adressen-Filterliste";
wlanmaclist.macformat="Geben Sie die MAC-Adresse in folgendem Format ein";
wlanmaclist.mac01="MAC 01";
wlanmaclist.mac02="MAC 02";
wlanmaclist.mac03="MAC 03";
wlanmaclist.mac04="MAC 04";
wlanmaclist.mac05="MAC 05";
wlanmaclist.mac06="MAC 06";
wlanmaclist.mac07="MAC 07";
wlanmaclist.mac08="MAC 08";
wlanmaclist.mac09="MAC 09";
wlanmaclist.mac10="MAC 10";
wlanmaclist.mac11="MAC 11";
wlanmaclist.mac12="MAC 12";
wlanmaclist.mac13="MAC 13";
wlanmaclist.mac14="MAC 14";
wlanmaclist.mac15="MAC 15";
wlanmaclist.mac16="MAC 16";
wlanmaclist.mac17="MAC 17";
wlanmaclist.mac18="MAC 18";
wlanmaclist.mac19="MAC 19";
wlanmaclist.mac20="MAC 20";
wlanmaclist.mac21="MAC 21";
wlanmaclist.mac22="MAC 22";
wlanmaclist.mac23="MAC 23";
wlanmaclist.mac24="MAC 24";
wlanmaclist.mac25="MAC 25";
wlanmaclist.mac26="MAC 26";
wlanmaclist.mac27="MAC 27";
wlanmaclist.mac28="MAC 28";
wlanmaclist.mac29="MAC 29";
wlanmaclist.mac30="MAC 30";
wlanmaclist.mac31="MAC 31";
wlanmaclist.mac32="MAC 32";
wlanmaclist.mac33="MAC 33";
wlanmaclist.mac34="MAC 34";
wlanmaclist.mac35="MAC 35";
wlanmaclist.mac36="MAC 36";
wlanmaclist.mac37="MAC 37";
wlanmaclist.mac38="MAC 38";
wlanmaclist.mac39="MAC 39";
wlanmaclist.mac40="MAC 40";

wlanmaclist.actpc="Aktiver PC";
wlanmaclist.clihostname="Client-Hostname";
wlanmaclist.enablefilter="MAC-Filter aktivieren";
wlanmaclist.inactpc="Inaktiver PC";

var wlanadv = new Object();
wlanadv.transrate="Übertragungsrate";
//wlanadv.transpower="Transmit Power";*
wlanadv.transpower="Transmit Power";
//wlanadv.full="Full";*
wlanadv.full="Full";
//wlanadv.halfmthree="Half (-3 dB)";*
wlanadv.halfmthree="Half (-3 dB)";
//wlanadv.quartermsix="Quarter (-6 dB)";*
wlanadv.quartermsix="Quarter (-6 dB)";
//wlanadv.eighth="Eighth (-9 dB)";*
wlanadv.eighth="Eighth (-9 dB)";
//wlanadv.minimum="Minimum";
wlanadv.minimum="Minimum";
//wlanadv.deffull="(Default: Full)";*
wlanadv.deffull="(Default: Full)";
//wlanadv.antdiv="Antenna Diversity";*
wlanadv.antdiv="Antenna Diversity";
//wlanadv.best="Best";
wlanadv.best="Best";
//wlanadv.defbest="(Default: Best)";*
wlanadv.defbest="(Default: Best)";
wlanadv.beacon="Beacon-Intervall";
//wlanadv.defbean="(Default: 100,Milliseconds, Range: 20 - 1000)";*
wlanadv.defbean="(Default: 100,Milliseconds, Range: 20 - 1000)";
wlanadv.dtim="DTIM-Intervall";
//wlanadv.defdtim="(Default: 1, Range: 1 - 255)";*
wlanadv.defdtim="(Default: 1, Range: 1 - 255)";
//wlanadv.fraglength="Fragmentation Length";*
wlanadv.fraglength="Fragmentation Length";
//wlanadv.deffrag="(Default:2346, Range: 256 - 2346)";*
wlanadv.deffrag="(Default:2346, Range: 256 - 2346)";
wlanadv.rts="RTS-Schwelle";
//wlanadv.shortpreamble="Short Preamble";*
wlanadv.shortpreamble="Short Preamble";
wlanadv.deftransrate="(Standard: Auto)";
//wlanadv.protectmode="Protection Mode";
wlanadv.protectmode="CTS-Schutzmodus";
wlanadv.none="Keine";
//wlanadv.always="Always";*
wlanadv.always="Always";
//wlanadv.protectrate="Protection Rate";*
wlanadv.protectrate="Protection Rate";
wlanadv.onembps="1 MBit/s";
wlanadv.twombps="2 MBit/s";
wlanadv.fpfmbps="5.5 MBit/s";
wlanadv.elevmbps="11 MBit/s";
//wlanadv.protecttype="Protection Type";*
wlanadv.protecttype="Protection Type";
//lanadv.ctsonly="CTS-only";*
wlanadv.ctsonly="CTS-only";
wlanadv.rtscts="RTS-CTS";
//wlanadv.slottime="Short Slot Time"*
wlanadv.slottime="Short Slot Time"

var wlanbutton = new Object();
wlanbutton.generate="Erstellen"
wlanbutton.editlist="MAC-Adressen-Filterliste bearbeiten";
wlanbutton.climacls="MAC-Liste der Wireless-Clients";
wlanbutton.updatels="Filterliste aktualisieren";
