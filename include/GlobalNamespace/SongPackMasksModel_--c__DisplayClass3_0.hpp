// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SongPackMasksModel
#include "GlobalNamespace/SongPackMasksModel.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SongPackMaskModelSO
  class SongPackMaskModelSO;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Tuple`2<T1, T2>
  template<typename T1, typename T2>
  class Tuple_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: SongPackMasksModel/<>c__DisplayClass3_0
  // [CompilerGeneratedAttribute] Offset: E11C58
  class SongPackMasksModel::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public SongPackMaskModelSO songPackMasks
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::SongPackMaskModelSO* songPackMasks;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMaskModelSO*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(GlobalNamespace::SongPackMaskModelSO* songPackMasks_ = {}) noexcept : songPackMasks{songPackMasks_} {}
    // Creating conversion operator: operator GlobalNamespace::SongPackMaskModelSO*
    constexpr operator GlobalNamespace::SongPackMaskModelSO*() const noexcept {
      return songPackMasks;
    }
    // System.Tuple`2<SongPackMask,System.String> <.ctor>b__0(System.String serializedName)
    // Offset: 0x11566C4
    System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>* $_ctor$b__0(::Il2CppString* serializedName);
    // public System.Void .ctor()
    // Offset: 0x11564FC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPackMasksModel::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPackMasksModel::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPackMasksModel::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // SongPackMasksModel/<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(SongPackMasksModel::$$c__DisplayClass3_0), 16 + sizeof(GlobalNamespace::SongPackMaskModelSO*)> __GlobalNamespace_SongPackMasksModel_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(SongPackMasksModel::$$c__DisplayClass3_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPackMasksModel::$$c__DisplayClass3_0*, "", "SongPackMasksModel/<>c__DisplayClass3_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongPackMasksModel::$$c__DisplayClass3_0::$_ctor$b__0
// Il2CppName: <.ctor>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>* (GlobalNamespace::SongPackMasksModel::$$c__DisplayClass3_0::*)(::Il2CppString*)>(&GlobalNamespace::SongPackMasksModel::$$c__DisplayClass3_0::$_ctor$b__0)> {
  const MethodInfo* get() {
    static auto* serializedName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMasksModel::$$c__DisplayClass3_0*), "<.ctor>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedName});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMasksModel::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
