// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
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
  // Autogenerated type: SongPackMasksModel
  class SongPackMasksModel : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SongPackMasksModel::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    // Nested type: GlobalNamespace::SongPackMasksModel::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // private readonly System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<SongPackMask,System.String>> _songPackMaskData
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>*>* songPackMaskData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>*>*) == 0x8);
    // Creating value type constructor for type: SongPackMasksModel
    SongPackMasksModel(System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>*>* songPackMaskData_ = {}) noexcept : songPackMaskData{songPackMaskData_} {}
    // Creating conversion operator: operator System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>*>*
    constexpr operator System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>*>*() const noexcept {
      return songPackMaskData;
    }
    // public System.Collections.Generic.IReadOnlyList`1<System.Tuple`2<SongPackMask,System.String>> get_songPackMaskData()
    // Offset: 0x1156408
    System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>*>* get_songPackMaskData();
    // public System.Void .ctor(SongPackMaskModelSO songPackMasks)
    // Offset: 0x1156410
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPackMasksModel* New_ctor(GlobalNamespace::SongPackMaskModelSO* songPackMasks) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SongPackMasksModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPackMasksModel*, creationType>(songPackMasks)));
    }
    // public SongPackMask GetAllSongsMask()
    // Offset: 0x1156504
    GlobalNamespace::SongPackMask GetAllSongsMask();
    // public System.String GetSongPackMaskText(SongPackMask songPackMask)
    // Offset: 0x11565C8
    ::Il2CppString* GetSongPackMaskText(GlobalNamespace::SongPackMask songPackMask);
  }; // SongPackMasksModel
  #pragma pack(pop)
  static check_size<sizeof(SongPackMasksModel), 16 + sizeof(System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>*>*)> __GlobalNamespace_SongPackMasksModelSizeCheck;
  static_assert(sizeof(SongPackMasksModel) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPackMasksModel*, "", "SongPackMasksModel");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongPackMasksModel::get_songPackMaskData
// Il2CppName: get_songPackMaskData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IReadOnlyList_1<System::Tuple_2<GlobalNamespace::SongPackMask, ::Il2CppString*>*>* (GlobalNamespace::SongPackMasksModel::*)()>(&GlobalNamespace::SongPackMasksModel::get_songPackMaskData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMasksModel*), "get_songPackMaskData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMasksModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SongPackMasksModel::GetAllSongsMask
// Il2CppName: GetAllSongsMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::SongPackMask (GlobalNamespace::SongPackMasksModel::*)()>(&GlobalNamespace::SongPackMasksModel::GetAllSongsMask)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMasksModel*), "GetAllSongsMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPackMasksModel::GetSongPackMaskText
// Il2CppName: GetSongPackMaskText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::SongPackMasksModel::*)(GlobalNamespace::SongPackMask)>(&GlobalNamespace::SongPackMasksModel::GetSongPackMaskText)> {
  const MethodInfo* get() {
    static auto* songPackMask = &::il2cpp_utils::GetClassFromName("", "SongPackMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPackMasksModel*), "GetSongPackMaskText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{songPackMask});
  }
};
