// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: IPlaylist
#include "GlobalNamespace/IPlaylist.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelCollectionSO
  class BeatmapLevelCollectionSO;
  // Forward declaring type: IBeatmapLevelCollection
  class IBeatmapLevelCollection;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: PlaylistSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PlaylistSO : public UnityEngine::ScriptableObject/*, public GlobalNamespace::IPlaylist*/ {
    public:
    // private System.String _playListLocalizedName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* playListLocalizedName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private UnityEngine.Sprite _coverImage
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Sprite* coverImage;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private BeatmapLevelCollectionSO _beatmapLevelCollection
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapLevelCollectionSO* beatmapLevelCollection;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelCollectionSO*) == 0x8);
    // Creating value type constructor for type: PlaylistSO
    PlaylistSO(::Il2CppString* playListLocalizedName_ = {}, UnityEngine::Sprite* coverImage_ = {}, GlobalNamespace::BeatmapLevelCollectionSO* beatmapLevelCollection_ = {}) noexcept : playListLocalizedName{playListLocalizedName_}, coverImage{coverImage_}, beatmapLevelCollection{beatmapLevelCollection_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IPlaylist
    operator GlobalNamespace::IPlaylist() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPlaylist*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _playListLocalizedName
    ::Il2CppString*& dyn__playListLocalizedName();
    // Get instance field reference: private UnityEngine.Sprite _coverImage
    UnityEngine::Sprite*& dyn__coverImage();
    // Get instance field reference: private BeatmapLevelCollectionSO _beatmapLevelCollection
    GlobalNamespace::BeatmapLevelCollectionSO*& dyn__beatmapLevelCollection();
    // public System.String get_collectionName()
    // Offset: 0x11FD0B0
    ::Il2CppString* get_collectionName();
    // public UnityEngine.Sprite get_coverImage()
    // Offset: 0x11FD0BC
    UnityEngine::Sprite* get_coverImage();
    // public IBeatmapLevelCollection get_beatmapLevelCollection()
    // Offset: 0x11FD0C4
    GlobalNamespace::IBeatmapLevelCollection* get_beatmapLevelCollection();
    // public System.Void .ctor()
    // Offset: 0x11FD0CC
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaylistSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlaylistSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaylistSO*, creationType>()));
    }
  }; // PlaylistSO
  #pragma pack(pop)
  static check_size<sizeof(PlaylistSO), 40 + sizeof(GlobalNamespace::BeatmapLevelCollectionSO*)> __GlobalNamespace_PlaylistSOSizeCheck;
  static_assert(sizeof(PlaylistSO) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlaylistSO*, "", "PlaylistSO");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlaylistSO::get_collectionName
// Il2CppName: get_collectionName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::PlaylistSO::*)()>(&GlobalNamespace::PlaylistSO::get_collectionName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaylistSO*), "get_collectionName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaylistSO::get_coverImage
// Il2CppName: get_coverImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::PlaylistSO::*)()>(&GlobalNamespace::PlaylistSO::get_coverImage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaylistSO*), "get_coverImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaylistSO::get_beatmapLevelCollection
// Il2CppName: get_beatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IBeatmapLevelCollection* (GlobalNamespace::PlaylistSO::*)()>(&GlobalNamespace::PlaylistSO::get_beatmapLevelCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlaylistSO*), "get_beatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlaylistSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
