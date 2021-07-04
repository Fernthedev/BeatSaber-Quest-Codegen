// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ParameterizedThreadStart
  // [ComVisibleAttribute] Offset: D7CF68
  class ParameterizedThreadStart : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: ParameterizedThreadStart
    ParameterizedThreadStart() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x18AEC2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterizedThreadStart* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::ParameterizedThreadStart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterizedThreadStart*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object obj)
    // Offset: 0x18AEC3C
    void Invoke(::Il2CppObject* obj);
    // public System.IAsyncResult BeginInvoke(System.Object obj, System.AsyncCallback callback, System.Object object)
    // Offset: 0x18AEFD0
    System::IAsyncResult* BeginInvoke(::Il2CppObject* obj, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x18AEFF4
    void EndInvoke(System::IAsyncResult* result);
  }; // System.Threading.ParameterizedThreadStart
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ParameterizedThreadStart*, "System.Threading", "ParameterizedThreadStart");
// Writing includes for template specializations
#include "System/AsyncCallback.hpp"
#include "System/IAsyncResult.hpp"
// Writing MetadataGetter for method: System::Threading::ParameterizedThreadStart::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::ParameterizedThreadStart::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ParameterizedThreadStart::*)(::Il2CppObject*)>(&System::Threading::ParameterizedThreadStart::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ParameterizedThreadStart*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Threading::ParameterizedThreadStart::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (System::Threading::ParameterizedThreadStart::*)(::Il2CppObject*, System::AsyncCallback*, ::Il2CppObject*)>(&System::Threading::ParameterizedThreadStart::BeginInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ParameterizedThreadStart*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>(), ::il2cpp_utils::ExtractIndependentType<System::AsyncCallback*>(), ::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
// Writing MetadataGetter for method: System::Threading::ParameterizedThreadStart::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ParameterizedThreadStart::*)(System::IAsyncResult*)>(&System::Threading::ParameterizedThreadStart::EndInvoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ParameterizedThreadStart*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::IAsyncResult*>()});
  }
};
