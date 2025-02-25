// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Resources.UltimateResourceFallbackLocation
#include "System/Resources/UltimateResourceFallbackLocation.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Resources
namespace System::Resources {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Resources.NeutralResourcesLanguageAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA07AC
  // [AttributeUsageAttribute] Offset: DA07AC
  class NeutralResourcesLanguageAttribute : public System::Attribute {
    public:
    // private System.String _culture
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* culture;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Resources.UltimateResourceFallbackLocation _fallbackLoc
    // Size: 0x4
    // Offset: 0x18
    System::Resources::UltimateResourceFallbackLocation fallbackLoc;
    // Field size check
    static_assert(sizeof(System::Resources::UltimateResourceFallbackLocation) == 0x4);
    // Creating value type constructor for type: NeutralResourcesLanguageAttribute
    NeutralResourcesLanguageAttribute(::Il2CppString* culture_ = {}, System::Resources::UltimateResourceFallbackLocation fallbackLoc_ = {}) noexcept : culture{culture_}, fallbackLoc{fallbackLoc_} {}
    // Get instance field reference: private System.String _culture
    ::Il2CppString*& dyn__culture();
    // Get instance field reference: private System.Resources.UltimateResourceFallbackLocation _fallbackLoc
    System::Resources::UltimateResourceFallbackLocation& dyn__fallbackLoc();
    // public System.String get_CultureName()
    // Offset: 0x14874F0
    ::Il2CppString* get_CultureName();
    // public System.Resources.UltimateResourceFallbackLocation get_Location()
    // Offset: 0x14874F8
    System::Resources::UltimateResourceFallbackLocation get_Location();
    // public System.Void .ctor(System.String cultureName)
    // Offset: 0x1487450
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NeutralResourcesLanguageAttribute* New_ctor(::Il2CppString* cultureName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Resources::NeutralResourcesLanguageAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NeutralResourcesLanguageAttribute*, creationType>(cultureName)));
    }
  }; // System.Resources.NeutralResourcesLanguageAttribute
  #pragma pack(pop)
  static check_size<sizeof(NeutralResourcesLanguageAttribute), 24 + sizeof(System::Resources::UltimateResourceFallbackLocation)> __System_Resources_NeutralResourcesLanguageAttributeSizeCheck;
  static_assert(sizeof(NeutralResourcesLanguageAttribute) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Resources::NeutralResourcesLanguageAttribute*, "System.Resources", "NeutralResourcesLanguageAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Resources::NeutralResourcesLanguageAttribute::get_CultureName
// Il2CppName: get_CultureName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Resources::NeutralResourcesLanguageAttribute::*)()>(&System::Resources::NeutralResourcesLanguageAttribute::get_CultureName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::NeutralResourcesLanguageAttribute*), "get_CultureName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::NeutralResourcesLanguageAttribute::get_Location
// Il2CppName: get_Location
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Resources::UltimateResourceFallbackLocation (System::Resources::NeutralResourcesLanguageAttribute::*)()>(&System::Resources::NeutralResourcesLanguageAttribute::get_Location)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Resources::NeutralResourcesLanguageAttribute*), "get_Location", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Resources::NeutralResourcesLanguageAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
