#ifndef SIMPLE_OBJECT_H
#define SIMPLE_OBJECT_H

#include <vector>
#include <node.h>
#include <node_object_wrap.h>

namespace demo {

class HelloStack : public node::ObjectWrap {
 public:
  static void LoadConstructor(v8::Isolate* isolate);
  static void CreateNewInstance(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void Push(const v8::FunctionCallbackInfo<v8::Value>& args);
  static void Pop(const v8::FunctionCallbackInfo<v8::Value>& args);
  std::vector<double> stack_;

 private:
  explicit HelloStack();
  ~HelloStack();

  static void Constructor(const v8::FunctionCallbackInfo<v8::Value>& args);
  static v8::Persistent<v8::Function> constructor;
};

}  // namespace demo

#endif
