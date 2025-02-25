// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ContextBoundObject
#include "System/ContextBoundObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: CrossContextDelegate
  class CrossContextDelegate;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Contexts.ContextCallbackObject
  // [TokenAttribute] Offset: FFFFFFFF
  class ContextCallbackObject : public System::ContextBoundObject {
    public:
    // Creating value type constructor for type: ContextCallbackObject
    ContextCallbackObject() noexcept {}
    // public System.Void DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate deleg)
    // Offset: 0x1A44818
    void DoCallBack(System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg);
    // public System.Void .ctor()
    // Offset: 0x1A4481C
    // Implemented from: System.ContextBoundObject
    // Base method: System.Void ContextBoundObject::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextCallbackObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Contexts::ContextCallbackObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextCallbackObject*, creationType>()));
    }
  }; // System.Runtime.Remoting.Contexts.ContextCallbackObject
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::ContextCallbackObject*, "System.Runtime.Remoting.Contexts", "ContextCallbackObject");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::ContextCallbackObject::DoCallBack
// Il2CppName: DoCallBack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Contexts::ContextCallbackObject::*)(System::Runtime::Remoting::Contexts::CrossContextDelegate*)>(&System::Runtime::Remoting::Contexts::ContextCallbackObject::DoCallBack)> {
  static const MethodInfo* get() {
    static auto* deleg = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Contexts", "CrossContextDelegate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Contexts::ContextCallbackObject*), "DoCallBack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deleg});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Contexts::ContextCallbackObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
