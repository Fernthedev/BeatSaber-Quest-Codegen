// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: TMPro.SpriteAssetUtilities.TexturePacker
#include "TMPro/SpriteAssetUtilities/TexturePacker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: TMPro.SpriteAssetUtilities
namespace TMPro::SpriteAssetUtilities {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteSize
  // [TokenAttribute] Offset: FFFFFFFF
  struct TexturePacker::SpriteSize/*, public System::ValueType*/ {
    public:
    // public System.Single w
    // Size: 0x4
    // Offset: 0x0
    float w;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single h
    // Size: 0x4
    // Offset: 0x4
    float h;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Creating value type constructor for type: SpriteSize
    constexpr SpriteSize(float w_ = {}, float h_ = {}) noexcept : w{w_}, h{h_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Single w
    float& dyn_w();
    // Get instance field reference: public System.Single h
    float& dyn_h();
    // public override System.String ToString()
    // Offset: 0x11192CC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // TMPro.SpriteAssetUtilities.TexturePacker/TMPro.SpriteAssetUtilities.SpriteSize
  #pragma pack(pop)
  static check_size<sizeof(TexturePacker::SpriteSize), 4 + sizeof(float)> __TMPro_SpriteAssetUtilities_TexturePacker_SpriteSizeSizeCheck;
  static_assert(sizeof(TexturePacker::SpriteSize) == 0x8);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::SpriteAssetUtilities::TexturePacker::SpriteSize, "TMPro.SpriteAssetUtilities", "TexturePacker/SpriteSize");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: TMPro::SpriteAssetUtilities::TexturePacker::SpriteSize::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (TMPro::SpriteAssetUtilities::TexturePacker::SpriteSize::*)()>(&TMPro::SpriteAssetUtilities::TexturePacker::SpriteSize::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(TMPro::SpriteAssetUtilities::TexturePacker::SpriteSize), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
