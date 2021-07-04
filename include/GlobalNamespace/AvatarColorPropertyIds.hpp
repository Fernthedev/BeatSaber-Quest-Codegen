// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AvatarColorPropertyIds
  class AvatarColorPropertyIds : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AvatarColorPropertyIds
    AvatarColorPropertyIds() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE1529C
    // Get static field: static public readonly System.Int32 colorPropertyId
    static int _get_colorPropertyId();
    // Set static field: static public readonly System.Int32 colorPropertyId
    static void _set_colorPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE152AC
    // Get static field: static public readonly System.Int32 rimLightColorPropertyId
    static int _get_rimLightColorPropertyId();
    // Set static field: static public readonly System.Int32 rimLightColorPropertyId
    static void _set_rimLightColorPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE152BC
    // Get static field: static public readonly System.Int32 uvColorsPropertyId
    static int _get_uvColorsPropertyId();
    // Set static field: static public readonly System.Int32 uvColorsPropertyId
    static void _set_uvColorsPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE152CC
    // Get static field: static public readonly System.Int32 uvRimLightColorsPropertyId
    static int _get_uvRimLightColorsPropertyId();
    // Set static field: static public readonly System.Int32 uvRimLightColorsPropertyId
    static void _set_uvRimLightColorsPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE152DC
    // Get static field: static public readonly System.Int32 segmentToHighlightPropertyId
    static int _get_segmentToHighlightPropertyId();
    // Set static field: static public readonly System.Int32 segmentToHighlightPropertyId
    static void _set_segmentToHighlightPropertyId(int value);
    // static private System.Void .cctor()
    // Offset: 0x1133CEC
    static void _cctor();
  }; // AvatarColorPropertyIds
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarColorPropertyIds*, "", "AvatarColorPropertyIds");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::AvatarColorPropertyIds::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::AvatarColorPropertyIds::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AvatarColorPropertyIds*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
