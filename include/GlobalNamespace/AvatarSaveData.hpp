// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xD0
  #pragma pack(push, 1)
  // Autogenerated type: AvatarSaveData
  class AvatarSaveData : public ::Il2CppObject {
    public:
    // public System.String headTopId
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* headTopId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String glassesId
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* glassesId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String facialHairId
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* facialHairId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String handsId
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* handsId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String clothesId
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* clothesId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String skinColorId
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* skinColorId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String mouthId
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* mouthId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String eyesId
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* eyesId;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public UnityEngine.Color headTopPrimaryColor
    // Size: 0x10
    // Offset: 0x50
    UnityEngine::Color headTopPrimaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color headTopSecondaryColor
    // Size: 0x10
    // Offset: 0x60
    UnityEngine::Color headTopSecondaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color glassesColor
    // Size: 0x10
    // Offset: 0x70
    UnityEngine::Color glassesColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color facialHairColor
    // Size: 0x10
    // Offset: 0x80
    UnityEngine::Color facialHairColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color handsColor
    // Size: 0x10
    // Offset: 0x90
    UnityEngine::Color handsColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color clothesPrimaryColor
    // Size: 0x10
    // Offset: 0xA0
    UnityEngine::Color clothesPrimaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color clothesSecondaryColor
    // Size: 0x10
    // Offset: 0xB0
    UnityEngine::Color clothesSecondaryColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // public UnityEngine.Color clothesDetailColor
    // Size: 0x10
    // Offset: 0xC0
    UnityEngine::Color clothesDetailColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: AvatarSaveData
    AvatarSaveData(::Il2CppString* headTopId_ = {}, ::Il2CppString* glassesId_ = {}, ::Il2CppString* facialHairId_ = {}, ::Il2CppString* handsId_ = {}, ::Il2CppString* clothesId_ = {}, ::Il2CppString* skinColorId_ = {}, ::Il2CppString* mouthId_ = {}, ::Il2CppString* eyesId_ = {}, UnityEngine::Color headTopPrimaryColor_ = {}, UnityEngine::Color headTopSecondaryColor_ = {}, UnityEngine::Color glassesColor_ = {}, UnityEngine::Color facialHairColor_ = {}, UnityEngine::Color handsColor_ = {}, UnityEngine::Color clothesPrimaryColor_ = {}, UnityEngine::Color clothesSecondaryColor_ = {}, UnityEngine::Color clothesDetailColor_ = {}) noexcept : headTopId{headTopId_}, glassesId{glassesId_}, facialHairId{facialHairId_}, handsId{handsId_}, clothesId{clothesId_}, skinColorId{skinColorId_}, mouthId{mouthId_}, eyesId{eyesId_}, headTopPrimaryColor{headTopPrimaryColor_}, headTopSecondaryColor{headTopSecondaryColor_}, glassesColor{glassesColor_}, facialHairColor{facialHairColor_}, handsColor{handsColor_}, clothesPrimaryColor{clothesPrimaryColor_}, clothesSecondaryColor{clothesSecondaryColor_}, clothesDetailColor{clothesDetailColor_} {}
    // public System.Void .ctor()
    // Offset: 0x11343D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AvatarSaveData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AvatarSaveData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AvatarSaveData*, creationType>()));
    }
  }; // AvatarSaveData
  #pragma pack(pop)
  static check_size<sizeof(AvatarSaveData), 192 + sizeof(UnityEngine::Color)> __GlobalNamespace_AvatarSaveDataSizeCheck;
  static_assert(sizeof(AvatarSaveData) == 0xD0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarSaveData*, "", "AvatarSaveData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AvatarSaveData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
