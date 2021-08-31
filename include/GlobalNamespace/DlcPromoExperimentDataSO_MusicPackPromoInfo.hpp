// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: DlcPromoExperimentDataSO
#include "GlobalNamespace/DlcPromoExperimentDataSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewBeatmapLevelPackSO
  class PreviewBeatmapLevelPackSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DlcPromoExperimentDataSO/MusicPackPromoInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class DlcPromoExperimentDataSO::MusicPackPromoInfo : public ::Il2CppObject {
    public:
    // private PreviewBeatmapLevelPackSO _previewBeatmapLevelPack
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::PreviewBeatmapLevelPackSO* previewBeatmapLevelPack;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PreviewBeatmapLevelPackSO*) == 0x8);
    // private UnityEngine.Sprite _bannerImage
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* bannerImage;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // Creating value type constructor for type: MusicPackPromoInfo
    MusicPackPromoInfo(GlobalNamespace::PreviewBeatmapLevelPackSO* previewBeatmapLevelPack_ = {}, UnityEngine::Sprite* bannerImage_ = {}) noexcept : previewBeatmapLevelPack{previewBeatmapLevelPack_}, bannerImage{bannerImage_} {}
    // Get instance field: private PreviewBeatmapLevelPackSO _previewBeatmapLevelPack
    GlobalNamespace::PreviewBeatmapLevelPackSO* _get__previewBeatmapLevelPack();
    // Set instance field: private PreviewBeatmapLevelPackSO _previewBeatmapLevelPack
    void _set__previewBeatmapLevelPack(GlobalNamespace::PreviewBeatmapLevelPackSO* value);
    // Get instance field: private UnityEngine.Sprite _bannerImage
    UnityEngine::Sprite* _get__bannerImage();
    // Set instance field: private UnityEngine.Sprite _bannerImage
    void _set__bannerImage(UnityEngine::Sprite* value);
    // public PreviewBeatmapLevelPackSO get_previewBeatmapLevelPack()
    // Offset: 0x10FC584
    GlobalNamespace::PreviewBeatmapLevelPackSO* get_previewBeatmapLevelPack();
    // public UnityEngine.Sprite get_bannerImage()
    // Offset: 0x10FC58C
    UnityEngine::Sprite* get_bannerImage();
    // public System.Void .ctor()
    // Offset: 0x10FC594
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DlcPromoExperimentDataSO::MusicPackPromoInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DlcPromoExperimentDataSO::MusicPackPromoInfo*, creationType>()));
    }
  }; // DlcPromoExperimentDataSO/MusicPackPromoInfo
  #pragma pack(pop)
  static check_size<sizeof(DlcPromoExperimentDataSO::MusicPackPromoInfo), 24 + sizeof(UnityEngine::Sprite*)> __GlobalNamespace_DlcPromoExperimentDataSO_MusicPackPromoInfoSizeCheck;
  static_assert(sizeof(DlcPromoExperimentDataSO::MusicPackPromoInfo) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*, "", "DlcPromoExperimentDataSO/MusicPackPromoInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo::get_previewBeatmapLevelPack
// Il2CppName: get_previewBeatmapLevelPack
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::PreviewBeatmapLevelPackSO* (GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo::*)()>(&GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo::get_previewBeatmapLevelPack)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*), "get_previewBeatmapLevelPack", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo::get_bannerImage
// Il2CppName: get_bannerImage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo::*)()>(&GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo::get_bannerImage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo*), "get_bannerImage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DlcPromoExperimentDataSO::MusicPackPromoInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
