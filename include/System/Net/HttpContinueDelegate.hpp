// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebHeaderCollection
  class WebHeaderCollection;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpContinueDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpContinueDelegate : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: HttpContinueDelegate
    HttpContinueDelegate() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1674234
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpContinueDelegate* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::HttpContinueDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpContinueDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int32 StatusCode, System.Net.WebHeaderCollection httpHeaders)
    // Offset: 0x1674244
    void Invoke(int StatusCode, System::Net::WebHeaderCollection* httpHeaders);
    // public System.IAsyncResult BeginInvoke(System.Int32 StatusCode, System.Net.WebHeaderCollection httpHeaders, System.AsyncCallback callback, System.Object object)
    // Offset: 0x16744C0
    System::IAsyncResult* BeginInvoke(int StatusCode, System::Net::WebHeaderCollection* httpHeaders, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1674558
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Net.HttpContinueDelegate
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpContinueDelegate*, "System.Net", "HttpContinueDelegate");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpContinueDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpContinueDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpContinueDelegate::*)(int, System::Net::WebHeaderCollection*)>(&System::Net::HttpContinueDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* StatusCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* httpHeaders = &::il2cpp_utils::GetClassFromName("System.Net", "WebHeaderCollection")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpContinueDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{StatusCode, httpHeaders});
  }
};
// Writing MetadataGetter for method: System::Net::HttpContinueDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Net::HttpContinueDelegate::*)(int, System::Net::WebHeaderCollection*, System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::HttpContinueDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* StatusCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* httpHeaders = &::il2cpp_utils::GetClassFromName("System.Net", "WebHeaderCollection")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpContinueDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{StatusCode, httpHeaders, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::HttpContinueDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpContinueDelegate::*)(System::IAsyncResult*)>(&System::Net::HttpContinueDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpContinueDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
