+#include <iostream>
+using namespace std;
+
+  int main(){
+    int x;
+
+    cout << "Fahrenheit: "<< endl;
+    cin >> x;
+    cout << "Celsius: " << 5 ∗ (x − 32.0)/9 << endl;
+
+      if(x < 32){
+        cout << "hielo " << endl;
+
+      }
+
+      else if(x > 212){
+        cout << "Gas" endl;
+      }
+
+      else {
+        cout << "Agua" << endl;
+      }
+
+  return 0}
