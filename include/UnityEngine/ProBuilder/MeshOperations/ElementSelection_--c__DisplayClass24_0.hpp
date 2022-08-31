// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.ElementSelection
#include "UnityEngine/ProBuilder/MeshOperations/ElementSelection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: WingedEdge
  class WingedEdge;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass24_0*, "UnityEngine.ProBuilder.MeshOperations", "ElementSelection/<>c__DisplayClass24_0");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ElementSelection/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass24_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ElementSelection::$$c__DisplayClass24_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.ProBuilder.Face face
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ProBuilder::Face* face;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::Face*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::ProBuilder::Face*
    constexpr operator ::UnityEngine::ProBuilder::Face*() const noexcept {
      return face;
    }
    // Get instance field reference: public UnityEngine.ProBuilder.Face face
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::Face*& dyn_face();
    // public System.Void .ctor()
    // Offset: 0x1A37940
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ElementSelection::$$c__DisplayClass24_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass24_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ElementSelection::$$c__DisplayClass24_0*, creationType>()));
    }
    // System.Boolean <GetFaceLoop>b__0(UnityEngine.ProBuilder.WingedEdge x)
    // Offset: 0x1A38638
    bool $GetFaceLoop$b__0(::UnityEngine::ProBuilder::WingedEdge* x);
  }; // UnityEngine.ProBuilder.MeshOperations.ElementSelection/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass24_0
  #pragma pack(pop)
  static check_size<sizeof(ElementSelection::$$c__DisplayClass24_0), 16 + sizeof(::UnityEngine::ProBuilder::Face*)> __UnityEngine_ProBuilder_MeshOperations_ElementSelection_$$c__DisplayClass24_0SizeCheck;
  static_assert(sizeof(ElementSelection::$$c__DisplayClass24_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass24_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass24_0::$GetFaceLoop$b__0
// Il2CppName: <GetFaceLoop>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass24_0::*)(::UnityEngine::ProBuilder::WingedEdge*)>(&UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass24_0::$GetFaceLoop$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "WingedEdge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ElementSelection::$$c__DisplayClass24_0*), "<GetFaceLoop>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
