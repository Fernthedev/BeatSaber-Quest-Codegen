// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Timeline.TrackBindingFlags
#include "UnityEngine/Timeline/TrackBindingFlags.hpp"
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
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TrackBindingTypeAttribute
  // [AttributeUsageAttribute] Offset: DD77DC
  class TrackBindingTypeAttribute : public System::Attribute {
    public:
    // public readonly System.Type type
    // Size: 0x8
    // Offset: 0x10
    System::Type* type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // public readonly UnityEngine.Timeline.TrackBindingFlags flags
    // Size: 0x4
    // Offset: 0x18
    UnityEngine::Timeline::TrackBindingFlags flags;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TrackBindingFlags) == 0x4);
    // Creating value type constructor for type: TrackBindingTypeAttribute
    TrackBindingTypeAttribute(System::Type* type_ = {}, UnityEngine::Timeline::TrackBindingFlags flags_ = {}) noexcept : type{type_}, flags{flags_} {}
    // public System.Void .ctor(System.Type type)
    // Offset: 0x2343680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackBindingTypeAttribute* New_ctor(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TrackBindingTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackBindingTypeAttribute*, creationType>(type)));
    }
    // public System.Void .ctor(System.Type type, UnityEngine.Timeline.TrackBindingFlags flags)
    // Offset: 0x23436B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackBindingTypeAttribute* New_ctor(System::Type* type, UnityEngine::Timeline::TrackBindingFlags flags) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TrackBindingTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackBindingTypeAttribute*, creationType>(type, flags)));
    }
  }; // UnityEngine.Timeline.TrackBindingTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(TrackBindingTypeAttribute), 24 + sizeof(UnityEngine::Timeline::TrackBindingFlags)> __UnityEngine_Timeline_TrackBindingTypeAttributeSizeCheck;
  static_assert(sizeof(TrackBindingTypeAttribute) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackBindingTypeAttribute*, "UnityEngine.Timeline", "TrackBindingTypeAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackBindingTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackBindingTypeAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
