// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CustomTweenBehaviour
#include "GlobalNamespace/CustomTweenBehaviour.hpp"
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
  // Autogenerated type: CustomTweenBehaviour/<>c
  // [CompilerGeneratedAttribute] Offset: E129D8
  class CustomTweenBehaviour::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly CustomTweenBehaviour/<>c <>9
    static GlobalNamespace::CustomTweenBehaviour::$$c* _get_$$9();
    // Set static field: static public readonly CustomTweenBehaviour/<>c <>9
    static void _set_$$9(GlobalNamespace::CustomTweenBehaviour::$$c* value);
    // Get static field: static public System.Func`2<System.Int32,System.Single> <>9__21_0
    static System::Func_2<int, float>* _get_$$9__21_0();
    // Set static field: static public System.Func`2<System.Int32,System.Single> <>9__21_0
    static void _set_$$9__21_0(System::Func_2<int, float>* value);
    // static private System.Void .cctor()
    // Offset: 0x119AB0C
    static void _cctor();
    // System.Single <OnBehaviourPlay>b__21_0(System.Int32 i)
    // Offset: 0x119AB78
    float $OnBehaviourPlay$b__21_0(int i);
    // public System.Void .ctor()
    // Offset: 0x119AB70
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomTweenBehaviour::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CustomTweenBehaviour::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomTweenBehaviour::$$c*, creationType>()));
    }
  }; // CustomTweenBehaviour/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CustomTweenBehaviour::$$c*, "", "CustomTweenBehaviour/<>c");
// Writing includes for template specializations
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::CustomTweenBehaviour::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTweenBehaviour::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::$$c::$OnBehaviourPlay$b__21_0
// Il2CppName: <OnBehaviourPlay>b__21_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::CustomTweenBehaviour::$$c::*)(int)>(&GlobalNamespace::CustomTweenBehaviour::$$c::$OnBehaviourPlay$b__21_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomTweenBehaviour::$$c*), "<OnBehaviourPlay>b__21_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<int>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomTweenBehaviour::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
