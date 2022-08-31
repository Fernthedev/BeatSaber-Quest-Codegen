// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: FaceRebuildData
  class FaceRebuildData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Forward declaring type: ConnectFaceRebuildData
  class ConnectFaceRebuildData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData*, "UnityEngine.ProBuilder.MeshOperations", "ConnectFaceRebuildData");
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData
  // [TokenAttribute] Offset: FFFFFFFF
  class ConnectFaceRebuildData : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.ProBuilder.FaceRebuildData faceRebuildData
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::ProBuilder::FaceRebuildData* faceRebuildData;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::FaceRebuildData*) == 0x8);
    // public System.Collections.Generic.List`1<System.Int32> newVertexIndexes
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<int>* newVertexIndexes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<int>*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.ProBuilder.FaceRebuildData faceRebuildData
    [[deprecated("Use field access instead!")]] ::UnityEngine::ProBuilder::FaceRebuildData*& dyn_faceRebuildData();
    // Get instance field reference: public System.Collections.Generic.List`1<System.Int32> newVertexIndexes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<int>*& dyn_newVertexIndexes();
    // public System.Void .ctor(UnityEngine.ProBuilder.FaceRebuildData faceRebuildData, System.Collections.Generic.List`1<System.Int32> newVertexIndexes)
    // Offset: 0x1A32680
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectFaceRebuildData* New_ctor(::UnityEngine::ProBuilder::FaceRebuildData* faceRebuildData, ::System::Collections::Generic::List_1<int>* newVertexIndexes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectFaceRebuildData*, creationType>(faceRebuildData, newVertexIndexes)));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.ConnectFaceRebuildData
  #pragma pack(pop)
  static check_size<sizeof(ConnectFaceRebuildData), 24 + sizeof(::System::Collections::Generic::List_1<int>*)> __UnityEngine_ProBuilder_MeshOperations_ConnectFaceRebuildDataSizeCheck;
  static_assert(sizeof(ConnectFaceRebuildData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectFaceRebuildData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
