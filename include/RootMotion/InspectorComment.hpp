// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: RootMotion
namespace RootMotion {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: RootMotion.InspectorComment
  class InspectorComment : public UnityEngine::PropertyAttribute {
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String color
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* color;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: InspectorComment
    InspectorComment(::Il2CppString* name_ = {}, ::Il2CppString* color_ = {}) noexcept : name{name_}, color{color_} {}
    // public System.Void .ctor(System.String name)
    // Offset: 0x1AB12FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InspectorComment* New_ctor(::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::InspectorComment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InspectorComment*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, System.String color)
    // Offset: 0x1AB136C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InspectorComment* New_ctor(::Il2CppString* name, ::Il2CppString* color) {
      static auto ___internal__logger = ::Logger::get().WithContext("RootMotion::InspectorComment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InspectorComment*, creationType>(name, color)));
    }
  }; // RootMotion.InspectorComment
  #pragma pack(pop)
  static check_size<sizeof(InspectorComment), 24 + sizeof(::Il2CppString*)> __RootMotion_InspectorCommentSizeCheck;
  static_assert(sizeof(InspectorComment) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(RootMotion::InspectorComment*, "RootMotion", "InspectorComment");
// Writing includes for template specializations
// Writing MetadataGetter for method: RootMotion::InspectorComment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: RootMotion::InspectorComment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
