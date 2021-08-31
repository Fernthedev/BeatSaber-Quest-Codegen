// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TrackColorAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DF6C78
  class TrackColorAttribute : public System::Attribute {
    public:
    // private UnityEngine.Color m_Color
    // Size: 0x10
    // Offset: 0x10
    UnityEngine::Color m_Color;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: TrackColorAttribute
    TrackColorAttribute(UnityEngine::Color m_Color_ = {}) noexcept : m_Color{m_Color_} {}
    // Creating conversion operator: operator UnityEngine::Color
    constexpr operator UnityEngine::Color() const noexcept {
      return m_Color;
    }
    // Get instance field: private UnityEngine.Color m_Color
    UnityEngine::Color _get_m_Color();
    // Set instance field: private UnityEngine.Color m_Color
    void _set_m_Color(UnityEngine::Color value);
    // public UnityEngine.Color get_color()
    // Offset: 0x2376774
    UnityEngine::Color get_color();
    // public System.Void .ctor(System.Single r, System.Single g, System.Single b)
    // Offset: 0x2376780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackColorAttribute* New_ctor(float r, float g, float b) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TrackColorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackColorAttribute*, creationType>(r, g, b)));
    }
  }; // UnityEngine.Timeline.TrackColorAttribute
  #pragma pack(pop)
  static check_size<sizeof(TrackColorAttribute), 16 + sizeof(UnityEngine::Color)> __UnityEngine_Timeline_TrackColorAttributeSizeCheck;
  static_assert(sizeof(TrackColorAttribute) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackColorAttribute*, "UnityEngine.Timeline", "TrackColorAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackColorAttribute::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (UnityEngine::Timeline::TrackColorAttribute::*)()>(&UnityEngine::Timeline::TrackColorAttribute::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TrackColorAttribute*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TrackColorAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
