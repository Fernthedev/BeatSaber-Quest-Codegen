// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.TypeEntry
#include "System/Runtime/Remoting/TypeEntry.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ActivatedServiceTypeEntry
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9D2EC
  class ActivatedServiceTypeEntry : public System::Runtime::Remoting::TypeEntry {
    public:
    // private System.Type obj_type
    // Size: 0x8
    // Offset: 0x20
    System::Type* obj_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: ActivatedServiceTypeEntry
    ActivatedServiceTypeEntry(System::Type* obj_type_ = {}) noexcept : obj_type{obj_type_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return obj_type;
    }
    // Get instance field: private System.Type obj_type
    System::Type* _get_obj_type();
    // Set instance field: private System.Type obj_type
    void _set_obj_type(System::Type* value);
    // public System.Type get_ObjectType()
    // Offset: 0x148A0C4
    System::Type* get_ObjectType();
    // public System.Void .ctor(System.String typeName, System.String assemblyName)
    // Offset: 0x1489F9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivatedServiceTypeEntry* New_ctor(::Il2CppString* typeName, ::Il2CppString* assemblyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ActivatedServiceTypeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivatedServiceTypeEntry*, creationType>(typeName, assemblyName)));
    }
    // public override System.String ToString()
    // Offset: 0x148A0CC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.Remoting.ActivatedServiceTypeEntry
  #pragma pack(pop)
  static check_size<sizeof(ActivatedServiceTypeEntry), 32 + sizeof(System::Type*)> __System_Runtime_Remoting_ActivatedServiceTypeEntrySizeCheck;
  static_assert(sizeof(ActivatedServiceTypeEntry) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ActivatedServiceTypeEntry*, "System.Runtime.Remoting", "ActivatedServiceTypeEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedServiceTypeEntry::get_ObjectType
// Il2CppName: get_ObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Runtime::Remoting::ActivatedServiceTypeEntry::*)()>(&System::Runtime::Remoting::ActivatedServiceTypeEntry::get_ObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ActivatedServiceTypeEntry*), "get_ObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedServiceTypeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedServiceTypeEntry::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::ActivatedServiceTypeEntry::*)()>(&System::Runtime::Remoting::ActivatedServiceTypeEntry::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ActivatedServiceTypeEntry*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
