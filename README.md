<img src="liquidfun-extension-logo.png"
alt="gdx-liquidfun-extension logo" style="float:right;" />

gdx-liquidfun-extension
=======================

An extension to implement liquidfun into libgdx.
Read the wiki to learn how to use this extension in your project.

You can also get some information or ask some questions [in the badlogic forum][].

  [in the badlogic forum]: http://www.badlogicgames.com/forum/viewtopic.php?f=17&t=13717

Update by Thommil
=================
## Changes
* Import/merge of trunk version of libgdx gdx-box2d extension (1.7.2-SNAPSHOT )and Box2D (2.3.2)
* Build fix for IOS
* Structure refactoring for development in libgdx source

## Build

Clone project in libgdx extensions folder

```
cd $LIBGDX_SOURCE_ROOT/extensions
git clone https://github.com/Thommil/gdx-liquidfun.git
```

Edit build.xml to add gdx-liquidfun

```xml
<target name="gdx-liquidfun" depends="gdx-core">
	<path id="classpath">
		<pathelement location="${distDir}/gdx.jar"/>
		<pathelement location="${distDir}/extensions/gdx-jnigen/gdx-jnigen.jar"/>
	</path>
	<ant antfile="../../../build-template.xml" dir="extensions/gdx-liquidfun/gdx-liquidfun">
		<property name="distDir" value="${distDir}/extensions/gdx-liquidfun/"/>
		<property name="jar" value="gdx-liquidfun"/>
		<reference refid="classpath"/>
	</ant>
</target>
```

Native libraries can be rebuilt setting build-natives property in build.xml

```xml
<property name="build-natives" value="false"/>
```

Build all or directly

```
cd $LIBGDX_SOURCE_ROOT
ant gdx-liquidfun
```

