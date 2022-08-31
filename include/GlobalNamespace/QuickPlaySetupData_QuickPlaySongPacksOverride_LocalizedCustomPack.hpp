// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickPlaySetupData/QuickPlaySongPacksOverride
#include "GlobalNamespace/QuickPlaySetupData_QuickPlaySongPacksOverride.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*, "", "QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack
  // [TokenAttribute] Offset: FFFFFFFF
  class QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack : public ::Il2CppObject {
    public:
    public:
    // public System.String serializedName
    // Size: 0x8
    // Offset: 0x10
    ::StringW serializedName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 order
    // Size: 0x4
    // Offset: 0x18
    int order;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: order and: localizedNames
    char __padding1[0x4] = {};
    // public QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName[] localizedNames
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*> localizedNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*>) == 0x8);
    // public System.Collections.Generic.List`1<System.String> packIds
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::StringW>* packIds;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: public System.String serializedName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_serializedName();
    // Get instance field reference: public System.Int32 order
    [[deprecated("Use field access instead!")]] int& dyn_order();
    // Get instance field reference: public QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName[] localizedNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*>& dyn_localizedNames();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> packIds
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_packIds();
    // public System.Void .ctor()
    // Offset: 0x1409CB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*, creationType>()));
    }
  }; // QuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack
  #pragma pack(pop)
  static check_size<sizeof(QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack), 40 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __GlobalNamespace_QuickPlaySetupData_QuickPlaySongPacksOverride_LocalizedCustomPackSizeCheck;
  static_assert(sizeof(QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
