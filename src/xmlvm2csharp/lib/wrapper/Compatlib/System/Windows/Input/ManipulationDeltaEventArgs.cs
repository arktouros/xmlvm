// Automatically generated by xmlvm2csharp (do not edit).

using org.xmlvm;
namespace Compatlib.System.Windows.Input {
public class ManipulationDeltaEventArgs: global::Compatlib.System.Windows.Input.InputEventArgs {
private global::Compatlib.System.Windows.Input.ManipulationDelta _fDeltaManipulation;

public new void @this(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: void <init>()]
    throw new global::org.xmlvm._nNotYetImplementedException("a");
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: void <init>()]
}

public virtual global::System.Object getDeltaManipulation(){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: Compatlib.System.Windows.Input.ManipulationDelta getDeltaManipulation()]
    Compatlib.System.Windows.Input.ManipulationDelta delta = new Compatlib.System.Windows.Input.ManipulationDelta();
    delta.delta = ((global::System.Windows.Input.ManipulationDeltaEventArgs)base.args).DeltaManipulation;
    return delta;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: Compatlib.System.Windows.Input.ManipulationDelta getDeltaManipulation()]
}

public virtual void setDeltaManipulation(global::Compatlib.System.Windows.Input.ManipulationDelta n1){
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: void setDeltaManipulation(Compatlib.System.Windows.Input.ManipulationDelta)]
    throw new global::org.xmlvm._nNotYetImplementedException("a");
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: void setDeltaManipulation(Compatlib.System.Windows.Input.ManipulationDelta)]
}

public virtual global::System.Object getManipulationOrigin()
{
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: Compatlib.System.Windows.Point getManipulationOrigin()]
    global::Compatlib.System.Windows.Point ret = new global::Compatlib.System.Windows.Point();
    ret.point = ((global::System.Windows.Input.ManipulationDeltaEventArgs)base.args).ManipulationOrigin;
    return ret;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: Compatlib.System.Windows.Point getManipulationOrigin()]
}

public virtual void setManipulationOrigin(global::Compatlib.System.Windows.Point n1)
{
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: void setManipulationOrigin(Compatlib.System.Windows.Point)]
    throw new global::org.xmlvm._nNotYetImplementedException("a");
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: void setManipulationOrigin(Compatlib.System.Windows.Point)]
}

public virtual bool isHandled() {
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: boolean isHandled()]
    return ((global::System.Windows.Input.ManipulationDeltaEventArgs)base.args).Handled;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: boolean isHandled()]
}

public virtual void setHandled(bool n1) {
//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: void setHandled(boolean)]
    ((global::System.Windows.Input.ManipulationDeltaEventArgs)base.args).Handled = n1;
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs: void setHandled(boolean)]
}

//XMLVM_BEGIN_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs]
//XMLVM_END_WRAPPER[Compatlib.System.Windows.Input.ManipulationDeltaEventArgs]

} // end of class: ManipulationDeltaEventArgs

} // end of namespace: Compatlib.System.Windows.Input
