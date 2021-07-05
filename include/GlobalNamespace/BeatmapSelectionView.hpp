// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LevelBar
  class LevelBar;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
  // Forward declaring type: BeatmapDifficulty
  struct BeatmapDifficulty;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapSelectionView
  class BeatmapSelectionView : public UnityEngine::MonoBehaviour {
    public:
    // private LevelBar _levelBar
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::LevelBar* levelBar;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelBar*) == 0x8);
    // private TMPro.TextMeshProUGUI _noLevelText
    // Size: 0x8
    // Offset: 0x20
    TMPro::TextMeshProUGUI* noLevelText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // Creating value type constructor for type: BeatmapSelectionView
    BeatmapSelectionView(GlobalNamespace::LevelBar* levelBar_ = {}, TMPro::TextMeshProUGUI* noLevelText_ = {}) noexcept : levelBar{levelBar_}, noLevelText{noLevelText_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void SetBeatmap(IPreviewBeatmapLevel beatmapLevel, BeatmapCharacteristicSO beatmapCharacteristic, BeatmapDifficulty beatmapDifficulty)
    // Offset: 0x110E03C
    void SetBeatmap(GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, GlobalNamespace::BeatmapDifficulty beatmapDifficulty);
    // public System.Void .ctor()
    // Offset: 0x110E0CC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapSelectionView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapSelectionView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapSelectionView*, creationType>()));
    }
  }; // BeatmapSelectionView
  #pragma pack(pop)
  static check_size<sizeof(BeatmapSelectionView), 32 + sizeof(TMPro::TextMeshProUGUI*)> __GlobalNamespace_BeatmapSelectionViewSizeCheck;
  static_assert(sizeof(BeatmapSelectionView) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapSelectionView*, "", "BeatmapSelectionView");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSelectionView::SetBeatmap
// Il2CppName: SetBeatmap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BeatmapSelectionView::*)(GlobalNamespace::IPreviewBeatmapLevel*, GlobalNamespace::BeatmapCharacteristicSO*, GlobalNamespace::BeatmapDifficulty)>(&GlobalNamespace::BeatmapSelectionView::SetBeatmap)> {
  const MethodInfo* get() {
    static auto* beatmapLevel = &::il2cpp_utils::GetClassFromName("", "IPreviewBeatmapLevel")->byval_arg;
    static auto* beatmapCharacteristic = &::il2cpp_utils::GetClassFromName("", "BeatmapCharacteristicSO")->byval_arg;
    static auto* beatmapDifficulty = &::il2cpp_utils::GetClassFromName("", "BeatmapDifficulty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapSelectionView*), "SetBeatmap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapLevel, beatmapCharacteristic, beatmapDifficulty});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapSelectionView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
