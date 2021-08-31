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
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.WellKnownClientTypeEntry
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9D3C8
  class WellKnownClientTypeEntry : public System::Runtime::Remoting::TypeEntry {
    public:
    // private System.Type obj_type
    // Size: 0x8
    // Offset: 0x20
    System::Type* obj_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.String obj_url
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* obj_url;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String app_url
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* app_url;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: WellKnownClientTypeEntry
    WellKnownClientTypeEntry(System::Type* obj_type_ = {}, ::Il2CppString* obj_url_ = {}, ::Il2CppString* app_url_ = {}) noexcept : obj_type{obj_type_}, obj_url{obj_url_}, app_url{app_url_} {}
    // Get instance field: private System.Type obj_type
    System::Type* _get_obj_type();
    // Set instance field: private System.Type obj_type
    void _set_obj_type(System::Type* value);
    // Get instance field: private System.String obj_url
    ::Il2CppString* _get_obj_url();
    // Set instance field: private System.String obj_url
    void _set_obj_url(::Il2CppString* value);
    // Get instance field: private System.String app_url
    ::Il2CppString* _get_app_url();
    // Set instance field: private System.String app_url
    void _set_app_url(::Il2CppString* value);
    // public System.String get_ApplicationUrl()
    // Offset: 0x160F194
    ::Il2CppString* get_ApplicationUrl();
    // public System.Type get_ObjectType()
    // Offset: 0x160F19C
    System::Type* get_ObjectType();
    // public System.String get_ObjectUrl()
    // Offset: 0x160F1A4
    ::Il2CppString* get_ObjectUrl();
    // public System.Void .ctor(System.String typeName, System.String assemblyName, System.String objectUrl)
    // Offset: 0x160F05C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WellKnownClientTypeEntry* New_ctor(::Il2CppString* typeName, ::Il2CppString* assemblyName, ::Il2CppString* objectUrl) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::WellKnownClientTypeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WellKnownClientTypeEntry*, creationType>(typeName, assemblyName, objectUrl)));
    }
    // public override System.String ToString()
    // Offset: 0x160F1AC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.Remoting.WellKnownClientTypeEntry
  #pragma pack(pop)
  static check_size<sizeof(WellKnownClientTypeEntry), 48 + sizeof(::Il2CppString*)> __System_Runtime_Remoting_WellKnownClientTypeEntrySizeCheck;
  static_assert(sizeof(WellKnownClientTypeEntry) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::WellKnownClientTypeEntry*, "System.Runtime.Remoting", "WellKnownClientTypeEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownClientTypeEntry::get_ApplicationUrl
// Il2CppName: get_ApplicationUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownClientTypeEntry::get_ApplicationUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::WellKnownClientTypeEntry*), "get_ApplicationUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectType
// Il2CppName: get_ObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::WellKnownClientTypeEntry*), "get_ObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectUrl
// Il2CppName: get_ObjectUrl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownClientTypeEntry::get_ObjectUrl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::WellKnownClientTypeEntry*), "get_ObjectUrl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownClientTypeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::WellKnownClientTypeEntry::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Remoting::WellKnownClientTypeEntry::*)()>(&System::Runtime::Remoting::WellKnownClientTypeEntry::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::WellKnownClientTypeEntry*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
