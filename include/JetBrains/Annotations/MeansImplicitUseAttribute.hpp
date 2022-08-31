// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: JetBrains.Annotations.ImplicitUseKindFlags
#include "JetBrains/Annotations/ImplicitUseKindFlags_.hpp"
// Including type: JetBrains.Annotations.ImplicitUseTargetFlags
#include "JetBrains/Annotations/ImplicitUseTargetFlags_.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Forward declaring type: MeansImplicitUseAttribute
  class MeansImplicitUseAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::JetBrains::Annotations::MeansImplicitUseAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::MeansImplicitUseAttribute*, "JetBrains.Annotations", "MeansImplicitUseAttribute");
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.MeansImplicitUseAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 1098428
  class MeansImplicitUseAttribute : public ::System::Attribute {
    public:
    public:
    // private JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::JetBrains::Annotations::ImplicitUseKindFlags_ UseKindFlags;
    // Field size check
    static_assert(sizeof(::JetBrains::Annotations::ImplicitUseKindFlags_) == 0x4);
    // private JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    ::JetBrains::Annotations::ImplicitUseTargetFlags_ TargetFlags;
    // Field size check
    static_assert(sizeof(::JetBrains::Annotations::ImplicitUseTargetFlags_) == 0x4);
    public:
    // Get instance field reference: private JetBrains.Annotations.ImplicitUseKindFlags <UseKindFlags>k__BackingField
    [[deprecated("Use field access instead!")]] ::JetBrains::Annotations::ImplicitUseKindFlags_& dyn_$UseKindFlags$k__BackingField();
    // Get instance field reference: private JetBrains.Annotations.ImplicitUseTargetFlags <TargetFlags>k__BackingField
    [[deprecated("Use field access instead!")]] ::JetBrains::Annotations::ImplicitUseTargetFlags_& dyn_$TargetFlags$k__BackingField();
    // public JetBrains.Annotations.ImplicitUseKindFlags get_UseKindFlags()
    // Offset: 0x2B06298
    ::JetBrains::Annotations::ImplicitUseKindFlags_ get_UseKindFlags();
    // private System.Void set_UseKindFlags(JetBrains.Annotations.ImplicitUseKindFlags value)
    // Offset: 0x2B062A0
    void set_UseKindFlags(::JetBrains::Annotations::ImplicitUseKindFlags_ value);
    // public JetBrains.Annotations.ImplicitUseTargetFlags get_TargetFlags()
    // Offset: 0x2B062A8
    ::JetBrains::Annotations::ImplicitUseTargetFlags_ get_TargetFlags();
    // private System.Void set_TargetFlags(JetBrains.Annotations.ImplicitUseTargetFlags value)
    // Offset: 0x2B062B0
    void set_TargetFlags(::JetBrains::Annotations::ImplicitUseTargetFlags_ value);
    // public System.Void .ctor()
    // Offset: 0x2B061D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>()));
    }
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags)
    // Offset: 0x2B06238
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags_ useKindFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>(useKindFlags)));
    }
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x2B06268
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseTargetFlags_ targetFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>(targetFlags)));
    }
    // public System.Void .ctor(JetBrains.Annotations.ImplicitUseKindFlags useKindFlags, JetBrains.Annotations.ImplicitUseTargetFlags targetFlags)
    // Offset: 0x2B06200
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MeansImplicitUseAttribute* New_ctor(::JetBrains::Annotations::ImplicitUseKindFlags_ useKindFlags, ::JetBrains::Annotations::ImplicitUseTargetFlags_ targetFlags) {
      static auto ___internal__logger = ::Logger::get().WithContext("::JetBrains::Annotations::MeansImplicitUseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MeansImplicitUseAttribute*, creationType>(useKindFlags, targetFlags)));
    }
  }; // JetBrains.Annotations.MeansImplicitUseAttribute
  #pragma pack(pop)
  static check_size<sizeof(MeansImplicitUseAttribute), 20 + sizeof(::JetBrains::Annotations::ImplicitUseTargetFlags_)> __JetBrains_Annotations_MeansImplicitUseAttributeSizeCheck;
  static_assert(sizeof(MeansImplicitUseAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::get_UseKindFlags
// Il2CppName: get_UseKindFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::JetBrains::Annotations::ImplicitUseKindFlags_ (JetBrains::Annotations::MeansImplicitUseAttribute::*)()>(&JetBrains::Annotations::MeansImplicitUseAttribute::get_UseKindFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MeansImplicitUseAttribute*), "get_UseKindFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::set_UseKindFlags
// Il2CppName: set_UseKindFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::MeansImplicitUseAttribute::*)(::JetBrains::Annotations::ImplicitUseKindFlags_)>(&JetBrains::Annotations::MeansImplicitUseAttribute::set_UseKindFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("JetBrains.Annotations", "ImplicitUseKindFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MeansImplicitUseAttribute*), "set_UseKindFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::get_TargetFlags
// Il2CppName: get_TargetFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::JetBrains::Annotations::ImplicitUseTargetFlags_ (JetBrains::Annotations::MeansImplicitUseAttribute::*)()>(&JetBrains::Annotations::MeansImplicitUseAttribute::get_TargetFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MeansImplicitUseAttribute*), "get_TargetFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::set_TargetFlags
// Il2CppName: set_TargetFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (JetBrains::Annotations::MeansImplicitUseAttribute::*)(::JetBrains::Annotations::ImplicitUseTargetFlags_)>(&JetBrains::Annotations::MeansImplicitUseAttribute::set_TargetFlags)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("JetBrains.Annotations", "ImplicitUseTargetFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(JetBrains::Annotations::MeansImplicitUseAttribute*), "set_TargetFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: JetBrains::Annotations::MeansImplicitUseAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
