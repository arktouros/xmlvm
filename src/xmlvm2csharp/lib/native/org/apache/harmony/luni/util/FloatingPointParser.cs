// Automatically generated by xmlvm2csharp (do not edit).

using global::org.xmlvm;
namespace org.apache.harmony.luni.util {
public class FloatingPointParser: global::java.lang.Object {
private static double parseDblImpl(global::java.lang.String n1, int n2){
//XMLVM_BEGIN_WRAPPER[org.apache.harmony.luni.util.FloatingPointParser: double parseDblImpl(java.lang.String, int)]
      throw new org.xmlvm._nNotYetImplementedException("native/wrapper method not yet implemented");
//XMLVM_END_WRAPPER[org.apache.harmony.luni.util.FloatingPointParser: double parseDblImpl(java.lang.String, int)]
}

private static float parseFltImpl(global::java.lang.String n1, int n2){
//XMLVM_BEGIN_WRAPPER[org.apache.harmony.luni.util.FloatingPointParser: float parseFltImpl(java.lang.String, int)]
    string fStr = org.xmlvm._nUtil.toNativeString(n1);
    float f = float.Parse(fStr, System.Globalization.CultureInfo.InvariantCulture);
    if (n2 == 0) {
        return f;
    }

    return f * (float) System.Math.Pow(10, n2);
//XMLVM_END_WRAPPER[org.apache.harmony.luni.util.FloatingPointParser: float parseFltImpl(java.lang.String, int)]
}

//XMLVM_BEGIN_WRAPPER[org.apache.harmony.luni.util.FloatingPointParser]
//XMLVM_END_WRAPPER[org.apache.harmony.luni.util.FloatingPointParser]

} // end of class: FloatingPointParser

} // end of namespace: org.apache.harmony.luni.util
