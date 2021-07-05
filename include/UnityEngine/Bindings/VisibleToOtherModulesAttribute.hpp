// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.VisibleToOtherModulesAttribute
  // [AttributeUsageAttribute] Offset: D8B6E4
  // [VisibleToOtherModulesAttribute] Offset: D8B6E4
  class VisibleToOtherModulesAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: VisibleToOtherModulesAttribute
    VisibleToOtherModulesAttribute() noexcept {}
    // public System.Void .ctor(params System.String[] modules)
    // Offset: 0x23EC2B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisibleToOtherModulesAttribute* New_ctor(::Array<::Il2CppString*>* modules) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::VisibleToOtherModulesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisibleToOtherModulesAttribute*, creationType>(modules)));
    }
    // Creating initializer_list -> params proxy for: System.Void .ctor(params System.String[] modules)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisibleToOtherModulesAttribute* New_ctor(std::initializer_list<::Il2CppString*> modules) {
      return New_ctor<creationType>(::Array<::Il2CppString*>::New(modules));
    }
    // Creating TArgs -> initializer_list proxy for: System.Void .ctor(params System.String[] modules)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary, class ...TParams>
    static VisibleToOtherModulesAttribute* New_ctor(TParams&&... modules) {
      return New_ctor<creationType>({modules...});
    }
    // public System.Void .ctor()
    // Offset: 0x23EC2B0
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisibleToOtherModulesAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Bindings::VisibleToOtherModulesAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisibleToOtherModulesAttribute*, creationType>()));
    }
  }; // UnityEngine.Bindings.VisibleToOtherModulesAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::VisibleToOtherModulesAttribute*, "UnityEngine.Bindings", "VisibleToOtherModulesAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::VisibleToOtherModulesAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::VisibleToOtherModulesAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
