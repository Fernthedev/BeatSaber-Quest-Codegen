// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MenuDestination
#include "GlobalNamespace/MenuDestination.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IBeatmapLevelPack
  class IBeatmapLevelPack;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SelectLevelPackDestination
  // [TokenAttribute] Offset: FFFFFFFF
  class SelectLevelPackDestination : public GlobalNamespace::MenuDestination {
    public:
    // public readonly IBeatmapLevelPack beatmapLevelPack
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IBeatmapLevelPack*) == 0x8);
    // Creating value type constructor for type: SelectLevelPackDestination
    SelectLevelPackDestination(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack_ = {}) noexcept : beatmapLevelPack{beatmapLevelPack_} {}
    // Creating conversion operator: operator GlobalNamespace::IBeatmapLevelPack*
    constexpr operator GlobalNamespace::IBeatmapLevelPack*() const noexcept {
      return beatmapLevelPack;
    }
    // Get instance field reference: public readonly IBeatmapLevelPack beatmapLevelPack
    GlobalNamespace::IBeatmapLevelPack*& dyn_beatmapLevelPack();
    // public System.Void .ctor(IBeatmapLevelPack beatmapLevelPack)
    // Offset: 0x109223C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SelectLevelPackDestination* New_ctor(GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SelectLevelPackDestination::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SelectLevelPackDestination*, creationType>(beatmapLevelPack)));
    }
  }; // SelectLevelPackDestination
  #pragma pack(pop)
  static check_size<sizeof(SelectLevelPackDestination), 16 + sizeof(GlobalNamespace::IBeatmapLevelPack*)> __GlobalNamespace_SelectLevelPackDestinationSizeCheck;
  static_assert(sizeof(SelectLevelPackDestination) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectLevelPackDestination*, "", "SelectLevelPackDestination");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SelectLevelPackDestination::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
