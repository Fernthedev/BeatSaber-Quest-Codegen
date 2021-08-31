// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: StringListSO
  // [TokenAttribute] Offset: FFFFFFFF
  class StringListSO : public GlobalNamespace::PersistentScriptableObject {
    public:
    // [ReorderableAttribute] Offset: 0xE03988
    // private System.String[] _strings
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* strings;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: StringListSO
    StringListSO(::Array<::Il2CppString*>* strings_ = {}) noexcept : strings{strings_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String[] _strings
    ::Array<::Il2CppString*>*& dyn__strings();
    // public System.String[] get_strings()
    // Offset: 0x23993E4
    ::Array<::Il2CppString*>* get_strings();
    // public System.Void .ctor()
    // Offset: 0x23993EC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringListSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::StringListSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringListSO*, creationType>()));
    }
  }; // StringListSO
  #pragma pack(pop)
  static check_size<sizeof(StringListSO), 24 + sizeof(::Array<::Il2CppString*>*)> __GlobalNamespace_StringListSOSizeCheck;
  static_assert(sizeof(StringListSO) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StringListSO*, "", "StringListSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StringListSO::get_strings
// Il2CppName: get_strings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<::Il2CppString*>* (GlobalNamespace::StringListSO::*)()>(&GlobalNamespace::StringListSO::get_strings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StringListSO*), "get_strings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StringListSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
