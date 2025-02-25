// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: QuickPlaySongPacksDropdown
#include "GlobalNamespace/QuickPlaySongPacksDropdown.hpp"
// Including type: MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride
#include "GlobalNamespace/MasterServerQuickPlaySetupData_QuickPlaySongPacksOverride.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: QuickPlaySongPacksDropdown/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class QuickPlaySongPacksDropdown::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly QuickPlaySongPacksDropdown/<>c <>9
    static GlobalNamespace::QuickPlaySongPacksDropdown::$$c* _get_$$9();
    // Set static field: static public readonly QuickPlaySongPacksDropdown/<>c <>9
    static void _set_$$9(GlobalNamespace::QuickPlaySongPacksDropdown::$$c* value);
    // Get static field: static public System.Func`2<MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName,System.Boolean> <>9__15_4
    static System::Func_2<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*, bool>* _get_$$9__15_4();
    // Set static field: static public System.Func`2<MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName,System.Boolean> <>9__15_4
    static void _set_$$9__15_4(System::Func_2<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*, bool>* value);
    // Get static field: static public System.Func`2<MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack,QuickPlaySongPacksDropdown/SongPackMaskItem> <>9__15_2
    static System::Func_2<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*, GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*>* _get_$$9__15_2();
    // Set static field: static public System.Func`2<MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack,QuickPlaySongPacksDropdown/SongPackMaskItem> <>9__15_2
    static void _set_$$9__15_2(System::Func_2<GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*, GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*>* value);
    // Get static field: static public System.Func`2<QuickPlaySongPacksDropdown/SongPackMaskItem,System.String> <>9__15_3
    static System::Func_2<GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*, ::Il2CppString*>* _get_$$9__15_3();
    // Set static field: static public System.Func`2<QuickPlaySongPacksDropdown/SongPackMaskItem,System.String> <>9__15_3
    static void _set_$$9__15_3(System::Func_2<GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1126794
    static void _cctor();
    // QuickPlaySongPacksDropdown/SongPackMaskItem <LazyInit>b__15_2(MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack localizedPack)
    // Offset: 0x1126800
    GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem* $LazyInit$b__15_2(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack* localizedPack);
    // System.Boolean <LazyInit>b__15_4(MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName packName)
    // Offset: 0x1126984
    bool $LazyInit$b__15_4(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName* packName);
    // System.String <LazyInit>b__15_3(QuickPlaySongPacksDropdown/SongPackMaskItem item)
    // Offset: 0x11269CC
    ::Il2CppString* $LazyInit$b__15_3(GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem* item);
    // public System.Void .ctor()
    // Offset: 0x11267F8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static QuickPlaySongPacksDropdown::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::QuickPlaySongPacksDropdown::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<QuickPlaySongPacksDropdown::$$c*, creationType>()));
    }
  }; // QuickPlaySongPacksDropdown/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuickPlaySongPacksDropdown::$$c*, "", "QuickPlaySongPacksDropdown/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::QuickPlaySongPacksDropdown::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::$$c::$LazyInit$b__15_2
// Il2CppName: <LazyInit>b__15_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem* (GlobalNamespace::QuickPlaySongPacksDropdown::$$c::*)(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPack*)>(&GlobalNamespace::QuickPlaySongPacksDropdown::$$c::$LazyInit$b__15_2)> {
  static const MethodInfo* get() {
    static auto* localizedPack = &::il2cpp_utils::GetClassFromName("", "MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown::$$c*), "<LazyInit>b__15_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localizedPack});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::$$c::$LazyInit$b__15_4
// Il2CppName: <LazyInit>b__15_4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::QuickPlaySongPacksDropdown::$$c::*)(GlobalNamespace::MasterServerQuickPlaySetupData::QuickPlaySongPacksOverride::LocalizedCustomPackName*)>(&GlobalNamespace::QuickPlaySongPacksDropdown::$$c::$LazyInit$b__15_4)> {
  static const MethodInfo* get() {
    static auto* packName = &::il2cpp_utils::GetClassFromName("", "MasterServerQuickPlaySetupData/QuickPlaySongPacksOverride/LocalizedCustomPackName")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown::$$c*), "<LazyInit>b__15_4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{packName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::$$c::$LazyInit$b__15_3
// Il2CppName: <LazyInit>b__15_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::QuickPlaySongPacksDropdown::$$c::*)(GlobalNamespace::QuickPlaySongPacksDropdown::SongPackMaskItem*)>(&GlobalNamespace::QuickPlaySongPacksDropdown::$$c::$LazyInit$b__15_3)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("", "QuickPlaySongPacksDropdown/SongPackMaskItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::QuickPlaySongPacksDropdown::$$c*), "<LazyInit>b__15_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::QuickPlaySongPacksDropdown::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
