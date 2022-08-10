# Proxy Groups:Proxy(Youtube), ProxyUS, Media(Netflix, DisneyPlus), Paypal
rules:
  # > REJECT
  - DOMAIN,sb.scorecardresearch.com,REJECT
  - DOMAIN,browser.events.data.msn.cn,REJECT
  - DOMAIN,assets.msn.com,REJECT
  - DOMAIN,assets2.msn.com,REJECT

  # > Global Proxy 1081
  - SRC-IP-CIDR,192.168.1.100/32,ProxyUS
  # > Global Proxy 1080
  - SRC-IP-CIDR,192.168.1.99/32,Proxy

  # > CUS
  - DOMAIN-SUFFIX,hostloc.com,Proxy
  - DOMAIN-SUFFIX,v2ex.com,Proxy
  - DOMAIN-SUFFIX,deepl.com,Proxy
  - DOMAIN-SUFFIX,ampproject.org,Proxy
  - DOMAIN,token.safebrowsing.apple,Proxy
  - DOMAIN-SUFFIX,vhx.tv,Proxy
  - DOMAIN-SUFFIX,vhx.com,Proxy
  - DOMAIN-SUFFIX,gitcdn.xyz,Proxy
  - DOMAIN-SUFFIX,gitcdn.link,Proxy
  - DOMAIN-SUFFIX,secureservercdn.net,Proxy
  - DOMAIN-SUFFIX,privnote.com,Proxy
  
  # > IPTV
  - DOMAIN-SUFFIX,51zmt.top,Proxy
  - DOMAIN-SUFFIX,tvfix.org,Proxy

  - DOMAIN-SUFFIX,hkdtmb.com,Proxy
  - DOMAIN-SUFFIX,hklive.tv,Proxy
  - DOMAIN-SUFFIX,hkani.me,Proxy
  - DOMAIN-SUFFIX,hkanime.com,Proxy
  - DOMAIN-SUFFIX,hkanime.com.hk,Proxy

  - DOMAIN-SUFFIX,fantv.hk,Proxy
  - DOMAIN-SUFFIX,i-cable.com,Proxy

  - DOMAIN-SUFFIX,tvb.com,Proxy
  - DOMAIN-SUFFIX,crtv.store,Proxy

  - DOMAIN-SUFFIX,sytes.net,Proxy
  - DOMAIN-SUFFIX,4gtv.tv,Proxy
  - DOMAIN-SUFFIX,hinet.net,Proxy

  # > IPTV-TW
  - IP-CIDR,61.219.170.95/32,Proxy,no-resolve

  # > Twitter
  - DOMAIN-SUFFIX,ads-twitter.com,Proxy
  - DOMAIN-SUFFIX,periscope.tv,Proxy
  - DOMAIN-SUFFIX,pscp.tv,Proxy
  - DOMAIN-SUFFIX,t.co,Proxy
  - DOMAIN-SUFFIX,tellapart.com,Proxy
  - DOMAIN-SUFFIX,tweetdeck.com,Proxy
  - DOMAIN-SUFFIX,twimg.com,Proxy
  - DOMAIN-SUFFIX,twitpic.com,Proxy
  - DOMAIN-SUFFIX,twitter.com,Proxy
  - DOMAIN-SUFFIX,twitter.jp,Proxy
  - DOMAIN-SUFFIX,twitterinc.com,Proxy
  - DOMAIN-SUFFIX,twitteroauth.com,Proxy
  - DOMAIN-SUFFIX,twitterstat.us,Proxy
  - DOMAIN-SUFFIX,twtrdns.net,Proxy
  - DOMAIN-SUFFIX,twttr.com,Proxy
  - DOMAIN-SUFFIX,vine.co,Proxy

  # > Telegram
  - DOMAIN-SUFFIX,comments.app,Proxy
  - DOMAIN-SUFFIX,contest.com,Proxy
  - DOMAIN-SUFFIX,graph.org,Proxy
  - DOMAIN-SUFFIX,quiz.directory,Proxy
  - DOMAIN-SUFFIX,t.me,Proxy
  - DOMAIN-SUFFIX,tdesktop.com,Proxy
  - DOMAIN-SUFFIX,telega.one,Proxy
  - DOMAIN-SUFFIX,telegra.ph,Proxy
  - DOMAIN-SUFFIX,telegram.dog,Proxy
  - DOMAIN-SUFFIX,telegram.me,Proxy
  - DOMAIN-SUFFIX,telegram.org,Proxy
  - DOMAIN-SUFFIX,telegram.space,Proxy
  - DOMAIN-SUFFIX,telesco.pe,Proxy
  - DOMAIN-SUFFIX,tg.dev,Proxy
  - DOMAIN-SUFFIX,tx.me,Proxy
  - DOMAIN-SUFFIX,usercontent.dev,Proxy

  - IP-CIDR,91.108.56.0/22,Proxy,no-resolve
  - IP-CIDR,91.108.4.0/22,Proxy,no-resolve
  - IP-CIDR,91.108.8.0/22,Proxy,no-resolve
  - IP-CIDR,91.108.16.0/22,Proxy,no-resolve
  - IP-CIDR,91.108.12.0/22,Proxy,no-resolve
  - IP-CIDR,149.154.160.0/20,Proxy,no-resolve
  - IP-CIDR,91.105.192.0/23,Proxy,no-resolve
  - IP-CIDR,91.108.20.0/22,Proxy,no-resolve
  - IP-CIDR,185.76.151.0/24,Proxy,no-resolve
  - IP-CIDR6,2001:b28:f23d::/48,Proxy,no-resolve
  - IP-CIDR6,2001:b28:f23f::/48,Proxy,no-resolve
  - IP-CIDR6,2001:67c:4e8::/48,Proxy,no-resolve
  - IP-CIDR6,2001:b28:f23c::/48,Proxy,no-resolve
  - IP-CIDR6,2a0a:f280::/32,Proxy,no-resolve
  
  - IP-CIDR,109.239.140.0/24,Proxy,no-resolve
  - IP-CIDR,149.154.164.0/22,Proxy,no-resolve
  - IP-CIDR,149.154.172.0/22,Proxy,no-resolve
  - IP-CIDR,5.28.192.0/18,Proxy,no-resolve

  # > Youtube
  - DOMAIN-SUFFIX,ggpht.cn,Proxy
  - DOMAIN-SUFFIX,ggpht.com,Proxy
  - DOMAIN-SUFFIX,googlevideo.com,Proxy
  - DOMAIN-SUFFIX,withyoutube.com,Proxy
  - DOMAIN-SUFFIX,youtu.be,Proxy
  - DOMAIN-SUFFIX,youtube-nocookie.com,Proxy
  - DOMAIN-SUFFIX,youtube-ui.l.google.com,Proxy
  - DOMAIN-SUFFIX,youtube.com,Proxy
  - DOMAIN-SUFFIX,youtube.com.sg,Proxy
  - DOMAIN-SUFFIX,youtube.sg,Proxy
  - DOMAIN-SUFFIX,youtubeeducation.com,Proxy
  - DOMAIN-SUFFIX,youtubefanfest.com,Proxy
  - DOMAIN-SUFFIX,youtubegaming.com,Proxy
  - DOMAIN-SUFFIX,youtubego.com,Proxy
  - DOMAIN-SUFFIX,youtubekids.com,Proxy
  - DOMAIN-SUFFIX,youtubemobilesupport.com,Proxy
  - DOMAIN-SUFFIX,yt.be,Proxy
  - DOMAIN-SUFFIX,ytimg.com,Proxy
  - DOMAIN-SUFFIX,googleapis.com,Proxy

  # > Netflix
  - DOMAIN-SUFFIX,fast.com,Media
  - DOMAIN-SUFFIX,netflix.ca,Media
  - DOMAIN-SUFFIX,netflix.com,Media
  - DOMAIN-SUFFIX,netflix.net,Media
  - DOMAIN-SUFFIX,netflixinvestor.com,Media
  - DOMAIN-SUFFIX,netflixtechblog.com,Media
  - DOMAIN-SUFFIX,nflxext.com,Media
  - DOMAIN-SUFFIX,nflximg.com,Media
  - DOMAIN-SUFFIX,nflximg.net,Media
  - DOMAIN-SUFFIX,nflxsearch.net,Media
  - DOMAIN-SUFFIX,nflxso.net,Media
  - DOMAIN-SUFFIX,nflxvideo.net,Media

  - DOMAIN-SUFFIX,netflixdnstest1.com,Media
  - DOMAIN-SUFFIX,netflixdnstest2.com,Media
  - DOMAIN-SUFFIX,netflixdnstest3.com,Media
  - DOMAIN-SUFFIX,netflixdnstest4.com,Media
  - DOMAIN-SUFFIX,netflixdnstest5.com,Media
  - DOMAIN-SUFFIX,netflixdnstest6.com,Media
  - DOMAIN-SUFFIX,netflixdnstest7.com,Media
  - DOMAIN-SUFFIX,netflixdnstest8.com,Media
  - DOMAIN-SUFFIX,netflixdnstest9.com,Media
  - DOMAIN-SUFFIX,netflixdnstest10.com,Media

  - DOMAIN-SUFFIX,amazonaws.com,Media
  - DOMAIN-SUFFIX,akamaiedge.net,Media

  - DOMAIN,netflix.com.edgesuite.net,Media
  
  - DOMAIN-KEYWORD,netflixdnstest,Media
  - DOMAIN-KEYWORD,dualstack.apiproxy-,Media
  - DOMAIN-KEYWORD,dualstack.ichnaea-web-,Media
  - DOMAIN-KEYWORD,apiproxy-device-prod-nlb-,Media

  - IP-CIDR,23.246.0.0/18,Media,no-resolve
  - IP-CIDR,37.77.184.0/21,Media,no-resolve
  - IP-CIDR,38.72.126.0/24,Media,no-resolve
  - IP-CIDR,45.57.0.0/17,Media,no-resolve
  - IP-CIDR,64.120.128.0/17,Media,no-resolve
  - IP-CIDR,66.197.128.0/17,Media,no-resolve
  - IP-CIDR,69.53.224.0/19,Media,no-resolve
  - IP-CIDR,103.87.204.0/22,Media,no-resolve
  - IP-CIDR,108.175.32.0/20,Media,no-resolve
  - IP-CIDR,185.2.220.0/22,Media,no-resolve
  - IP-CIDR,185.9.188.0/22,Media,no-resolve
  - IP-CIDR,192.173.64.0/18,Media,no-resolve
  - IP-CIDR,198.38.96.0/19,Media,no-resolve
  - IP-CIDR,198.45.48.0/20,Media,no-resolve
  - IP-CIDR,208.75.76.0/22,Media,no-resolve
  - IP-CIDR,34.210.42.111/32,Media,no-resolve
  - IP-CIDR,52.89.124.203/32,Media,no-resolve
  - IP-CIDR,54.148.37.5/32,Media,no-resolve

  - IP-CIDR,8.8.8.8/32,Media,no-resolve
  - IP-CIDR,8.8.4.4/32,Media,no-resolve

  # > Disney Plus
  - DOMAIN-SUFFIX,adobedtm.com,Media
  - DOMAIN-SUFFIX,bam.nr-date.net,Media
  - DOMAIN-SUFFIX,bamgrid.com,Media
  - DOMAIN-SUFFIX,braze.com,Media
  - DOMAIN-SUFFIX,cdn.optimizely.com,Media
  - DOMAIN-SUFFIX,cdn.registerdisney.go.com,Media
  - DOMAIN-SUFFIX,cws.conviva.com,Media
  - DOMAIN-SUFFIX,d9.flashtalking.com,Media
  - DOMAIN-SUFFIX,disney.demdex.net,Media
  - DOMAIN-SUFFIX,disney.my.sentry.io,Media
  - DOMAIN-SUFFIX,disneyplus.bn5x.net,Media
  - DOMAIN-SUFFIX,disneyplus.com,Media
  - DOMAIN-SUFFIX,disneyplus.com.ssl.sc.omtrdc.net,Media
  - DOMAIN-SUFFIX,disney-plus.net,Media
  - DOMAIN-SUFFIX,disney-portal.my.onetrust.com,Media
  - DOMAIN-SUFFIX,dssott.com,Media
  - DOMAIN-SUFFIX,execute-api.us-east-1.amazonaws.com,Media
  - DOMAIN-SUFFIX,js-agent.newrelic.com,Media

  # > Dropbox
  - DOMAIN-SUFFIX,db.tt,Proxy
  - DOMAIN-SUFFIX,dropbox-dns.com,Proxy
  - DOMAIN-SUFFIX,dropbox.com,Proxy
  - DOMAIN-SUFFIX,dropbox.tech,Proxy
  - DOMAIN-SUFFIX,dropboxapi.com,Proxy
  - DOMAIN-SUFFIX,dropboxbusiness.com,Proxy
  - DOMAIN-SUFFIX,dropboxcaptcha.com,Proxy
  - DOMAIN-SUFFIX,dropboxforum.com,Proxy
  - DOMAIN-SUFFIX,dropboxforums.com,Proxy
  - DOMAIN-SUFFIX,dropboxinsiders.com,Proxy
  - DOMAIN-SUFFIX,dropboxmail.com,Proxy
  - DOMAIN-SUFFIX,dropboxpartners.com,Proxy
  - DOMAIN-SUFFIX,dropboxstatic.com,Proxy
  - DOMAIN-SUFFIX,dropboxusercontent.com,Proxy
  - DOMAIN-SUFFIX,getdropbox.com,Proxy

  # > Github
  - DOMAIN-SUFFIX,atom.io,Proxy
  - DOMAIN-SUFFIX,dependabot.com,Proxy
  - DOMAIN-SUFFIX,ghcr.io,Proxy
  - DOMAIN-SUFFIX,git.io,Proxy
  - DOMAIN-SUFFIX,github.blog,Proxy
  - DOMAIN-SUFFIX,github.com,Proxy
  - DOMAIN-SUFFIX,github.community,Proxy
  - DOMAIN-SUFFIX,github.dev,Proxy
  - DOMAIN-SUFFIX,github.io,Proxy
  - DOMAIN-SUFFIX,githubapp.com,Proxy
  - DOMAIN-SUFFIX,githubassets.com,Proxy
  - DOMAIN-SUFFIX,githubhackathon.com,Proxy
  - DOMAIN-SUFFIX,githubpreview.dev,Proxy
  - DOMAIN-SUFFIX,githubstatus.com,Proxy
  - DOMAIN-SUFFIX,githubuniverse.com,Proxy
  - DOMAIN-SUFFIX,githubusercontent.com,Proxy
  - DOMAIN-SUFFIX,myoctocat.com,Proxy
  - DOMAIN-SUFFIX,opensource.guide,Proxy
  - DOMAIN-SUFFIX,thegithubshop.com,Proxy

  # > Gitlab
  - DOMAIN-SUFFIX,gitlab.com,Proxy
  - DOMAIN-SUFFIX,gitlab.io,Proxy
  - DOMAIN-SUFFIX,gitlab.net,Proxy
  - DOMAIN-SUFFIX,gitlab-static.net,Proxy

  # > GitBook
  - DOMAIN-SUFFIX,gitbook.com,Proxy
  - DOMAIN-SUFFIX,gitbook.io,Proxy

  # > JSDelivr
  - DOMAIN-SUFFIX,jsdelivr.com,Proxy
  - DOMAIN-SUFFIX,jsdelivr.net,Proxy
  - DOMAIN-SUFFIX,esm.run,Proxy

  # > StackExchange
  - DOMAIN-SUFFIX,askubuntu.com,Proxy
  - DOMAIN-SUFFIX,blogoverflow.com,Proxy
  - DOMAIN-SUFFIX,codeforaliving.io,Proxy
  - DOMAIN-SUFFIX,mathoverflow.net,Proxy
  - DOMAIN-SUFFIX,serverfault.com,Proxy
  - DOMAIN-SUFFIX,sstatic.net,Proxy
  - DOMAIN-SUFFIX,stackapps.com,Proxy
  - DOMAIN-SUFFIX,stackauth.com,Proxy
  - DOMAIN-SUFFIX,stackexchange.com,Proxy
  - DOMAIN-SUFFIX,stackmod.blog,Proxy
  - DOMAIN-SUFFIX,stackoverflow.blog,Proxy
  - DOMAIN-SUFFIX,stackoverflow.co,Proxy
  - DOMAIN-SUFFIX,stackoverflow.com,Proxy
  - DOMAIN-SUFFIX,stackoverflow.email,Proxy
  - DOMAIN-SUFFIX,stackoverflowbusiness.com,Proxy
  - DOMAIN-SUFFIX,stackoverflowcareers.com,Proxy
  - DOMAIN-SUFFIX,stacksnippets.net,Proxy
  - DOMAIN-SUFFIX,superuser.com,Proxy
  - DOMAIN-SUFFIX,tex-talk.net,Proxy
  - DOMAIN-SUFFIX,thesffblog.com,Proxy

  # > Python
  - DOMAIN-SUFFIX,pycon.org,Proxy
  - DOMAIN-SUFFIX,pypa.io,Proxy
  - DOMAIN-SUFFIX,pypi.io,Proxy
  - DOMAIN-SUFFIX,pypi.org,Proxy
  - DOMAIN-SUFFIX,python.org,Proxy
  - DOMAIN-SUFFIX,pythonhosted.org,Proxy
  - DOMAIN-SUFFIX,piwheels.org,Proxy

  # > Javascript
  - DOMAIN-SUFFIX,javascript.info,Proxy

  # > Wikimedia
  - DOMAIN-SUFFIX,mediawiki.org,Proxy
  - DOMAIN-SUFFIX,wikibooks.org,Proxy
  - DOMAIN-SUFFIX,wikidata.org,Proxy
  - DOMAIN-SUFFIX,wikimediafoundation.org,Proxy
  - DOMAIN-SUFFIX,wikimedia.org,Proxy
  - DOMAIN-SUFFIX,wikinews.org,Proxy
  - DOMAIN-SUFFIX,wikipedia.org,Proxy
  - DOMAIN-SUFFIX,wikiquote.org,Proxy
  - DOMAIN-SUFFIX,wikisource.org,Proxy
  - DOMAIN-SUFFIX,wikiversity.org,Proxy
  - DOMAIN-SUFFIX,wikivoyage.org,Proxy
  - DOMAIN-SUFFIX,wiktionary.org,Proxy
  - DOMAIN-SUFFIX,wmfusercontent.org,Proxy
  - DOMAIN-SUFFIX,w.wiki,Proxy
  - DOMAIN-SUFFIX,toolforge.org,Proxy
  - DOMAIN-SUFFIX,wikimediacloud.org,Proxy
  - DOMAIN-SUFFIX,wmcloud.org,Proxy
  - DOMAIN-SUFFIX,wmflabs.org,Proxy
  
  # > wikiHow
  - DOMAIN-SUFFIX,wikihow.com,Proxy

  # > hCaptcha
  - DOMAIN-SUFFIX,botstop.com,Proxy
  - DOMAIN-SUFFIX,hcaptcha.com,Proxy
  - DOMAIN-SUFFIX,hcaptchastatus.com,Proxy

  # > Google
  - DOMAIN-SUFFIX,android.com,Proxy
  - DOMAIN-SUFFIX,androidify.com,Proxy
  - DOMAIN-SUFFIX,blogger.com,Proxy
  - DOMAIN-SUFFIX,blogblog.com,Proxy
  - DOMAIN-SUFFIX,blogspot.com,Proxy
  - DOMAIN-SUFFIX,blogspot.sg,Proxy
  - DOMAIN-SUFFIX,go-lang.com,Proxy
  - DOMAIN-SUFFIX,go-lang.net,Proxy
  - DOMAIN-SUFFIX,go-lang.org,Proxy
  - DOMAIN-SUFFIX,go.dev,Proxy
  - DOMAIN-SUFFIX,godoc.org,Proxy
  - DOMAIN-SUFFIX,golang.com,Proxy
  - DOMAIN-SUFFIX,golang.net,Proxy
  - DOMAIN-SUFFIX,golang.org,Proxy
  - DOMAIN-SUFFIX,and,Proxy
  - DOMAIN-SUFFIX,chrome,Proxy
  - DOMAIN-SUFFIX,dclk,Proxy
  - DOMAIN-SUFFIX,gbiz,Proxy
  - DOMAIN-SUFFIX,gle,Proxy
  - DOMAIN-SUFFIX,gmail,Proxy
  - DOMAIN-SUFFIX,goo,Proxy
  - DOMAIN-SUFFIX,goog,Proxy
  - DOMAIN-SUFFIX,google,Proxy
  - DOMAIN-SUFFIX,guge,Proxy
  - DOMAIN-SUFFIX,hangout,Proxy
  - DOMAIN-SUFFIX,nexus,Proxy
  - DOMAIN-SUFFIX,xn--flw351e,Proxy
  - DOMAIN-SUFFIX,xn--qcka1pmc,Proxy
  - DOMAIN-SUFFIX,google.com,Proxy
  - DOMAIN-SUFFIX,google.com.sg,Proxy
  - DOMAIN-SUFFIX,0emm.com,Proxy
  - DOMAIN-SUFFIX,1e100.net,Proxy
  - DOMAIN-SUFFIX,1ucrs.com,Proxy
  - DOMAIN-SUFFIX,466453.com,Proxy
  - DOMAIN-SUFFIX,abc.xyz,Proxy
  - DOMAIN-SUFFIX,adgoogle.net,Proxy
  - DOMAIN-SUFFIX,admeld.com,Proxy
  - DOMAIN-SUFFIX,angulardart.org,Proxy
  - DOMAIN-SUFFIX,api.ai,Proxy
  - DOMAIN-SUFFIX,apigee.com,Proxy
  - DOMAIN-SUFFIX,appbridge.ca,Proxy
  - DOMAIN-SUFFIX,appbridge.io,Proxy
  - DOMAIN-SUFFIX,appbridge.it,Proxy
  - DOMAIN-SUFFIX,appspot.com,Proxy
  - DOMAIN-SUFFIX,apture.com,Proxy
  - DOMAIN-SUFFIX,area120.com,Proxy
  - DOMAIN-SUFFIX,asp-cc.com,Proxy
  - DOMAIN-SUFFIX,autodraw.com,Proxy
  - DOMAIN-SUFFIX,bandpage.com,Proxy
  - DOMAIN-SUFFIX,baselinestudy.com,Proxy
  - DOMAIN-SUFFIX,baselinestudy.org,Proxy
  - DOMAIN-SUFFIX,bazel.build,Proxy
  - DOMAIN-SUFFIX,bdn.dev,Proxy
  - DOMAIN-SUFFIX,beatthatquote.com,Proxy
  - DOMAIN-SUFFIX,blink.org,Proxy
  - DOMAIN-SUFFIX,brocaproject.com,Proxy
  - DOMAIN-SUFFIX,brotli.org,Proxy
  - DOMAIN-SUFFIX,bumpshare.com,Proxy
  - DOMAIN-SUFFIX,bumptop.ca,Proxy
  - DOMAIN-SUFFIX,bumptop.com,Proxy
  - DOMAIN-SUFFIX,bumptop.net,Proxy
  - DOMAIN-SUFFIX,bumptop.org,Proxy
  - DOMAIN-SUFFIX,bumptunes.com,Proxy
  - DOMAIN-SUFFIX,campuslondon.com,Proxy
  - DOMAIN-SUFFIX,certificate-transparency.org,Proxy
  - DOMAIN-SUFFIX,chrome.com,Proxy
  - DOMAIN-SUFFIX,chromebook.com,Proxy
  - DOMAIN-SUFFIX,chromecast.com,Proxy
  - DOMAIN-SUFFIX,chromeos.dev,Proxy
  - DOMAIN-SUFFIX,chromium.org,Proxy
  - DOMAIN-SUFFIX,chronicle.security,Proxy
  - DOMAIN-SUFFIX,chroniclesec.com,Proxy
  - DOMAIN-SUFFIX,cloudburstresearch.com,Proxy
  - DOMAIN-SUFFIX,cloudfunctions.net,Proxy
  - DOMAIN-SUFFIX,cloudproxy.app,Proxy
  - DOMAIN-SUFFIX,cloudrobotics.com,Proxy
  - DOMAIN-SUFFIX,cobrasearch.com,Proxy
  - DOMAIN-SUFFIX,codespot.com,Proxy
  - DOMAIN-SUFFIX,conscrypt.com,Proxy
  - DOMAIN-SUFFIX,conscrypt.org,Proxy
  - DOMAIN-SUFFIX,cookiechoices.org,Proxy
  - DOMAIN-SUFFIX,coova.com,Proxy
  - DOMAIN-SUFFIX,coova.net,Proxy
  - DOMAIN-SUFFIX,coova.org,Proxy
  - DOMAIN-SUFFIX,crossmediapanel.com,Proxy
  - DOMAIN-SUFFIX,crr.com,Proxy
  - DOMAIN-SUFFIX,cs4hs.com,Proxy
  - DOMAIN-SUFFIX,dartsearch.net,Proxy
  - DOMAIN-SUFFIX,dataliberation.org,Proxy
  - DOMAIN-SUFFIX,debug.com,Proxy
  - DOMAIN-SUFFIX,debugproject.com,Proxy
  - DOMAIN-SUFFIX,deepmind.com,Proxy
  - DOMAIN-SUFFIX,devsitetest.how,Proxy
  - DOMAIN-SUFFIX,dialogflow.com,Proxy
  - DOMAIN-SUFFIX,digitalassetlinks.org,Proxy
  - DOMAIN-SUFFIX,episodic.com,Proxy
  - DOMAIN-SUFFIX,feedburner.com,Proxy
  - DOMAIN-SUFFIX,fflick.com,Proxy
  - DOMAIN-SUFFIX,financeleadsonline.com,Proxy
  - DOMAIN-SUFFIX,firebaseapp.com,Proxy
  - DOMAIN-SUFFIX,firebaseio.com,Proxy
  - DOMAIN-SUFFIX,foofle.com,Proxy
  - DOMAIN-SUFFIX,froogle.com,Proxy
  - DOMAIN-SUFFIX,fuchsia.dev,Proxy
  - DOMAIN-SUFFIX,g-tun.com,Proxy
  - DOMAIN-SUFFIX,g.cn,Proxy
  - DOMAIN-SUFFIX,g.co,Proxy
  - DOMAIN-SUFFIX,g.dev,Proxy
  - DOMAIN-SUFFIX,g.page,Proxy
  - DOMAIN-SUFFIX,gateway.dev,Proxy
  - DOMAIN-SUFFIX,gcr.io,Proxy
  - DOMAIN-SUFFIX,gerritcodereview.com,Proxy
  - DOMAIN-SUFFIX,getbumptop.com,Proxy
  - DOMAIN-SUFFIX,ggoogle.com,Proxy
  - DOMAIN-SUFFIX,gipscorp.com,Proxy
  - DOMAIN-SUFFIX,gkecnapps.cn,Proxy
  - DOMAIN-SUFFIX,globaledu.org,Proxy
  - DOMAIN-SUFFIX,gmail.com,Proxy
  - DOMAIN-SUFFIX,gmodules.com,Proxy
  - DOMAIN-SUFFIX,gogle.com,Proxy
  - DOMAIN-SUFFIX,gogole.com,Proxy
  - DOMAIN-SUFFIX,gonglchuangl.net,Proxy
  - DOMAIN-SUFFIX,goo.gl,Proxy
  - DOMAIN-SUFFIX,googel.com,Proxy
  - DOMAIN-SUFFIX,googil.com,Proxy
  - DOMAIN-SUFFIX,googl.com,Proxy
  - DOMAIN-SUFFIX,google-syndication.com,Proxy
  - DOMAIN-SUFFIX,google.berlin,Proxy
  - DOMAIN-SUFFIX,google.dev,Proxy
  - DOMAIN-SUFFIX,google.net,Proxy
  - DOMAIN-SUFFIX,google.org,Proxy
  - DOMAIN-SUFFIX,google.ventures,Proxy
  - DOMAIN-SUFFIX,googleacquisitionmigration.com,Proxy
  - DOMAIN-SUFFIX,googleapis.cn,Proxy
  - DOMAIN-SUFFIX,googleapis.com,Proxy
  - DOMAIN-SUFFIX,googleapps.com,Proxy
  - DOMAIN-SUFFIX,googlearth.com,Proxy
  - DOMAIN-SUFFIX,googleblog.com,Proxy
  - DOMAIN-SUFFIX,googlebot.com,Proxy
  - DOMAIN-SUFFIX,googlecapital.com,Proxy
  - DOMAIN-SUFFIX,googlecert.net,Proxy
  - DOMAIN-SUFFIX,googlecnapps.cn,Proxy
  - DOMAIN-SUFFIX,googlecode.com,Proxy
  - DOMAIN-SUFFIX,googlecommerce.com,Proxy
  - DOMAIN-SUFFIX,googlecompare.co.uk,Proxy
  - DOMAIN-SUFFIX,googledanmark.com,Proxy
  - DOMAIN-SUFFIX,googledomains.com,Proxy
  - DOMAIN-SUFFIX,googledrive.com,Proxy
  - DOMAIN-SUFFIX,googlee.com,Proxy
  - DOMAIN-SUFFIX,googleearth.com,Proxy
  - DOMAIN-SUFFIX,googlefiber.net,Proxy
  - DOMAIN-SUFFIX,googlefinland.com,Proxy
  - DOMAIN-SUFFIX,googlemail.com,Proxy
  - DOMAIN-SUFFIX,googlemaps.com,Proxy
  - DOMAIN-SUFFIX,googlepagecreator.com,Proxy
  - DOMAIN-SUFFIX,googlephotos.com,Proxy
  - DOMAIN-SUFFIX,googleplay.com,Proxy
  - DOMAIN-SUFFIX,googleplus.com,Proxy
  - DOMAIN-SUFFIX,googlesource.com,Proxy
  - DOMAIN-SUFFIX,googlestore.com,Proxy
  - DOMAIN-SUFFIX,googlesverige.com,Proxy
  - DOMAIN-SUFFIX,googleusercontent.com,Proxy
  - DOMAIN-SUFFIX,googleventures.com,Proxy
  - DOMAIN-SUFFIX,googlr.com,Proxy
  - DOMAIN-SUFFIX,goolge.com,Proxy
  - DOMAIN-SUFFIX,gooogle.com,Proxy
  - DOMAIN-SUFFIX,gridaware.app,Proxy
  - DOMAIN-SUFFIX,gsrc.io,Proxy
  - DOMAIN-SUFFIX,gstatic.cn,Proxy
  - DOMAIN-SUFFIX,gstatic.com,Proxy
  - DOMAIN-SUFFIX,gstaticcnapps.cn,Proxy
  - DOMAIN-SUFFIX,gsuite.com,Proxy
  - DOMAIN-SUFFIX,gv.com,Proxy
  - DOMAIN-SUFFIX,gvt0.com,Proxy
  - DOMAIN-SUFFIX,gvt1.com,Proxy
  - DOMAIN-SUFFIX,gvt2.com,Proxy
  - DOMAIN-SUFFIX,gvt3.com,Proxy
  - DOMAIN-SUFFIX,gvt5.com,Proxy
  - DOMAIN-SUFFIX,gvt6.com,Proxy
  - DOMAIN-SUFFIX,gvt7.com,Proxy
  - DOMAIN-SUFFIX,gvt9.com,Proxy
  - DOMAIN-SUFFIX,hdrplusdata.org,Proxy
  - DOMAIN-SUFFIX,hindiweb.com,Proxy
  - DOMAIN-SUFFIX,howtogetmo.co.uk,Proxy
  - DOMAIN-SUFFIX,html5rocks.com,Proxy
  - DOMAIN-SUFFIX,hwgo.com,Proxy
  - DOMAIN-SUFFIX,iamremarkable.org,Proxy
  - DOMAIN-SUFFIX,igoogle.com,Proxy
  - DOMAIN-SUFFIX,impermium.com,Proxy
  - DOMAIN-SUFFIX,j2objc.org,Proxy
  - DOMAIN-SUFFIX,jibemobile.com,Proxy
  - DOMAIN-SUFFIX,keyhole.com,Proxy
  - DOMAIN-SUFFIX,keytransparency.com,Proxy
  - DOMAIN-SUFFIX,keytransparency.foo,Proxy
  - DOMAIN-SUFFIX,keytransparency.org,Proxy
  - DOMAIN-SUFFIX,lanternal.com,Proxy
  - DOMAIN-SUFFIX,like.com,Proxy
  - DOMAIN-SUFFIX,madewithcode.com,Proxy
  - DOMAIN-SUFFIX,material.io,Proxy
  - DOMAIN-SUFFIX,mdialog.com,Proxy
  - DOMAIN-SUFFIX,meet.new,Proxy
  - DOMAIN-SUFFIX,mfg-inspector.com,Proxy
  - DOMAIN-SUFFIX,mobileview.page,Proxy
  - DOMAIN-SUFFIX,moodstocks.com,Proxy
  - DOMAIN-SUFFIX,near.by,Proxy
  - DOMAIN-SUFFIX,nest.com,Proxy
  - DOMAIN-SUFFIX,nomulus.foo,Proxy
  - DOMAIN-SUFFIX,oauthz.com,Proxy
  - DOMAIN-SUFFIX,on.here,Proxy
  - DOMAIN-SUFFIX,on2.com,Proxy
  - DOMAIN-SUFFIX,onefifteen.net,Proxy
  - DOMAIN-SUFFIX,onefifteen.org,Proxy
  - DOMAIN-SUFFIX,oneworldmanystories.com,Proxy
  - DOMAIN-SUFFIX,openthread.io,Proxy
  - DOMAIN-SUFFIX,openweave.io,Proxy
  - DOMAIN-SUFFIX,orbitera.com,Proxy
  - DOMAIN-SUFFIX,page.link,Proxy
  - DOMAIN-SUFFIX,pagespeedmobilizer.com,Proxy
  - DOMAIN-SUFFIX,pageview.mobi,Proxy
  - DOMAIN-SUFFIX,panoramio.com,Proxy
  - DOMAIN-SUFFIX,partylikeits1986.org,Proxy
  - DOMAIN-SUFFIX,paxlicense.org,Proxy
  - DOMAIN-SUFFIX,picasa.com,Proxy
  - DOMAIN-SUFFIX,picasaweb.com,Proxy
  - DOMAIN-SUFFIX,picasaweb.net,Proxy
  - DOMAIN-SUFFIX,picasaweb.org,Proxy
  - DOMAIN-SUFFIX,picnik.com,Proxy
  - DOMAIN-SUFFIX,pittpatt.com,Proxy
  - DOMAIN-SUFFIX,pixate.com,Proxy
  - DOMAIN-SUFFIX,postini.com,Proxy
  - DOMAIN-SUFFIX,privacysandbox.com,Proxy
  - DOMAIN-SUFFIX,projectara.com,Proxy
  - DOMAIN-SUFFIX,projectbaseline.com,Proxy
  - DOMAIN-SUFFIX,publishproxy.com,Proxy
  - DOMAIN-SUFFIX,questvisual.com,Proxy
  - DOMAIN-SUFFIX,quickoffice.com,Proxy
  - DOMAIN-SUFFIX,quiksee.com,Proxy
  - DOMAIN-SUFFIX,revolv.com,Proxy
  - DOMAIN-SUFFIX,ridepenguin.com,Proxy
  - DOMAIN-SUFFIX,run.app,Proxy
  - DOMAIN-SUFFIX,savethedate.foo,Proxy
  - DOMAIN-SUFFIX,saynow.com,Proxy
  - DOMAIN-SUFFIX,schemer.com,Proxy
  - DOMAIN-SUFFIX,screenwisetrends.com,Proxy
  - DOMAIN-SUFFIX,screenwisetrendspanel.com,Proxy
  - DOMAIN-SUFFIX,snapseed.com,Proxy
  - DOMAIN-SUFFIX,solveforx.com,Proxy
  - DOMAIN-SUFFIX,stadia.dev,Proxy
  - DOMAIN-SUFFIX,stcroixmosquito.com,Proxy
  - DOMAIN-SUFFIX,stcroixmosquitoproject.com,Proxy
  - DOMAIN-SUFFIX,studywatchbyverily.com,Proxy
  - DOMAIN-SUFFIX,studywatchbyverily.org,Proxy
  - DOMAIN-SUFFIX,stxmosquito.com,Proxy
  - DOMAIN-SUFFIX,stxmosquitoproject.com,Proxy
  - DOMAIN-SUFFIX,stxmosquitoproject.net,Proxy
  - DOMAIN-SUFFIX,stxmosquitoproject.org,Proxy
  - DOMAIN-SUFFIX,synergyse.com,Proxy
  - DOMAIN-SUFFIX,tensorflow.org,Proxy
  - DOMAIN-SUFFIX,tfhub.dev,Proxy
  - DOMAIN-SUFFIX,thecleversense.com,Proxy
  - DOMAIN-SUFFIX,thegooglestore.com,Proxy
  - DOMAIN-SUFFIX,thinkquarterly.co.uk,Proxy
  - DOMAIN-SUFFIX,thinkquarterly.com,Proxy
  - DOMAIN-SUFFIX,thinkwithgoogle.com,Proxy
  - DOMAIN-SUFFIX,tiltbrush.com,Proxy
  - DOMAIN-SUFFIX,txcloud.net,Proxy
  - DOMAIN-SUFFIX,txvia.com,Proxy
  - DOMAIN-SUFFIX,unfiltered.news,Proxy
  - DOMAIN-SUFFIX,useplannr.com,Proxy
  - DOMAIN-SUFFIX,usvimosquito.com,Proxy
  - DOMAIN-SUFFIX,usvimosquitoproject.com,Proxy
  - DOMAIN-SUFFIX,velostrata.com,Proxy
  - DOMAIN-SUFFIX,verily.com,Proxy
  - DOMAIN-SUFFIX,verilylifesciences.com,Proxy
  - DOMAIN-SUFFIX,verilystudyhub.com,Proxy
  - DOMAIN-SUFFIX,verilystudywatch.com,Proxy
  - DOMAIN-SUFFIX,verilystudywatch.org,Proxy
  - DOMAIN-SUFFIX,wallet.com,Proxy
  - DOMAIN-SUFFIX,waymo.com,Proxy
  - DOMAIN-SUFFIX,waze.com,Proxy
  - DOMAIN-SUFFIX,web.app,Proxy
  - DOMAIN-SUFFIX,web.dev,Proxy
  - DOMAIN-SUFFIX,webappfieldguide.com,Proxy
  - DOMAIN-SUFFIX,webmproject.org,Proxy
  - DOMAIN-SUFFIX,webpkgcache.com,Proxy
  - DOMAIN-SUFFIX,webrtc.org,Proxy
  - DOMAIN-SUFFIX,weltweitwachsen.de,Proxy
  - DOMAIN-SUFFIX,whatbrowser.org,Proxy
  - DOMAIN-SUFFIX,widevine.com,Proxy
  - DOMAIN-SUFFIX,withgoogle.com,Proxy
  - DOMAIN-SUFFIX,womenwill.com,Proxy
  - DOMAIN-SUFFIX,womenwill.com.br,Proxy
  - DOMAIN-SUFFIX,womenwill.id,Proxy
  - DOMAIN-SUFFIX,womenwill.in,Proxy
  - DOMAIN-SUFFIX,womenwill.mx,Proxy
  - DOMAIN-SUFFIX,x.company,Proxy
  - DOMAIN-SUFFIX,x.team,Proxy
  - DOMAIN-SUFFIX,xn--9kr7l.com,Proxy
  - DOMAIN-SUFFIX,xn--9trs65b.com,Proxy
  - DOMAIN-SUFFIX,xn--flw351e.com,Proxy
  - DOMAIN-SUFFIX,xn--ggle-55da.com,Proxy
  - DOMAIN-SUFFIX,xn--gogl-0nd52e.com,Proxy
  - DOMAIN-SUFFIX,xn--gogl-1nd42e.com,Proxy
  - DOMAIN-SUFFIX,xn--ngstr-lra8j.com,Proxy
  - DOMAIN-SUFFIX,xplr.co,Proxy
  - DOMAIN-SUFFIX,zukunftswerkstatt.de,Proxy

  # > Instagram
  - DOMAIN-SUFFIX,achat-followers-instagram.com,Proxy
  - DOMAIN-SUFFIX,acheter-followers-instagram.com,Proxy
  - DOMAIN-SUFFIX,acheterdesfollowersinstagram.com,Proxy
  - DOMAIN-SUFFIX,acheterfollowersinstagram.com,Proxy
  - DOMAIN-SUFFIX,bookstagram.com,Proxy
  - DOMAIN-SUFFIX,carstagram.com,Proxy
  - DOMAIN-SUFFIX,cdninstagram.com,Proxy
  - DOMAIN-SUFFIX,chickstagram.com,Proxy
  - DOMAIN-SUFFIX,ig.me,Proxy
  - DOMAIN-SUFFIX,igcdn.com,Proxy
  - DOMAIN-SUFFIX,igsonar.com,Proxy
  - DOMAIN-SUFFIX,igtv.com,Proxy
  - DOMAIN-SUFFIX,imstagram.com,Proxy
  - DOMAIN-SUFFIX,imtagram.com,Proxy
  - DOMAIN-SUFFIX,instaadder.com,Proxy
  - DOMAIN-SUFFIX,instachecker.com,Proxy
  - DOMAIN-SUFFIX,instafallow.com,Proxy
  - DOMAIN-SUFFIX,instafollower.com,Proxy
  - DOMAIN-SUFFIX,instagainer.com,Proxy
  - DOMAIN-SUFFIX,instagda.com,Proxy
  - DOMAIN-SUFFIX,instagify.com,Proxy
  - DOMAIN-SUFFIX,instagmania.com,Proxy
  - DOMAIN-SUFFIX,instagor.com,Proxy
  - DOMAIN-SUFFIX,instagram-brand.com,Proxy
  - DOMAIN-SUFFIX,instagram-engineering.com,Proxy
  - DOMAIN-SUFFIX,instagram-help.com,Proxy
  - DOMAIN-SUFFIX,instagram-press.com,Proxy
  - DOMAIN-SUFFIX,instagram-press.net,Proxy
  - DOMAIN-SUFFIX,instagram.com,Proxy
  - DOMAIN-SUFFIX,instagramci.com,Proxy
  - DOMAIN-SUFFIX,instagramcn.com,Proxy
  - DOMAIN-SUFFIX,instagramdi.com,Proxy
  - DOMAIN-SUFFIX,instagramhashtags.net,Proxy
  - DOMAIN-SUFFIX,instagramhilecim.com,Proxy
  - DOMAIN-SUFFIX,instagramhilesi.org,Proxy
  - DOMAIN-SUFFIX,instagramium.com,Proxy
  - DOMAIN-SUFFIX,instagramizlenme.com,Proxy
  - DOMAIN-SUFFIX,instagramkusu.com,Proxy
  - DOMAIN-SUFFIX,instagramlogin.com,Proxy
  - DOMAIN-SUFFIX,instagramm.com,Proxy
  - DOMAIN-SUFFIX,instagramn.com,Proxy
  - DOMAIN-SUFFIX,instagrampartners.com,Proxy
  - DOMAIN-SUFFIX,instagramphoto.com,Proxy
  - DOMAIN-SUFFIX,instagramq.com,Proxy
  - DOMAIN-SUFFIX,instagramsepeti.com,Proxy
  - DOMAIN-SUFFIX,instagramtakipcisatinal.net,Proxy
  - DOMAIN-SUFFIX,instagramtakiphilesi.com,Proxy
  - DOMAIN-SUFFIX,instagramtips.com,Proxy
  - DOMAIN-SUFFIX,instagramtr.com,Proxy
  - DOMAIN-SUFFIX,instagran.com,Proxy
  - DOMAIN-SUFFIX,instagranm.com,Proxy
  - DOMAIN-SUFFIX,instagrem.com,Proxy
  - DOMAIN-SUFFIX,instagrm.com,Proxy
  - DOMAIN-SUFFIX,instagtram.com,Proxy
  - DOMAIN-SUFFIX,instagy.com,Proxy
  - DOMAIN-SUFFIX,instamgram.com,Proxy
  - DOMAIN-SUFFIX,instangram.com,Proxy
  - DOMAIN-SUFFIX,instanttelegram.com,Proxy
  - DOMAIN-SUFFIX,instaplayer.net,Proxy
  - DOMAIN-SUFFIX,instastyle.tv,Proxy
  - DOMAIN-SUFFIX,instgram.com,Proxy
  - DOMAIN-SUFFIX,intagram.com,Proxy
  - DOMAIN-SUFFIX,intagrm.com,Proxy
  - DOMAIN-SUFFIX,intgram.com,Proxy
  - DOMAIN-SUFFIX,kingstagram.com,Proxy
  - DOMAIN-SUFFIX,lnstagram-help.com,Proxy
  - DOMAIN-SUFFIX,theinstagramhack.com,Proxy
  - DOMAIN-SUFFIX,oninstagram.com,Proxy
  - DOMAIN-SUFFIX,online-instagram.com,Proxy
  - DOMAIN-SUFFIX,onlineinstagram.com,Proxy
  - DOMAIN-SUFFIX,web-instagram.net,Proxy
  - DOMAIN-SUFFIX,wwwinstagram.com,Proxy

  # > Amazon
  - DOMAIN-SUFFIX,amazon,Proxy
  - DOMAIN-SUFFIX,xn--cckwcxetd,Proxy
  - DOMAIN-SUFFIX,xn--jlq480n2rg,Proxy
  - DOMAIN-SUFFIX,yamaxun,Proxy
  - DOMAIN-SUFFIX,zappos,Proxy
  - DOMAIN-SUFFIX,a2z.com,Proxy
  - DOMAIN-SUFFIX,aboutamazon.com,Proxy
  - DOMAIN-SUFFIX,amaaozn.com,Proxy
  - DOMAIN-SUFFIX,amazon-fashions.com,Proxy
  - DOMAIN-SUFFIX,amazon-jp-recruiting.com,Proxy
  - DOMAIN-SUFFIX,amazon-lantern.com,Proxy
  - DOMAIN-SUFFIX,amazon-launchpad.com,Proxy
  - DOMAIN-SUFFIX,amazon.sg,Proxy
  - DOMAIN-SUFFIX,amazonalexavoxcon.com,Proxy
  - DOMAIN-SUFFIX,amazonauthorinsights.com,Proxy
  - DOMAIN-SUFFIX,amazonbusiness.org,Proxy
  - DOMAIN-SUFFIX,amazonbusinessblog.com,Proxy
  - DOMAIN-SUFFIX,amazondevicesupport.com,Proxy
  - DOMAIN-SUFFIX,amazonfctours.com,Proxy
  - DOMAIN-SUFFIX,amazonianblog.com,Proxy
  - DOMAIN-SUFFIX,amazonimages.com,Proxy
  - DOMAIN-SUFFIX,amazonlaunchpad.com,Proxy
  - DOMAIN-SUFFIX,amazonliterarypartnership.com,Proxy
  - DOMAIN-SUFFIX,amazonlumberyard.wang,Proxy
  - DOMAIN-SUFFIX,amazonpay.com,Proxy
  - DOMAIN-SUFFIX,amazonsdi.com,Proxy
  - DOMAIN-SUFFIX,amazonstudiosguilds.com,Proxy
  - DOMAIN-SUFFIX,amazonvideodirect.com,Proxy
  - DOMAIN-SUFFIX,amzn.asia,Proxy
  - DOMAIN-SUFFIX,amzn.com,Proxy
  - DOMAIN-SUFFIX,amzn.to,Proxy
  - DOMAIN-SUFFIX,amznl.com,Proxy
  - DOMAIN-SUFFIX,associates-amazon.com,Proxy
  - DOMAIN-SUFFIX,gameon-masters.com,Proxy
  - DOMAIN-SUFFIX,gdansk-amazon.com,Proxy
  - DOMAIN-SUFFIX,images-amazon.com,Proxy
  - DOMAIN-SUFFIX,media-amazon.com,Proxy
  - DOMAIN-SUFFIX,primeday.info,Proxy
  - DOMAIN-SUFFIX,siege-amazon.com,Proxy
  - DOMAIN-SUFFIX,ssl-images-amazon.com,Proxy
  - DOMAIN-SUFFIX,ueberamazon.de,Proxy
  - DOMAIN-SUFFIX,yamaxun.com,Proxy
  - DOMAIN-SUFFIX,alexa.com,Proxy
  - DOMAIN-SUFFIX,audible.com,Proxy
  - DOMAIN-SUFFIX,createspace.com,Proxy
  
  # > PayPal
  - DOMAIN-KEYWORD,paypal,Paypal
  - DOMAIN-SUFFIX,paypal.com,Paypal
  - DOMAIN-SUFFIX,paypalobjects.com,Paypal

  # > Cloudflare
  - DOMAIN-SUFFIX,cloudflare-dns.com,Proxy
  - DOMAIN-SUFFIX,cloudflare-ipfs.com,Proxy
  - DOMAIN-SUFFIX,cloudflare-quic.com,Proxy
  - DOMAIN-SUFFIX,cloudflare.com,Proxy
  - DOMAIN-SUFFIX,cloudflare.net,Proxy
  - DOMAIN-SUFFIX,cloudflareapps.com,Proxy
  - DOMAIN-SUFFIX,cloudflarebolt.com,Proxy
  - DOMAIN-SUFFIX,cloudflareclient.com,Proxy
  - DOMAIN-SUFFIX,cloudflareinsights.com,Proxy
  - DOMAIN-SUFFIX,cloudflareok.com,Proxy
  - DOMAIN-SUFFIX,cloudflareresolve.com,Proxy
  - DOMAIN-SUFFIX,cloudflaressl.com,Proxy
  - DOMAIN-SUFFIX,cloudflarestatus.com,Proxy
  - DOMAIN-SUFFIX,cloudflarestream.com,Proxy
  - DOMAIN-SUFFIX,cloudflaretest.com,Proxy
  - DOMAIN-SUFFIX,cloudflarewarp.com,Proxy
  - DOMAIN-SUFFIX,one.one.one,Proxy
  - DOMAIN-SUFFIX,pacloudflare.com,Proxy
  - DOMAIN-SUFFIX,pages.dev,Proxy
  - DOMAIN-SUFFIX,trycloudflare.com,Proxy
  - DOMAIN-SUFFIX,videodelivery.net,Proxy
  - DOMAIN-SUFFIX,warp.plus,Proxy
  - DOMAIN-SUFFIX,workers.dev,Proxy

  # > Akamai
  - DOMAIN-SUFFIX,ak1.net,Proxy
  - DOMAIN-SUFFIX,aka-ai.com,Proxy
  - DOMAIN-SUFFIX,aka-ai.net,Proxy
  - DOMAIN-SUFFIX,akacrypto.net,Proxy
  - DOMAIN-SUFFIX,akadeem.net,Proxy
  - DOMAIN-SUFFIX,akadns.com,Proxy
  - DOMAIN-SUFFIX,akadns6.net,Proxy
  - DOMAIN-SUFFIX,akaeai.com,Proxy
  - DOMAIN-SUFFIX,akafms.net,Proxy
  - DOMAIN-SUFFIX,akahost.net,Proxy
  - DOMAIN-SUFFIX,akaint.net,Proxy
  - DOMAIN-SUFFIX,akam.net,Proxy
  - DOMAIN-SUFFIX,akamaa.com,Proxy
  - DOMAIN-SUFFIX,akamah.com,Proxy
  - DOMAIN-SUFFIX,akamak.com,Proxy
  - DOMAIN-SUFFIX,akamam.com,Proxy
  - DOMAIN-SUFFIX,akamai-access.com,Proxy
  - DOMAIN-SUFFIX,akamai-access.net,Proxy
  - DOMAIN-SUFFIX,akamai-cdn.com,Proxy
  - DOMAIN-SUFFIX,akamai-platform-internal.net,Proxy
  - DOMAIN-SUFFIX,akamai-platform-staging.com,Proxy
  - DOMAIN-SUFFIX,akamai-platform.net,Proxy
  - DOMAIN-SUFFIX,akamai-regression.net,Proxy
  - DOMAIN-SUFFIX,akamai-staging.net,Proxy
  - DOMAIN-SUFFIX,akamai-sucks.net,Proxy
  - DOMAIN-SUFFIX,akamai-thailand.com,Proxy
  - DOMAIN-SUFFIX,akamai-thailand.net,Proxy
  - DOMAIN-SUFFIX,akamai-trials.com,Proxy
  - DOMAIN-SUFFIX,akamai.co.kr,Proxy
  - DOMAIN-SUFFIX,akamai.com,Proxy
  - DOMAIN-SUFFIX,akamai.net,Proxy
  - DOMAIN-SUFFIX,akamaientrypoint.net,Proxy
  - DOMAIN-SUFFIX,akamaietpcnctest.com,Proxy
  - DOMAIN-SUFFIX,akamaietpcompromisedcnctest.com,Proxy
  - DOMAIN-SUFFIX,akamaietpcompromisedmalwaretest.com,Proxy
  - DOMAIN-SUFFIX,akamaietpmalwaretest.com,Proxy
  - DOMAIN-SUFFIX,akamaietpphishingtest.com,Proxy
  - DOMAIN-SUFFIX,akamaihd-staging.net,Proxy
  - DOMAIN-SUFFIX,akamaihd.com,Proxy
  - DOMAIN-SUFFIX,akamaihd.net,Proxy
  - DOMAIN-SUFFIX,akamaimagicmath.net,Proxy
  - DOMAIN-SUFFIX,akamainewzealand.com,Proxy
  - DOMAIN-SUFFIX,akamaiphillipines.com,Proxy
  - DOMAIN-SUFFIX,akamaiphillipines.net,Proxy
  - DOMAIN-SUFFIX,akamaitech.com,Proxy
  - DOMAIN-SUFFIX,akamaitech.net,Proxy
  - DOMAIN-SUFFIX,akamaitechnologies.com,Proxy
  - DOMAIN-SUFFIX,akamaitechnologies.net,Proxy
  - DOMAIN-SUFFIX,akamaisingapore.net,Proxy
  - DOMAIN-SUFFIX,akamaized-staging.net,Proxy
  - DOMAIN-SUFFIX,akamaized.net,Proxy
  - DOMAIN-SUFFIX,akamaizercentral.com,Proxy
  - DOMAIN-SUFFIX,akamci.com,Proxy
  - DOMAIN-SUFFIX,akami.com,Proxy
  - DOMAIN-SUFFIX,akami.net,Proxy
  - DOMAIN-SUFFIX,akamii.com,Proxy
  - DOMAIN-SUFFIX,akamqi.com,Proxy
  - DOMAIN-SUFFIX,akastream.com,Proxy
  - DOMAIN-SUFFIX,akastream.net,Proxy
  - DOMAIN-SUFFIX,akatns.net,Proxy
  - DOMAIN-SUFFIX,iamakamai.com,Proxy
  - DOMAIN-SUFFIX,iamakamai.net,Proxy
  - DOMAIN-SUFFIX,soasta-dswb.com,Proxy
  - DOMAIN-SUFFIX,srtcdn.net,Proxy

  # > Fastly
  - DOMAIN-SUFFIX,fastly.com,Proxy
  - DOMAIN-SUFFIX,fastly.net,Proxy
  - DOMAIN-SUFFIX,fastlylabs.com,Proxy
  - DOMAIN-SUFFIX,fastlylb.net,Proxy
  - DOMAIN-SUFFIX,fastly-terrarium.com,Proxy
  - DOMAIN-SUFFIX,zencdn.net,Proxy

  # > Fastly
  - DOMAIN-SUFFIX,stackpath.com,Proxy
  - DOMAIN-SUFFIX,stackpath.dev,Proxy

  # > AWS
  - DOMAIN-SUFFIX,aws,Proxy
  - DOMAIN-SUFFIX,acmvalidations.com,Proxy
  - DOMAIN-SUFFIX,acmvalidationsaws.com,Proxy
  - DOMAIN-SUFFIX,aesworkshops.com,Proxy
  - DOMAIN-SUFFIX,amazonaws-china.com,Proxy
  - DOMAIN-SUFFIX,amazonaws.co.uk,Proxy
  - DOMAIN-SUFFIX,amazonaws.com,Proxy
  - DOMAIN-SUFFIX,amazonaws.tv,Proxy
  - DOMAIN-SUFFIX,amazonworkdocs.com,Proxy
  - DOMAIN-SUFFIX,amplifyapp.com,Proxy
  - DOMAIN-SUFFIX,amplifyframework.com,Proxy
  - DOMAIN-SUFFIX,aws-iot-hackathon.com,Proxy
  - DOMAIN-SUFFIX,awsautopilot.com,Proxy
  - DOMAIN-SUFFIX,awsautoscaling.com,Proxy
  - DOMAIN-SUFFIX,awsbraket.com,Proxy
  - DOMAIN-SUFFIX,awscommandlineinterface.com,Proxy
  - DOMAIN-SUFFIX,awsedstart.com,Proxy
  - DOMAIN-SUFFIX,awseducate.com,Proxy
  - DOMAIN-SUFFIX,awseducate.net,Proxy
  - DOMAIN-SUFFIX,awseducate.org,Proxy
  - DOMAIN-SUFFIX,awsloft-johannesburg.com,Proxy
  - DOMAIN-SUFFIX,awsloft-stockholm.com,Proxy
  - DOMAIN-SUFFIX,awssecworkshops.com,Proxy
  - DOMAIN-SUFFIX,awsstatic.com,Proxy
  - DOMAIN-SUFFIX,awsthinkbox.com,Proxy
  - DOMAIN-SUFFIX,cdkworkshop.com,Proxy
  - DOMAIN-SUFFIX,cloudfront.net,Proxy
  - DOMAIN-SUFFIX,containersonaws.com,Proxy
  - DOMAIN-SUFFIX,elasticbeanstalk.com,Proxy
  - DOMAIN-SUFFIX,thinkboxsoftware.com,Proxy

  # > Other
  - DOMAIN-KEYWORD,appledaily,Proxy
  - DOMAIN-KEYWORD,beetalk,Proxy
  - DOMAIN-KEYWORD,blogspot,Proxy
  - DOMAIN-KEYWORD,dropbox,Proxy
  - DOMAIN-KEYWORD,facebook,Proxy
  - DOMAIN-KEYWORD,github,Proxy
  - DOMAIN-KEYWORD,instagram,Proxy
  - DOMAIN-KEYWORD,twitter,Proxy
  - DOMAIN-KEYWORD,whatsapp,Proxy
  - DOMAIN-KEYWORD,google,Proxy

  # > Lan
  - DOMAIN-SUFFIX,local,DIRECT
  - IP-CIDR,127.0.0.0/8,DIRECT,no-resolve
  - IP-CIDR,172.16.0.0/12,DIRECT,no-resolve
  - IP-CIDR,192.168.0.0/16,DIRECT,no-resolve
  - IP-CIDR,10.0.0.0/8,DIRECT,no-resolve
  - IP-CIDR,17.0.0.0/8,DIRECT,no-resolve
  - IP-CIDR,100.64.0.0/10,DIRECT,no-resolve
  - IP-CIDR6,fe80::/10,DIRECT,no-resolve
  # > time.android.com
  - IP-CIDR,203.107.6.88/32,DIRECT,no-resolve

  # > Global Proxy
  - SRC-IP-CIDR,192.168.1.98/32,Proxy
  - SRC-IP-CIDR,192.168.1.97/32,Proxy
  - SRC-IP-CIDR,192.168.1.96/32,Proxy

  # > Final
  - MATCH,DIRECT
