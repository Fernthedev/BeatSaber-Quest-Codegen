// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ScenesTransitionSetupDataSO
  class ScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseSceneSetupData
  class NetEaseSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // private ScenesTransitionSetupDataSO _nextScenesTransitionSetupData
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*) == 0x8);
    // Creating value type constructor for type: NetEaseSceneSetupData
    NetEaseSceneSetupData(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData_ = {}) noexcept : nextScenesTransitionSetupData{nextScenesTransitionSetupData_} {}
    // Creating conversion operator: operator GlobalNamespace::ScenesTransitionSetupDataSO*
    constexpr operator GlobalNamespace::ScenesTransitionSetupDataSO*() const noexcept {
      return nextScenesTransitionSetupData;
    }
    // public ScenesTransitionSetupDataSO get_nextScenesTransitionSetupData()
    // Offset: 0x1019160
    GlobalNamespace::ScenesTransitionSetupDataSO* get_nextScenesTransitionSetupData();
    // public System.Void .ctor(ScenesTransitionSetupDataSO nextScenesTransitionSetupData)
    // Offset: 0x1019168
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEaseSceneSetupData* New_ctor(GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NetEaseSceneSetupData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseSceneSetupData*, creationType>(nextScenesTransitionSetupData)));
    }
  }; // NetEaseSceneSetupData
  #pragma pack(pop)
  static check_size<sizeof(NetEaseSceneSetupData), 16 + sizeof(GlobalNamespace::ScenesTransitionSetupDataSO*)> __GlobalNamespace_NetEaseSceneSetupDataSizeCheck;
  static_assert(sizeof(NetEaseSceneSetupData) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseSceneSetupData*, "", "NetEaseSceneSetupData");
// Writing includes for template specializations
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseSceneSetupData::get_nextScenesTransitionSetupData
// Il2CppName: get_nextScenesTransitionSetupData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ScenesTransitionSetupDataSO* (GlobalNamespace::NetEaseSceneSetupData::*)()>(&GlobalNamespace::NetEaseSceneSetupData::get_nextScenesTransitionSetupData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseSceneSetupData*), "get_nextScenesTransitionSetupData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseSceneSetupData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
