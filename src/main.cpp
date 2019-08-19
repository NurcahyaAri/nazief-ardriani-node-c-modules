#include <nan.h>
#include <iostream>
#include <string>
#include "nazief.hpp"
using namespace std;



NAN_METHOD(Stemming){
    if(!info[0]->IsString()){
        cout << "Argument must a string" << endl;
        return;
    }
    // cout << info[0] << endl;
    string text = *v8::String::Utf8Value(info[0]->ToString());
    class::Stemming s(text);
    auto message = Nan::New(s.getVal()).ToLocalChecked();
    info.GetReturnValue().Set(message);
}

NAN_MODULE_INIT(Initialize){
    NAN_EXPORT(target, Stemming);
}

NODE_MODULE(addon, Initialize);