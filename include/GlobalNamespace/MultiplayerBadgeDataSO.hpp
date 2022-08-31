// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerBadgeAwardData
  class MultiplayerBadgeAwardData;
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerBadgeDataSO
  class MultiplayerBadgeDataSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerBadgeDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerBadgeDataSO*, "", "MultiplayerBadgeDataSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgeDataSO
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerBadgeDataSO : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // [LocalizationKeyAttribute] Offset: 0x10EA698
    // private System.String _titleLocalizationKey
    // Size: 0x8
    // Offset: 0x18
    ::StringW titleLocalizationKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // [LocalizationKeyAttribute] Offset: 0x10EA6D0
    // private System.String _subtitleLocalizationKey
    // Size: 0x8
    // Offset: 0x20
    ::StringW subtitleLocalizationKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Sprite _icon
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Sprite* icon;
    // Field size check
    static_assert(sizeof(::UnityEngine::Sprite*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String _titleLocalizationKey
    [[deprecated("Use field access instead!")]] ::StringW& dyn__titleLocalizationKey();
    // Get instance field reference: private System.String _subtitleLocalizationKey
    [[deprecated("Use field access instead!")]] ::StringW& dyn__subtitleLocalizationKey();
    // Get instance field reference: private UnityEngine.Sprite _icon
    [[deprecated("Use field access instead!")]] ::UnityEngine::Sprite*& dyn__icon();
    // public UnityEngine.Sprite get_icon()
    // Offset: 0x13F1F60
    ::UnityEngine::Sprite* get_icon();
    // public System.String get_titleLocalizationKey()
    // Offset: 0x13F1F68
    ::StringW get_titleLocalizationKey();
    // public System.String get_subtitleLocalizationKey()
    // Offset: 0x13F1F70
    ::StringW get_subtitleLocalizationKey();
    // protected System.Void .ctor()
    // Offset: 0x13F0740
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgeDataSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerBadgeDataSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgeDataSO*, creationType>()));
    }
    // public MultiplayerBadgeAwardData CalculateBadgeData(System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> resultsData, PlayerDataModel playerDataModel, IDifficultyBeatmap difficultyBeatmap, System.Single randomMultiplier)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::MultiplayerBadgeAwardData* CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData, ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, float randomMultiplier);
  }; // MultiplayerBadgeDataSO
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerBadgeDataSO), 40 + sizeof(::UnityEngine::Sprite*)> __GlobalNamespace_MultiplayerBadgeDataSOSizeCheck;
  static_assert(sizeof(MultiplayerBadgeDataSO) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataSO::get_icon
// Il2CppName: get_icon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&GlobalNamespace::MultiplayerBadgeDataSO::get_icon)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataSO*), "get_icon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataSO::get_titleLocalizationKey
// Il2CppName: get_titleLocalizationKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&GlobalNamespace::MultiplayerBadgeDataSO::get_titleLocalizationKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataSO*), "get_titleLocalizationKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataSO::get_subtitleLocalizationKey
// Il2CppName: get_subtitleLocalizationKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&GlobalNamespace::MultiplayerBadgeDataSO::get_subtitleLocalizationKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataSO*), "get_subtitleLocalizationKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeDataSO::CalculateBadgeData
// Il2CppName: CalculateBadgeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (GlobalNamespace::MultiplayerBadgeDataSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::IDifficultyBeatmap*, float)>(&GlobalNamespace::MultiplayerBadgeDataSO::CalculateBadgeData)> {
  static const MethodInfo* get() {
    static auto* resultsData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MultiplayerPlayerResultsData")})->byval_arg;
    static auto* playerDataModel = &::il2cpp_utils::GetClassFromName("", "PlayerDataModel")->byval_arg;
    static auto* difficultyBeatmap = &::il2cpp_utils::GetClassFromName("", "IDifficultyBeatmap")->byval_arg;
    static auto* randomMultiplier = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeDataSO*), "CalculateBadgeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resultsData, playerDataModel, difficultyBeatmap, randomMultiplier});
  }
};
