// Automatically generated by xmlvm2csharp (do not edit).

using org.xmlvm;
namespace Compatlib.System {
public class String: global::Compatlib.System.Object {

static String() {
    @static();
}

public global::java.lang.String _fvalue;

public static global::Compatlib.System.String _fEmpty;

public void @this(global::java.lang.String n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.String: void <init>(java.lang.String)]
    this._fvalue = n1;
//XMLVM_END_WRAPPER[Compatlib.System.String: void <init>(java.lang.String)]
}

public override global::System.Object ToString(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.String: Compatlib.System.String ToString()]
    return this;
//XMLVM_END_WRAPPER[Compatlib.System.String: Compatlib.System.String ToString()]
}

public override global::System.Object toString(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.String: java.lang.String toString()]
    return this._fvalue;
//XMLVM_END_WRAPPER[Compatlib.System.String: java.lang.String toString()]
}

public virtual bool Equals(global::Compatlib.System.String n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.String: boolean Equals(Compatlib.System.String)]
    return ((java.lang.String)this.toString()).equals(((java.lang.String)n1.toString()));
//XMLVM_END_WRAPPER[Compatlib.System.String: boolean Equals(Compatlib.System.String)]
}

public virtual char _1_1access(int n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.String: char __access(int)]
    return ((org.xmlvm._nArrayAdapter<char>)((java.lang.String)this.toString()).toCharArray())[n1];
//XMLVM_END_WRAPPER[Compatlib.System.String: char __access(int)]
}

public virtual bool EndsWith(global::Compatlib.System.String n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.String: boolean EndsWith(Compatlib.System.String)]
    return ((global::System.String)org.xmlvm._nUtil.toNativeString((java.lang.String)this.toString()))
                .EndsWith((global::System.String)org.xmlvm._nUtil.toNativeString((java.lang.String)n1.toString()));
//XMLVM_END_WRAPPER[Compatlib.System.String: boolean EndsWith(Compatlib.System.String)]
}

public virtual int getLength(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.String: int getLength()]
    return org.xmlvm._nUtil.toNativeString((java.lang.String)this.toString()).Length;
//XMLVM_END_WRAPPER[Compatlib.System.String: int getLength()]
}

public static void @static(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.String: void <clinit>()]
//XMLVM_END_WRAPPER[Compatlib.System.String: void <clinit>()]
}

//XMLVM_BEGIN_WRAPPER[Compatlib.System.String]
//XMLVM_END_WRAPPER[Compatlib.System.String]

} // end of class: String

} // end of namespace: Compatlib.System
