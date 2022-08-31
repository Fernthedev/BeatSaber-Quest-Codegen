// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BeatmapDataNoArrowsTransform
#include "GlobalNamespace/BeatmapDataNoArrowsTransform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapDataItem
  class BeatmapDataItem;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BeatmapDataNoArrowsTransform::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDataNoArrowsTransform::$$c*, "", "BeatmapDataNoArrowsTransform/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataNoArrowsTransform/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeatmapDataNoArrowsTransform::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly BeatmapDataNoArrowsTransform/<>c <>9
    static ::GlobalNamespace::BeatmapDataNoArrowsTransform::$$c* _get_$$9();
    // Set static field: static public readonly BeatmapDataNoArrowsTransform/<>c <>9
    static void _set_$$9(::GlobalNamespace::BeatmapDataNoArrowsTransform::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x138DCBC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x138DD20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataNoArrowsTransform::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BeatmapDataNoArrowsTransform::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataNoArrowsTransform::$$c*, creationType>()));
    }
    // BeatmapDataItem <CreateTransformedData>g__ProcessData|0_0(BeatmapDataItem beatmapDataItem)
    // Offset: 0x138DD28
    ::GlobalNamespace::BeatmapDataItem* $CreateTransformedData$g__ProcessData_0_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem);
  }; // BeatmapDataNoArrowsTransform/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataNoArrowsTransform::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BeatmapDataNoArrowsTransform::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataNoArrowsTransform::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataNoArrowsTransform::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BeatmapDataNoArrowsTransform::$$c::$CreateTransformedData$g__ProcessData_0_0
// Il2CppName: <CreateTransformedData>g__ProcessData|0_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDataItem* (GlobalNamespace::BeatmapDataNoArrowsTransform::$$c::*)(::GlobalNamespace::BeatmapDataItem*)>(&GlobalNamespace::BeatmapDataNoArrowsTransform::$$c::$CreateTransformedData$g__ProcessData_0_0)> {
  static const MethodInfo* get() {
    static auto* beatmapDataItem = &::il2cpp_utils::GetClassFromName("", "BeatmapDataItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BeatmapDataNoArrowsTransform::$$c*), "<CreateTransformedData>g__ProcessData|0_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{beatmapDataItem});
  }
};
