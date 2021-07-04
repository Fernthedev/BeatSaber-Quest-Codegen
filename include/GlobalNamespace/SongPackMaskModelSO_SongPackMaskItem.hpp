// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SongPackMaskModelSO
#include "GlobalNamespace/SongPackMaskModelSO.hpp"
// Including type: SongPackMaskModelSO/SongPackDataType
#include "GlobalNamespace/SongPackMaskModelSO_SongPackDataType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelPackSO
  class BeatmapLevelPackSO;
  // Forward declaring type: PreviewBeatmapLevelPackSO
  class PreviewBeatmapLevelPackSO;
  // Forward declaring type: BeatmapLevelPackCollectionSO
  class BeatmapLevelPackCollectionSO;
  // Forward declaring type: SongPackMask
  struct SongPackMask;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: SongPackMaskModelSO/SongPackMaskItem
  class SongPackMaskModelSO::SongPackMaskItem : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::$$c
    class $$c;
    // public SongPackMaskModelSO/SongPackDataType _type
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::SongPackMaskModelSO::SongPackDataType type;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMaskModelSO::SongPackDataType) == 0x4);
    // Padding between fields: type and: beatmapLevelPack
    char __padding0[0x4] = {};
    // [NullAllowed] Offset: 0xE2A060
    // public BeatmapLevelPackSO _beatmapLevelPack
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelPackSO* beatmapLevelPack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelPackSO*) == 0x8);
    // [NullAllowed] Offset: 0xE2A070
    // public PreviewBeatmapLevelPackSO _previewBeatmapLevelPack
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PreviewBeatmapLevelPackSO* previewBeatmapLevelPack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PreviewBeatmapLevelPackSO*) == 0x8);
    // public System.String _serializedName
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* serializedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // [NullAllowed] Offset: 0xE2A080
    // public BeatmapLevelPackCollectionSO _levelPackCollection
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapLevelPackCollectionSO* levelPackCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelPackCollectionSO*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapLevelPackSO> _beatmapLevelPacks
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO*>* beatmapLevelPacks;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO*>*) == 0x8);
    // public System.Collections.Generic.List`1<PreviewBeatmapLevelPackSO> _previewBeatmapLevelPacks
    // Size: 0x8
    // Offset: 0x40
    System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO*>* previewBeatmapLevelPacks;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO*>*) == 0x8);
    // public System.Collections.Generic.List`1<BeatmapLevelPackCollectionSO> _levelPackCollections
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO*>* levelPackCollections;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO*>*) == 0x8);
    // Creating value type constructor for type: SongPackMaskItem
    SongPackMaskItem(GlobalNamespace::SongPackMaskModelSO::SongPackDataType type_ = {}, GlobalNamespace::BeatmapLevelPackSO* beatmapLevelPack_ = {}, GlobalNamespace::PreviewBeatmapLevelPackSO* previewBeatmapLevelPack_ = {}, ::Il2CppString* serializedName_ = {}, GlobalNamespace::BeatmapLevelPackCollectionSO* levelPackCollection_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackSO*>* beatmapLevelPacks_ = {}, System::Collections::Generic::List_1<GlobalNamespace::PreviewBeatmapLevelPackSO*>* previewBeatmapLevelPacks_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO*>* levelPackCollections_ = {}) noexcept : type{type_}, beatmapLevelPack{beatmapLevelPack_}, previewBeatmapLevelPack{previewBeatmapLevelPack_}, serializedName{serializedName_}, levelPackCollection{levelPackCollection_}, beatmapLevelPacks{beatmapLevelPacks_}, previewBeatmapLevelPacks{previewBeatmapLevelPacks_}, levelPackCollections{levelPackCollections_} {}
    // public System.String get_serializedName()
    // Offset: 0x1155D38
    ::Il2CppString* get_serializedName();
    // public SongPackMask get_songPackMask()
    // Offset: 0x1155D7C
    GlobalNamespace::SongPackMask get_songPackMask();
    // public System.Void .ctor()
    // Offset: 0x1156100
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPackMaskModelSO::SongPackMaskItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPackMaskModelSO::SongPackMaskItem*, creationType>()));
    }
  }; // SongPackMaskModelSO/SongPackMaskItem
  #pragma pack(pop)
  static check_size<sizeof(SongPackMaskModelSO::SongPackMaskItem), 72 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapLevelPackCollectionSO*>*)> __GlobalNamespace_SongPackMaskModelSO_SongPackMaskItemSizeCheck;
  static_assert(sizeof(SongPackMaskModelSO::SongPackMaskItem) == 0x50);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem*, "", "SongPackMaskModelSO/SongPackMaskItem");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::get_serializedName
// Il2CppName: get_serializedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::*)()>(&GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::get_serializedName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem*), "get_serializedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::get_songPackMask
// Il2CppName: get_songPackMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::*)()>(&GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::get_songPackMask)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem*), "get_songPackMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMaskModelSO::SongPackMaskItem::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
