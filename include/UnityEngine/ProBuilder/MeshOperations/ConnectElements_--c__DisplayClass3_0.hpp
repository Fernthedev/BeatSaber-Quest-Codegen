// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.ConnectElements
#include "UnityEngine/ProBuilder/MeshOperations/ConnectElements.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Edge
  struct Edge;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.ConnectElements/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass3_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConnectElements::$$c__DisplayClass3_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.HashSet`1<System.Int32> appended
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::HashSet_1<int>* appended;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<int>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass3_0
    $$c__DisplayClass3_0(System::Collections::Generic::HashSet_1<int>* appended_ = {}) noexcept : appended{appended_} {}
    // Creating conversion operator: operator System::Collections::Generic::HashSet_1<int>*
    constexpr operator System::Collections::Generic::HashSet_1<int>*() const noexcept {
      return appended;
    }
    // Get instance field reference: public System.Collections.Generic.HashSet`1<System.Int32> appended
    System::Collections::Generic::HashSet_1<int>*& dyn_appended();
    // System.Boolean <Connect>b__3(UnityEngine.ProBuilder.Edge x)
    // Offset: 0x1553084
    bool $Connect$b__3(UnityEngine::ProBuilder::Edge x);
    // public System.Void .ctor()
    // Offset: 0x1552C4C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConnectElements::$$c__DisplayClass3_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass3_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConnectElements::$$c__DisplayClass3_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.ConnectElements/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass3_0
  #pragma pack(pop)
  static check_size<sizeof(ConnectElements::$$c__DisplayClass3_0), 16 + sizeof(System::Collections::Generic::HashSet_1<int>*)> __UnityEngine_ProBuilder_MeshOperations_ConnectElements_$$c__DisplayClass3_0SizeCheck;
  static_assert(sizeof(ConnectElements::$$c__DisplayClass3_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass3_0*, "UnityEngine.ProBuilder.MeshOperations", "ConnectElements/<>c__DisplayClass3_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass3_0::$Connect$b__3
// Il2CppName: <Connect>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass3_0::*)(UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass3_0::$Connect$b__3)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass3_0*), "<Connect>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::ConnectElements::$$c__DisplayClass3_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
