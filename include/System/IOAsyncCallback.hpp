// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IOAsyncResult
  class IOAsyncResult;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IOAsyncCallback
  class IOAsyncCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IOAsyncCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::IOAsyncCallback*, "System", "IOAsyncCallback");
// Type namespace: System
namespace System {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.IOAsyncCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class IOAsyncCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1CEA1BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IOAsyncCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IOAsyncCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IOAsyncCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.IOAsyncResult ioares)
    // Offset: 0x1CEA1CC
    void Invoke(::System::IOAsyncResult* ioares);
    // public System.IAsyncResult BeginInvoke(System.IOAsyncResult ioares, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1CEA560
    ::System::IAsyncResult* BeginInvoke(::System::IOAsyncResult* ioares, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1CEA584
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.IOAsyncCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IOAsyncCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IOAsyncCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IOAsyncCallback::*)(::System::IOAsyncResult*)>(&System::IOAsyncCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* ioares = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ioares});
  }
};
// Writing MetadataGetter for method: System::IOAsyncCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::IOAsyncCallback::*)(::System::IOAsyncResult*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::IOAsyncCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* ioares = &::il2cpp_utils::GetClassFromName("System", "IOAsyncResult")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ioares, callback, object});
  }
};
// Writing MetadataGetter for method: System::IOAsyncCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IOAsyncCallback::*)(::System::IAsyncResult*)>(&System::IOAsyncCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IOAsyncCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
