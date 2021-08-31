// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: MasterServerQuickPlaySetupData
#include "GlobalNamespace/MasterServerQuickPlaySetupData.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride
  // [TokenAttribute] Offset: FFFFFFFF
  class MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName
    class LocalizedCustomPackName;
    // Nested type: GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack
    class LocalizedCustomPack;
    // Nested type: GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack
    class PredefinedPack;
    // public System.Collections.Generic.List`1<MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack> predefinedPackIds
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*>* predefinedPackIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*>*) == 0x8);
    // public System.Collections.Generic.List`1<MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack> localizedCustomPacks
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*>* localizedCustomPacks;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*>*) == 0x8);
    // Creating value type constructor for type: QuickPlaySongPacksOverride
    QuickPlaySongPacksOverride(System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*>* predefinedPackIds_ = {}, System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*>* localizedCustomPacks_ = {}) noexcept : predefinedPackIds{predefinedPackIds_}, localizedCustomPacks{localizedCustomPacks_} {}
    // Get instance field: public System.Collections.Generic.List`1<MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack> predefinedPackIds
    System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*>* _get_predefinedPackIds();
    // Set instance field: public System.Collections.Generic.List`1<MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/PredefinedPack> predefinedPackIds
    void _set_predefinedPackIds(System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::PredefinedPack*>* value);
    // Get instance field: public System.Collections.Generic.List`1<MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack> localizedCustomPacks
    System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*>* _get_localizedCustomPacks();
    // Set instance field: public System.Collections.Generic.List`1<MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack> localizedCustomPacks
    void _set_localizedCustomPacks(System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*>* value);
    // public System.Void .ctor()
    // Offset: 0x10E5184
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride*, creationType>()));
    }
  }; // MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride
  #pragma pack(pop)
  static check_size<sizeof(MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride), 24 + sizeof(System::Collections::Generic::List_1<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*>*)> __GlobalNamespace_MasterServerQuickPlaySetupData_QuickPlaySongPacksOverrideSizeCheck;
  static_assert(sizeof(MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride*, "", "MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
