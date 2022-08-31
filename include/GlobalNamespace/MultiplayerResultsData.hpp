// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerPlayerResultsData
  class MultiplayerPlayerResultsData;
  // Forward declaring type: MultiplayerLevelCompletionResults
  class MultiplayerLevelCompletionResults;
  // Forward declaring type: MultiplayerBadgesProvider
  class MultiplayerBadgesProvider;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerResultsData
  class MultiplayerResultsData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsData*, "", "MultiplayerResultsData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerResultsData
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerResultsData : public ::Il2CppObject {
    public:
    public:
    // private readonly System.String _gameId
    // Size: 0x8
    // Offset: 0x10
    ::StringW gameId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly MultiplayerPlayerResultsData _localPlayerResultData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MultiplayerPlayerResultsData* localPlayerResultData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerPlayerResultsData*) == 0x8);
    // private readonly System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> _otherPlayersData
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* otherPlayersData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*) == 0x8);
    // private readonly System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> _allPlayersSortedData
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* allPlayersSortedData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*) == 0x8);
    public:
    // Get instance field reference: private readonly System.String _gameId
    [[deprecated("Use field access instead!")]] ::StringW& dyn__gameId();
    // Get instance field reference: private readonly MultiplayerPlayerResultsData _localPlayerResultData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MultiplayerPlayerResultsData*& dyn__localPlayerResultData();
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> _otherPlayersData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& dyn__otherPlayersData();
    // Get instance field reference: private readonly System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> _allPlayersSortedData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*& dyn__allPlayersSortedData();
    // public System.String get_gameId()
    // Offset: 0x13B27B8
    ::StringW get_gameId();
    // public MultiplayerPlayerResultsData get_localPlayerResultData()
    // Offset: 0x13B27C0
    ::GlobalNamespace::MultiplayerPlayerResultsData* get_localPlayerResultData();
    // public System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> get_otherPlayersData()
    // Offset: 0x13B27C8
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* get_otherPlayersData();
    // public System.Collections.Generic.IReadOnlyList`1<MultiplayerPlayerResultsData> get_allPlayersSortedData()
    // Offset: 0x13B27D0
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* get_allPlayersSortedData();
    // public System.Void .ctor(System.String gameId, MultiplayerLevelCompletionResults localPlayerResultData, System.Collections.Generic.Dictionary`2<System.String,MultiplayerLevelCompletionResults> otherPlayersResultData, MultiplayerBadgesProvider badgesProvider, IMultiplayerSessionManager multiplayerSessionManager)
    // Offset: 0x13B27D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerResultsData* New_ctor(::StringW gameId, ::GlobalNamespace::MultiplayerLevelCompletionResults* localPlayerResultData, ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::MultiplayerLevelCompletionResults*>* otherPlayersResultData, ::GlobalNamespace::MultiplayerBadgesProvider* badgesProvider, ::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerResultsData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerResultsData*, creationType>(gameId, localPlayerResultData, otherPlayersResultData, badgesProvider, multiplayerSessionManager)));
    }
  }; // MultiplayerResultsData
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerResultsData), 40 + sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*)> __GlobalNamespace_MultiplayerResultsDataSizeCheck;
  static_assert(sizeof(MultiplayerResultsData) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsData::get_gameId
// Il2CppName: get_gameId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::MultiplayerResultsData::*)()>(&GlobalNamespace::MultiplayerResultsData::get_gameId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsData*), "get_gameId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsData::get_localPlayerResultData
// Il2CppName: get_localPlayerResultData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerPlayerResultsData* (GlobalNamespace::MultiplayerResultsData::*)()>(&GlobalNamespace::MultiplayerResultsData::get_localPlayerResultData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsData*), "get_localPlayerResultData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsData::get_otherPlayersData
// Il2CppName: get_otherPlayersData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* (GlobalNamespace::MultiplayerResultsData::*)()>(&GlobalNamespace::MultiplayerResultsData::get_otherPlayersData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsData*), "get_otherPlayersData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsData::get_allPlayersSortedData
// Il2CppName: get_allPlayersSortedData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* (GlobalNamespace::MultiplayerResultsData::*)()>(&GlobalNamespace::MultiplayerResultsData::get_allPlayersSortedData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerResultsData*), "get_allPlayersSortedData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerResultsData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
