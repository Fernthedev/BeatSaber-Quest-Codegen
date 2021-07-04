// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SceneContext
#include "Zenject/SceneContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SceneContext/<>c__DisplayClass49_0
  // [CompilerGeneratedAttribute] Offset: DDE3BC
  class SceneContext::$$c__DisplayClass49_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.IEnumerable`1<System.String> parentContractNames
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::IEnumerable_1<::Il2CppString*>* parentContractNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IEnumerable_1<::Il2CppString*>*) == 0x8);
    // public System.Func`2<System.String,System.Boolean> <>9__4
    // Size: 0x8
    // Offset: 0x18
    System::Func_2<::Il2CppString*, bool>* $$9__4;
    // Field size check
    static_assert(sizeof(System::Func_2<::Il2CppString*, bool>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass49_0
    $$c__DisplayClass49_0(System::Collections::Generic::IEnumerable_1<::Il2CppString*>* parentContractNames_ = {}, System::Func_2<::Il2CppString*, bool>* $$9__4_ = {}) noexcept : parentContractNames{parentContractNames_}, $$9__4{$$9__4_} {}
    // System.Boolean <GetParentContainers>b__2(Zenject.SceneContext sceneContext)
    // Offset: 0x16E598C
    bool $GetParentContainers$b__2(Zenject::SceneContext* sceneContext);
    // System.Boolean <GetParentContainers>b__4(System.String x)
    // Offset: 0x16E5A48
    bool $GetParentContainers$b__4(::Il2CppString* x);
    // public System.Void .ctor()
    // Offset: 0x16E4B14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneContext::$$c__DisplayClass49_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SceneContext::$$c__DisplayClass49_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneContext::$$c__DisplayClass49_0*, creationType>()));
    }
  }; // Zenject.SceneContext/<>c__DisplayClass49_0
  #pragma pack(pop)
  static check_size<sizeof(SceneContext::$$c__DisplayClass49_0), 24 + sizeof(System::Func_2<::Il2CppString*, bool>*)> __Zenject_SceneContext_$$c__DisplayClass49_0SizeCheck;
  static_assert(sizeof(SceneContext::$$c__DisplayClass49_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContext::$$c__DisplayClass49_0*, "Zenject", "SceneContext/<>c__DisplayClass49_0");
// Writing includes for template specializations
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass49_0::$GetParentContainers$b__2
// Il2CppName: <GetParentContainers>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SceneContext::$$c__DisplayClass49_0::*)(Zenject::SceneContext*)>(&Zenject::SceneContext::$$c__DisplayClass49_0::$GetParentContainers$b__2)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c__DisplayClass49_0*), "<GetParentContainers>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<Zenject::SceneContext*>()});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass49_0::$GetParentContainers$b__4
// Il2CppName: <GetParentContainers>b__4
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::SceneContext::$$c__DisplayClass49_0::*)(::Il2CppString*)>(&Zenject::SceneContext::$$c__DisplayClass49_0::$GetParentContainers$b__4)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SceneContext::$$c__DisplayClass49_0*), "<GetParentContainers>b__4", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
// Writing MetadataGetter for method: Zenject::SceneContext::$$c__DisplayClass49_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
