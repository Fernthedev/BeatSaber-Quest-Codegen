// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DataModels::PlayerAvatar
namespace DataModels::PlayerAvatar {
  // Forward declaring type: RandomizeAvatarColorMap
  class RandomizeAvatarColorMap;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarData
  class AvatarData;
  // Forward declaring type: AvatarPartsModel
  class AvatarPartsModel;
}
// Completed forward declares
// Type namespace: DataModels.PlayerAvatar
namespace DataModels::PlayerAvatar {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DataModels.PlayerAvatar.AvatarRandomizer
  // [TokenAttribute] Offset: FFFFFFFF
  class AvatarRandomizer : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AvatarRandomizer
    AvatarRandomizer() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE4681C
    // Get static field: static private readonly DataModels.PlayerAvatar.RandomizeAvatarColorMap[] _randomizeColorsParamsCollection
    static ::Array<DataModels::PlayerAvatar::RandomizeAvatarColorMap*>* _get__randomizeColorsParamsCollection();
    // Set static field: static private readonly DataModels.PlayerAvatar.RandomizeAvatarColorMap[] _randomizeColorsParamsCollection
    static void _set__randomizeColorsParamsCollection(::Array<DataModels::PlayerAvatar::RandomizeAvatarColorMap*>* value);
    // static private System.Void .cctor()
    // Offset: 0x10F93DC
    static void _cctor();
    // static public System.Void RandomizeAll(AvatarData avatarData, AvatarPartsModel avatarPartsModel)
    // Offset: 0x10F99A8
    static void RandomizeAll(GlobalNamespace::AvatarData* avatarData, GlobalNamespace::AvatarPartsModel* avatarPartsModel);
    // static public System.Void RandomizeModels(AvatarData avatarData, AvatarPartsModel avatarPartsModel)
    // Offset: 0x10F9A24
    static void RandomizeModels(GlobalNamespace::AvatarData* avatarData, GlobalNamespace::AvatarPartsModel* avatarPartsModel);
    // static public System.Void RandomizeColors(AvatarData avatarData)
    // Offset: 0x10F9B58
    static void RandomizeColors(GlobalNamespace::AvatarData* avatarData);
  }; // DataModels.PlayerAvatar.AvatarRandomizer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(DataModels::PlayerAvatar::AvatarRandomizer*, "DataModels.PlayerAvatar", "AvatarRandomizer");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DataModels::PlayerAvatar::AvatarRandomizer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&DataModels::PlayerAvatar::AvatarRandomizer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DataModels::PlayerAvatar::AvatarRandomizer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DataModels::PlayerAvatar::AvatarRandomizer::RandomizeAll
// Il2CppName: RandomizeAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::AvatarData*, GlobalNamespace::AvatarPartsModel*)>(&DataModels::PlayerAvatar::AvatarRandomizer::RandomizeAll)> {
  static const MethodInfo* get() {
    static auto* avatarData = &::il2cpp_utils::GetClassFromName("", "AvatarData")->byval_arg;
    static auto* avatarPartsModel = &::il2cpp_utils::GetClassFromName("", "AvatarPartsModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DataModels::PlayerAvatar::AvatarRandomizer*), "RandomizeAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatarData, avatarPartsModel});
  }
};
// Writing MetadataGetter for method: DataModels::PlayerAvatar::AvatarRandomizer::RandomizeModels
// Il2CppName: RandomizeModels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::AvatarData*, GlobalNamespace::AvatarPartsModel*)>(&DataModels::PlayerAvatar::AvatarRandomizer::RandomizeModels)> {
  static const MethodInfo* get() {
    static auto* avatarData = &::il2cpp_utils::GetClassFromName("", "AvatarData")->byval_arg;
    static auto* avatarPartsModel = &::il2cpp_utils::GetClassFromName("", "AvatarPartsModel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DataModels::PlayerAvatar::AvatarRandomizer*), "RandomizeModels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatarData, avatarPartsModel});
  }
};
// Writing MetadataGetter for method: DataModels::PlayerAvatar::AvatarRandomizer::RandomizeColors
// Il2CppName: RandomizeColors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(GlobalNamespace::AvatarData*)>(&DataModels::PlayerAvatar::AvatarRandomizer::RandomizeColors)> {
  static const MethodInfo* get() {
    static auto* avatarData = &::il2cpp_utils::GetClassFromName("", "AvatarData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DataModels::PlayerAvatar::AvatarRandomizer*), "RandomizeColors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{avatarData});
  }
};
