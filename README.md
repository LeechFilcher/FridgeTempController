CHANGELOG:
==================================================
Additions:
- Initial Push


BEFORE YOU START:
==================================================
There are a few Requirements for this to work.
First off you need special a Temperature Controller for the whole project to work.
I'm currently using DHT22 AM2302 but any Digital Temperature sensor will work.
I'm using a NodeESP in this example but this is very overkill. The Cheapest and worst Arduino will do except you want to add some
smart functionality to this example.
You also need a little speaker. I'm using a higher quality speaker here I had lying around but depending on how far away the fridge is a simple piezo maybe enough.

Note that the Wiring diagram is provided AS IS and will probably not change much anymore. I may add this to a hub that I'm planning to work on to see if your fridge needs defrosting however (this is why this is using a humidity / temperature sensor too)

This is the wiring diagram and board design currently used for Prototyping:

![**WiringDiagram**](https://imgur.com/2DzZ5vt)




LICENSE: 
==================================================
* Developed by Deamonic Networks / Lukas Duerr e.K.
<p xmlns:dct="http://purl.org/dc/terms/" xmlns:vcard="http://www.w3.org/2001/vcard-rdf/3.0#">
  <a rel="license"
     href="http://creativecommons.org/publicdomain/zero/1.0/">
    <img src="https://licensebuttons.net/p/zero/1.0/88x31.png" style="border-style: none;" alt="CC0" />
  </a>
  <br />
  To the extent possible under law,
  <a rel="dct:publisher"
     href="https://creativecommons.org/share-your-work/public-domain/cc0/">
    <span property="dct:title">Lukas Duerr e.k.</span></a>
  has waived all copyright and related or neighboring rights to
  <span property="dct:title">FridgeTempController</span>.
This work is published from:
<span property="vcard:Country" datatype="dct:ISO3166"
      content="DE" about="https://creativecommons.org/share-your-work/public-domain/cc0/">
  Germany</span>.
</p>
 
 About Commits:
==================================================
Dailys (even though they do not occur daily) fix small bugs and usually took only a few minutes to develop. So more or less they fix stuff that wasn't really a issue or implement libary updates. They do **NOT** Feature Major changes or Bugfixes for anything noted. Daily updates are __**NOT**__ recommended in production usage, I recommend using a commit from the Release site.
