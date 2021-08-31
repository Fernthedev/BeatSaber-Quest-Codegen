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
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.MacroAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DEB47C
  class MacroAttribute : public System::Attribute {
    public:
    // private System.String <Expression>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Expression;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 <Editable>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    int Editable;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Editable and: Target
    char __padding1[0x4] = {};
    // private System.String <Target>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* Target;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: MacroAttribute
    MacroAttribute(::Il2CppString* Expression_ = {}, int Editable_ = {}, ::Il2CppString* Target_ = {}) noexcept : Expression{Expression_}, Editable{Editable_}, Target{Target_} {}
    // Get instance field reference: private System.String <Expression>k__BackingField
    ::Il2CppString*& dyn_$Expression$k__BackingField();
    // Get instance field reference: private System.Int32 <Editable>k__BackingField
    int& dyn_$Editable$k__BackingField();
    // Get instance field reference: private System.String <Target>k__BackingField
    ::Il2CppString*& dyn_$Target$k__BackingField();
    // public System.String get_Expression()
    // Offset: 0x240854C
    ::Il2CppString* get_Expression();
    // public System.Void set_Expression(System.String value)
    // Offset: 0x2408554
    void set_Expression(::Il2CppString* value);
    // public System.Int32 get_Editable()
    // Offset: 0x240855C
    int get_Editable();
    // public System.Void set_Editable(System.Int32 value)
    // Offset: 0x2408564
    void set_Editable(int value);
    // public System.String get_Target()
    // Offset: 0x240856C
    ::Il2CppString* get_Target();
    // public System.Void set_Target(System.String value)
    // Offset: 0x2408574
    void set_Target(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x240857C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MacroAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::MacroAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MacroAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.MacroAttribute
  #pragma pack(pop)
  static check_size<sizeof(MacroAttribute), 32 + sizeof(::Il2CppString*)> __JetBrains_Annotations_MacroAttributeSizeCheck;
  static_assert(sizeof(MacroAttribute) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::MacroAttribute*, "JetBrains.Annotations", "MacroAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::MacroAttribute::get_Expression
// Il2CppName: get_Expression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::MacroAttribute::*)()>(&JetBrains::Annotations::MacroAttribute::get_Expression)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MacroAttribute*), "get_Expression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MacroAttribute::set_Expression
// Il2CppName: set_Expression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::MacroAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::MacroAttribute::set_Expression)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MacroAttribute*), "set_Expression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MacroAttribute::get_Editable
// Il2CppName: get_Editable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (JetBrains::Annotations::MacroAttribute::*)()>(&JetBrains::Annotations::MacroAttribute::get_Editable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MacroAttribute*), "get_Editable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MacroAttribute::set_Editable
// Il2CppName: set_Editable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::MacroAttribute::*)(int)>(&JetBrains::Annotations::MacroAttribute::set_Editable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MacroAttribute*), "set_Editable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MacroAttribute::get_Target
// Il2CppName: get_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (JetBrains::Annotations::MacroAttribute::*)()>(&JetBrains::Annotations::MacroAttribute::get_Target)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MacroAttribute*), "get_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MacroAttribute::set_Target
// Il2CppName: set_Target
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::MacroAttribute::*)(::Il2CppString*)>(&JetBrains::Annotations::MacroAttribute::set_Target)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MacroAttribute*), "set_Target", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MacroAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
