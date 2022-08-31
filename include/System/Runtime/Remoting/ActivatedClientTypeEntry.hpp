// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.TypeEntry
#include "System/Runtime/Remoting/TypeEntry.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IContextAttribute
  class IContextAttribute;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ActivatedClientTypeEntry
  class ActivatedClientTypeEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::ActivatedClientTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ActivatedClientTypeEntry*, "System.Runtime.Remoting", "ActivatedClientTypeEntry");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ActivatedClientTypeEntry
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1043DE0
  class ActivatedClientTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
    public:
    public:
    // private System.String applicationUrl
    // Size: 0x8
    // Offset: 0x20
    ::StringW applicationUrl;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Type obj_type
    // Size: 0x8
    // Offset: 0x28
    ::System::Type* obj_type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: private System.String applicationUrl
    [[deprecated("Use field access instead!")]] ::StringW& dyn_applicationUrl();
    // Get instance field reference: private System.Type obj_type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_obj_type();
    // public System.String get_ApplicationUrl()
    // Offset: 0x1D7D494
    ::StringW get_ApplicationUrl();
    // public System.Runtime.Remoting.Contexts.IContextAttribute[] get_ContextAttributes()
    // Offset: 0x1D7D49C
    ::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*> get_ContextAttributes();
    // public System.Type get_ObjectType()
    // Offset: 0x1D7D4A4
    ::System::Type* get_ObjectType();
    // public System.Void .ctor(System.String typeName, System.String assemblyName, System.String appUrl)
    // Offset: 0x1D7D35C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivatedClientTypeEntry* New_ctor(::StringW typeName, ::StringW assemblyName, ::StringW appUrl) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::ActivatedClientTypeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivatedClientTypeEntry*, creationType>(typeName, assemblyName, appUrl)));
    }
    // public override System.String ToString()
    // Offset: 0x1D7D4AC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Runtime.Remoting.ActivatedClientTypeEntry
  #pragma pack(pop)
  static check_size<sizeof(ActivatedClientTypeEntry), 40 + sizeof(::System::Type*)> __System_Runtime_Remoting_ActivatedClientTypeEntrySizeCheck;
  static_assert(sizeof(ActivatedClientTypeEntry) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedClientTypeEntry::get_ApplicationUrl
// Il2CppName: get_ApplicationUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(&System::Runtime::Remoting::ActivatedClientTypeEntry::get_ApplicationUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ActivatedClientTypeEntry*), "get_ApplicationUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedClientTypeEntry::get_ContextAttributes
// Il2CppName: get_ContextAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Runtime::Remoting::Contexts::IContextAttribute*> (System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(&System::Runtime::Remoting::ActivatedClientTypeEntry::get_ContextAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ActivatedClientTypeEntry*), "get_ContextAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedClientTypeEntry::get_ObjectType
// Il2CppName: get_ObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(&System::Runtime::Remoting::ActivatedClientTypeEntry::get_ObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ActivatedClientTypeEntry*), "get_ObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedClientTypeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedClientTypeEntry::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::ActivatedClientTypeEntry::*)()>(&System::Runtime::Remoting::ActivatedClientTypeEntry::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ActivatedClientTypeEntry*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
