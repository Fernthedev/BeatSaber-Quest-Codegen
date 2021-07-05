// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.Warning
#include "RootMotion/Warning.hpp"
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
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.Warning/Logger
  class Warning::Logger : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: Logger
    Logger() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1AB53CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Warning::Logger* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::Warning::Logger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Warning::Logger*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String message)
    // Offset: 0x1AB5038
    void Invoke(::Il2CppString* message);
    // public System.IAsyncResult BeginInvoke(System.String message, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1AB53DC
    System::IAsyncResult* BeginInvoke(::Il2CppString* message, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1AB5400
    void EndInvoke(System::IAsyncResult* result);
  }; // RootMotion.Warning/Logger
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::Warning::Logger*, "RootMotion", "Warning/Logger");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: RootMotion::Warning::Logger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::Warning::Logger::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Warning::Logger::*)(::Il2CppString*)>(&RootMotion::Warning::Logger::Invoke)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Warning::Logger*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: RootMotion::Warning::Logger::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (RootMotion::Warning::Logger::*)(::Il2CppString*, System::AsyncCallback*, ::Il2CppObject*)>(&RootMotion::Warning::Logger::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Warning::Logger*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, callback, object});
  }
};
// Writing MetadataGetter for method: RootMotion::Warning::Logger::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (RootMotion::Warning::Logger::*)(System::IAsyncResult*)>(&RootMotion::Warning::Logger::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(RootMotion::Warning::Logger*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
