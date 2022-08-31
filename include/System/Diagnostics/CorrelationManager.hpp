// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Stack
  class Stack;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: CorrelationManager
  class CorrelationManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::CorrelationManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::CorrelationManager*, "System.Diagnostics", "CorrelationManager");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.CorrelationManager
  // [TokenAttribute] Offset: FFFFFFFF
  class CorrelationManager : public ::Il2CppObject {
    public:
    // public System.Collections.Stack get_LogicalOperationStack()
    // Offset: 0x1CD9804
    ::System::Collections::Stack* get_LogicalOperationStack();
    // System.Void .ctor()
    // Offset: 0x1CD97FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CorrelationManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::CorrelationManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CorrelationManager*, creationType>()));
    }
    // private System.Collections.Stack GetLogicalOperationStack()
    // Offset: 0x1CD9808
    ::System::Collections::Stack* GetLogicalOperationStack();
  }; // System.Diagnostics.CorrelationManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::CorrelationManager::get_LogicalOperationStack
// Il2CppName: get_LogicalOperationStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Stack* (System::Diagnostics::CorrelationManager::*)()>(&System::Diagnostics::CorrelationManager::get_LogicalOperationStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::CorrelationManager*), "get_LogicalOperationStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::CorrelationManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::CorrelationManager::GetLogicalOperationStack
// Il2CppName: GetLogicalOperationStack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Stack* (System::Diagnostics::CorrelationManager::*)()>(&System::Diagnostics::CorrelationManager::GetLogicalOperationStack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::CorrelationManager*), "GetLogicalOperationStack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
