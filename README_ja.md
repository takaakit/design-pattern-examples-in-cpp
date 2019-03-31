Design Pattern Examples in C++
===

[English](README.md) | 日本語

C++向けに作成したデザインパターンのモデル＆コード例です。  
次のような目的で活用ください。

* Astah と M PLUS プラグインを使ってモデル駆動開発を試す。
* UML モデルと C++ コードのマッピングを知る。
* C++ で記述したデザインパターンのコード例を知る。  
  など  

> UML モデル例:

![](screenshots/CompositePattern.png "Composite Pattern")

> C++ ヘッダファイル例:
---
```cpp:File class
// ˅

// ˄

#ifndef STRUCTURAL_PATTERNS_COMPOSITE_FILE_H_
#define STRUCTURAL_PATTERNS_COMPOSITE_FILE_H_

// ˅
#include <string>
#include "structural_patterns/composite/FileSystemElement.h"

using namespace std;

// ˄

class File : public FileSystemElement
{
	// ˅
	
	// ˄

public:

	File(const string& name, const int size);

	~File();

	// Print this element with the "upper_path".
	void print(const string& upper_path);

	// ˅
public:
	
protected:
	
private:
	File(const File&) = delete;
	File& operator=(const File&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// STRUCTURAL_PATTERNS_COMPOSITE_FILE_H_

// ˅

// ˄
```

> C++ ソースファイル例:
---
```cpp:File class
// ˅
#include <iostream>
#include "structural_patterns/composite/File.h"

using namespace std;

// ˄

File::File(const string& name, const int size)
	// ˅
    : FileSystemElement(name, size)
	// ˄
{
	// ˅
	
	// ˄
}

File::~File()
{
	// ˅
	
	// ˄
}

void File::print(const string& upper_path)
{
	// ˅
	cout << upper_path << "/" << toString() << endl;
	// ˄
}

// ˅

// ˄
```

インストール
------------
**Astah**
* [チェンジビジョンのサイト](http://astah.change-vision.com/ja/download.html)から Astah の UML or Professional をダウンロードしインストールしてください。  

**M PLUS プラグイン**
* [M PLUS プラグインのサイト](https://sites.google.com/view/m-plus-plugin/download)からプラグインをダウンロードしインストールしてください。  
  **バージョン 2.2 以降をダウンロードしてください。**  

**Visual Studio IDE**
* [Visual Studio IDE](https://visualstudio.microsoft.com/ja/vs/) をダウンロードしインストールしてください。  
  インストールの際、"**C++ によるデスクトップ開発**" と "**C++/CLI サポート**" にチェックを入れてください。

使い方
------
* Astah のモデルブラウザ上でモデル要素を選択し、コード生成ボタンを押すとコードが生成されます。  
* 生成されたコードにはユーザコードエリアが挿入されます。ユーザコードエリアは "˅" と "˄" で挟まれた領域です。ユーザコードエリア内に書いた手書きコードは繰り返しコード生成しても維持されます。  
* パターン毎に用意した main.cpp からプログラムを実行できます。
* ツールの詳しい使い方は、[Astah のマニュアル](http://astah.change-vision.com/ja/manual.html)や [M PLUS の Tips](https://sites.google.com/view/m-plus-plugin/tips) を見てください。

![](screenshots/Usage.gif "Usage")

参考文献
--------

* Gamma, E. et al. Design Patterns: Elements of Reusable Object-Oriented Software, Addison-Wesley, 1994
* 結城浩. Java 言語で学ぶデザインパターン入門. SB クリエイティブ, 2004

その他のプログラミング言語
--------------------------

* [Design Pattern Examples in C#](https://github.com/takaakit/design-pattern-examples-in-csharp)
* [Design Pattern Examples in Golang](https://github.com/takaakit/design-pattern-examples-in-golang)
* [Design Pattern Examples in Java](https://github.com/takaakit/design-pattern-examples-in-java)
* [Design Pattern Examples in Kotlin](https://github.com/takaakit/design-pattern-examples-in-kotlin)
* [Design Pattern Examples in Python](https://github.com/takaakit/design-pattern-examples-in-python)
* [Design Pattern Examples in Ruby](https://github.com/takaakit/design-pattern-examples-in-ruby)
* [Design Pattern Examples in Scala](https://github.com/takaakit/design-pattern-examples-in-scala)
* [Design Pattern Examples in Swift](https://github.com/takaakit/design-pattern-examples-in-swift)

Contributing
----
We welcome your contributions. Function addition, bug fix, refactoring, etc.  
The procedure is as follows.

1. Fork the repository and create your branch from master.
2. If you've changed model or code, check that the model and code are not separate. The check procedure is as follows.
    1. Select a project element on the model browser of Astah.  
    ![](screenshots/SelectModelElements.png "")
    2. Press the "Generate code" button.  
    ![](screenshots/PressCodeGenerationButton.png "")
    3. Check that the generated code is not updated.  
    ![](screenshots/CheckGeneratedCode.png "")
3. Issue the pull request!

Licence
----------
このプロジェクトは Creative Commons Zero（CC0）ライセンスです。モデルとコードは自由に使用できます。

[![CC0](http://i.creativecommons.org/p/zero/1.0/88x31.png "CC0")](http://creativecommons.org/publicdomain/zero/1.0/deed.ja)
