// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: DataModels.PlayerAvatar
namespace DataModels::PlayerAvatar {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DataModels.PlayerAvatar.RandomizeAvatarColorMap
  // [TokenAttribute] Offset: FFFFFFFF
  class RandomizeAvatarColorMap : public ::Il2CppObject {
    public:
    // private readonly System.Int32 <totalIndices>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int totalIndices;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: totalIndices and: colorIndices
    char __padding0[0x4] = {};
    // private readonly System.Int32[] <colorIndices>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* colorIndices;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: RandomizeAvatarColorMap
    RandomizeAvatarColorMap(int totalIndices_ = {}, ::Array<int>* colorIndices_ = {}) noexcept : totalIndices{totalIndices_}, colorIndices{colorIndices_} {}
    // Get instance field reference: private readonly System.Int32 <totalIndices>k__BackingField
    int& dyn_$totalIndices$k__BackingField();
    // Get instance field reference: private readonly System.Int32[] <colorIndices>k__BackingField
    ::Array<int>*& dyn_$colorIndices$k__BackingField();
    // public System.Int32 get_totalIndices()
    // Offset: 0x10ED820
    int get_totalIndices();
    // public System.Int32[] get_colorIndices()
    // Offset: 0x10ED828
    ::Array<int>* get_colorIndices();
    // public System.Void .ctor(System.Int32 headTopPrimaryColorIndex, System.Int32 headTopSecondaryColorIndex, System.Int32 glassesColorIndex, System.Int32 facialHairColorIndex, System.Int32 handsColorIndex, System.Int32 clothesPrimaryColorIndex, System.Int32 clothesSecondaryColorIndex, System.Int32 clothesDetailColorIndex)
    // Offset: 0x10ED228
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RandomizeAvatarColorMap* New_ctor(int headTopPrimaryColorIndex, int headTopSecondaryColorIndex, int glassesColorIndex, int facialHairColorIndex, int handsColorIndex, int clothesPrimaryColorIndex, int clothesSecondaryColorIndex, int clothesDetailColorIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("DataModels::PlayerAvatar::RandomizeAvatarColorMap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RandomizeAvatarColorMap*, creationType>(headTopPrimaryColorIndex, headTopSecondaryColorIndex, glassesColorIndex, facialHairColorIndex, handsColorIndex, clothesPrimaryColorIndex, clothesSecondaryColorIndex, clothesDetailColorIndex)));
    }
  }; // DataModels.PlayerAvatar.RandomizeAvatarColorMap
  #pragma pack(pop)
  static check_size<sizeof(RandomizeAvatarColorMap), 24 + sizeof(::Array<int>*)> __DataModels_PlayerAvatar_RandomizeAvatarColorMapSizeCheck;
  static_assert(sizeof(RandomizeAvatarColorMap) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(DataModels::PlayerAvatar::RandomizeAvatarColorMap*, "DataModels.PlayerAvatar", "RandomizeAvatarColorMap");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DataModels::PlayerAvatar::RandomizeAvatarColorMap::get_totalIndices
// Il2CppName: get_totalIndices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DataModels::PlayerAvatar::RandomizeAvatarColorMap::*)()>(&DataModels::PlayerAvatar::RandomizeAvatarColorMap::get_totalIndices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DataModels::PlayerAvatar::RandomizeAvatarColorMap*), "get_totalIndices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DataModels::PlayerAvatar::RandomizeAvatarColorMap::get_colorIndices
// Il2CppName: get_colorIndices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Array<int>* (DataModels::PlayerAvatar::RandomizeAvatarColorMap::*)()>(&DataModels::PlayerAvatar::RandomizeAvatarColorMap::get_colorIndices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DataModels::PlayerAvatar::RandomizeAvatarColorMap*), "get_colorIndices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DataModels::PlayerAvatar::RandomizeAvatarColorMap::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
