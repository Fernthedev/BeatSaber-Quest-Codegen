// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IComparable
#include "System/IComparable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: MultiplayerBadgeDataSO
  class MultiplayerBadgeDataSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerBadgeAwardData
  class MultiplayerBadgeAwardData : public ::Il2CppObject/*, public System::IComparable*/ {
    public:
    // private readonly IConnectedPlayer _awardedPlayer
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IConnectedPlayer* awardedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // private readonly System.Single _weight
    // Size: 0x4
    // Offset: 0x18
    float weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: weight and: title
    char __padding1[0x4] = {};
    // private readonly System.String _title
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* title;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly System.String _subtitle
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* subtitle;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private readonly UnityEngine.Sprite _icon
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Sprite* icon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private readonly MultiplayerBadgeDataSO _badgeData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::MultiplayerBadgeDataSO* badgeData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerBadgeDataSO*) == 0x8);
    // Creating value type constructor for type: MultiplayerBadgeAwardData
    MultiplayerBadgeAwardData(GlobalNamespace::IConnectedPlayer* awardedPlayer_ = {}, float weight_ = {}, ::Il2CppString* title_ = {}, ::Il2CppString* subtitle_ = {}, UnityEngine::Sprite* icon_ = {}, GlobalNamespace::MultiplayerBadgeDataSO* badgeData_ = {}) noexcept : awardedPlayer{awardedPlayer_}, weight{weight_}, title{title_}, subtitle{subtitle_}, icon{icon_}, badgeData{badgeData_} {}
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // public IConnectedPlayer get_awardedPlayer()
    // Offset: 0x1145CD4
    GlobalNamespace::IConnectedPlayer* get_awardedPlayer();
    // public System.String get_titleLocalizationKey()
    // Offset: 0x1145CDC
    ::Il2CppString* get_titleLocalizationKey();
    // public System.String get_title()
    // Offset: 0x1145CF8
    ::Il2CppString* get_title();
    // public System.String get_subtitle()
    // Offset: 0x1145D00
    ::Il2CppString* get_subtitle();
    // public UnityEngine.Sprite get_icon()
    // Offset: 0x1145D08
    UnityEngine::Sprite* get_icon();
    // public System.Void .ctor(IConnectedPlayer awardedPlayer, System.Single weight, System.String title, System.String subtitle, MultiplayerBadgeDataSO badgeData)
    // Offset: 0x1145D10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerBadgeAwardData* New_ctor(GlobalNamespace::IConnectedPlayer* awardedPlayer, float weight, ::Il2CppString* title, ::Il2CppString* subtitle, GlobalNamespace::MultiplayerBadgeDataSO* badgeData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerBadgeAwardData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerBadgeAwardData*, creationType>(awardedPlayer, weight, title, subtitle, badgeData)));
    }
    // public System.Int32 CompareTo(System.Object obj)
    // Offset: 0x1145D7C
    int CompareTo(::Il2CppObject* obj);
  }; // MultiplayerBadgeAwardData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerBadgeAwardData), 56 + sizeof(GlobalNamespace::MultiplayerBadgeDataSO*)> __GlobalNamespace_MultiplayerBadgeAwardDataSizeCheck;
  static_assert(sizeof(MultiplayerBadgeAwardData) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBadgeAwardData*, "", "MultiplayerBadgeAwardData");
// Writing includes for template specializations
#include "GlobalNamespace/IConnectedPlayer.hpp"
#include "GlobalNamespace/MultiplayerBadgeDataSO.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeAwardData::get_awardedPlayer
// Il2CppName: get_awardedPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::IConnectedPlayer* (GlobalNamespace::MultiplayerBadgeAwardData::*)()>(&GlobalNamespace::MultiplayerBadgeAwardData::get_awardedPlayer)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeAwardData*), "get_awardedPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeAwardData::get_titleLocalizationKey
// Il2CppName: get_titleLocalizationKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MultiplayerBadgeAwardData::*)()>(&GlobalNamespace::MultiplayerBadgeAwardData::get_titleLocalizationKey)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeAwardData*), "get_titleLocalizationKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeAwardData::get_title
// Il2CppName: get_title
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MultiplayerBadgeAwardData::*)()>(&GlobalNamespace::MultiplayerBadgeAwardData::get_title)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeAwardData*), "get_title", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeAwardData::get_subtitle
// Il2CppName: get_subtitle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::MultiplayerBadgeAwardData::*)()>(&GlobalNamespace::MultiplayerBadgeAwardData::get_subtitle)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeAwardData*), "get_subtitle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeAwardData::get_icon
// Il2CppName: get_icon
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Sprite* (GlobalNamespace::MultiplayerBadgeAwardData::*)()>(&GlobalNamespace::MultiplayerBadgeAwardData::get_icon)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeAwardData*), "get_icon", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeAwardData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerBadgeAwardData::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MultiplayerBadgeAwardData::*)(::Il2CppObject*)>(&GlobalNamespace::MultiplayerBadgeAwardData::CompareTo)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerBadgeAwardData*), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppObject*>()});
  }
};
