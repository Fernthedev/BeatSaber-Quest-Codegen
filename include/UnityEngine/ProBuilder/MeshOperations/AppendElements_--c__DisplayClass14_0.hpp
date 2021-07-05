// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.AppendElements
#include "UnityEngine/ProBuilder/MeshOperations/AppendElements.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Edge
  struct Edge;
  // Forward declaring type: EdgeLookup
  struct EdgeLookup;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c__DisplayClass14_0
  // [CompilerGeneratedAttribute] Offset: E3A3DC
  class AppendElements::$$c__DisplayClass14_0 : public ::Il2CppObject {
    public:
    // public System.Int32 delCount
    // Size: 0x4
    // Offset: 0x10
    int delCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: $$c__DisplayClass14_0
    $$c__DisplayClass14_0(int delCount_ = {}) noexcept : delCount{delCount_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return delCount;
    }
    // UnityEngine.ProBuilder.Edge <AppendVerticesToEdge>b__0(UnityEngine.ProBuilder.EdgeLookup x)
    // Offset: 0x15427A8
    UnityEngine::ProBuilder::Edge $AppendVerticesToEdge$b__0(UnityEngine::ProBuilder::EdgeLookup x);
    // public System.Void .ctor()
    // Offset: 0x15427A0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppendElements::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppendElements::$$c__DisplayClass14_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.AppendElements/<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(AppendElements::$$c__DisplayClass14_0), 16 + sizeof(int)> __UnityEngine_ProBuilder_MeshOperations_AppendElements_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(AppendElements::$$c__DisplayClass14_0) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0*, "UnityEngine.ProBuilder.MeshOperations", "AppendElements/<>c__DisplayClass14_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0::$AppendVerticesToEdge$b__0
// Il2CppName: <AppendVerticesToEdge>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::ProBuilder::Edge (UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0::*)(UnityEngine::ProBuilder::EdgeLookup)>(&UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0::$AppendVerticesToEdge$b__0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "EdgeLookup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0*), "<AppendVerticesToEdge>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::AppendElements::$$c__DisplayClass14_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
