// Automatically generated by xmlvm2csharp (do not edit).

using org.xmlvm;
namespace Compatlib.System.ComponentModel {
public class DoWorkEvent: global::Compatlib.System.Event {
public void @this(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.ComponentModel.DoWorkEvent: void <init>()]
//XMLVM_END_WRAPPER[Compatlib.System.ComponentModel.DoWorkEvent: void <init>()]
}

public virtual void _1_1add(global::Compatlib.System.ComponentModel.DoWorkEventHandler n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.ComponentModel.DoWorkEvent: void __add(Compatlib.System.ComponentModel.DoWorkEventHandler)]
    this.handlers.Add(n1);
//XMLVM_END_WRAPPER[Compatlib.System.ComponentModel.DoWorkEvent: void __add(Compatlib.System.ComponentModel.DoWorkEventHandler)]
}

public virtual void _1_1fire(global::Compatlib.System.Object n1, global::Compatlib.System.ComponentModel.DoWorkEventArgs n2){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.ComponentModel.DoWorkEvent: void __fire(Compatlib.System.Object, Compatlib.System.ComponentModel.DoWorkEventArgs)]
    foreach (Compatlib.System.ComponentModel.DoWorkEventHandler handler in handlers)
    {
        global::System.Reflection.MethodInfo mi = handler.owner.GetType().GetMethod(org.xmlvm._nUtil.toNativeString(handler.method._fvalue));
        mi.Invoke(handler.owner, new object[] { n1, n2 });
    }
//XMLVM_END_WRAPPER[Compatlib.System.ComponentModel.DoWorkEvent: void __fire(Compatlib.System.Object, Compatlib.System.ComponentModel.DoWorkEventArgs)]
}

//XMLVM_BEGIN_WRAPPER[Compatlib.System.ComponentModel.DoWorkEvent]
private global::System.Collections.Generic.List<Compatlib.System.ComponentModel.DoWorkEventHandler> handlers = new global::System.Collections.Generic.List<Compatlib.System.ComponentModel.DoWorkEventHandler>();
//XMLVM_END_WRAPPER[Compatlib.System.ComponentModel.DoWorkEvent]

} // end of class: DoWorkEvent

} // end of namespace: Compatlib.System.ComponentModel
