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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.AsyncCallback
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D99574
  class AsyncCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: AsyncCallback
    AsyncCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x17CEB70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::AsyncCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IAsyncResult ar)
    // Offset: 0x17CEB80
    void Invoke(System::IAsyncResult* ar);
    // public System.IAsyncResult BeginInvoke(System.IAsyncResult ar, System.AsyncCallback callback, System.Object object)
    // Offset: 0x17CEF14
    System::IAsyncResult* BeginInvoke(System::IAsyncResult* ar, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x17CEF38
    void EndInvoke(System::IAsyncResult* result);
  }; // System.AsyncCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::AsyncCallback*, "System", "AsyncCallback");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::AsyncCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AsyncCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AsyncCallback::*)(System::IAsyncResult*)>(&System::AsyncCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::AsyncCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar});
  }
};
// Writing MetadataGetter for method: System::AsyncCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::AsyncCallback::*)(System::IAsyncResult*, System::AsyncCallback*, ::Il2CppObject*)>(&System::AsyncCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ar = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::AsyncCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ar, callback, object});
  }
};
// Writing MetadataGetter for method: System::AsyncCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AsyncCallback::*)(System::IAsyncResult*)>(&System::AsyncCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::AsyncCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
