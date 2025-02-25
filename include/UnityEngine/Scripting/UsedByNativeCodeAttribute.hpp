// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Scripting.UsedByNativeCodeAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DB0D64
  class UsedByNativeCodeAttribute : public System::Attribute {
    public:
    // [DebuggerBrowsableAttribute] Offset: 0xDB1328
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: UsedByNativeCodeAttribute
    UsedByNativeCodeAttribute(::Il2CppString* Name_ = {}) noexcept : Name{Name_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Name;
    }
    // Get instance field reference: private System.String <Name>k__BackingField
    ::Il2CppString*& dyn_$Name$k__BackingField();
    // public System.Void set_Name(System.String value)
    // Offset: 0x24154E4
    void set_Name(::Il2CppString* value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x24154B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedByNativeCodeAttribute* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::UsedByNativeCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedByNativeCodeAttribute*, creationType>(name)));
    }
    // public System.Void .ctor()
    // Offset: 0x24154B0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UsedByNativeCodeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Scripting::UsedByNativeCodeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UsedByNativeCodeAttribute*, creationType>()));
    }
  }; // UnityEngine.Scripting.UsedByNativeCodeAttribute
  #pragma pack(pop)
  static check_size<sizeof(UsedByNativeCodeAttribute), 16 + sizeof(::Il2CppString*)> __UnityEngine_Scripting_UsedByNativeCodeAttributeSizeCheck;
  static_assert(sizeof(UsedByNativeCodeAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::UsedByNativeCodeAttribute*, "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Scripting::UsedByNativeCodeAttribute::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Scripting::UsedByNativeCodeAttribute::*)(::Il2CppString*)>(&UnityEngine::Scripting::UsedByNativeCodeAttribute::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Scripting::UsedByNativeCodeAttribute*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Scripting::UsedByNativeCodeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Scripting::UsedByNativeCodeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
