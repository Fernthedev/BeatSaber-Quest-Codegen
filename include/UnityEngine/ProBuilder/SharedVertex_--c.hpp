// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.SharedVertex
#include "UnityEngine/ProBuilder/SharedVertex.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
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
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.SharedVertex/UnityEngine.ProBuilder.<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SharedVertex::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.ProBuilder.SharedVertex/UnityEngine.ProBuilder.<>c <>9
    static UnityEngine::ProBuilder::SharedVertex::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.SharedVertex/UnityEngine.ProBuilder.<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::SharedVertex::$$c* value);
    // Get static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Boolean> <>9__26_0
    static System::Func_2<System::Collections::Generic::KeyValuePair_2<int, int>, bool>* _get_$$9__26_0();
    // Set static field: static public System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>,System.Boolean> <>9__26_0
    static void _set_$$9__26_0(System::Func_2<System::Collections::Generic::KeyValuePair_2<int, int>, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x22C7DD8
    static void _cctor();
    // System.Boolean <SortedRemoveAndShift>b__26_0(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> x)
    // Offset: 0x22C7E44
    bool $SortedRemoveAndShift$b__26_0(System::Collections::Generic::KeyValuePair_2<int, int> x);
    // public System.Void .ctor()
    // Offset: 0x22C7E3C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SharedVertex::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::SharedVertex::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SharedVertex::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.SharedVertex/UnityEngine.ProBuilder.<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::SharedVertex::$$c*, "UnityEngine.ProBuilder", "SharedVertex/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::SharedVertex::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::$$c::$SortedRemoveAndShift$b__26_0
// Il2CppName: <SortedRemoveAndShift>b__26_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::SharedVertex::$$c::*)(System::Collections::Generic::KeyValuePair_2<int, int>)>(&UnityEngine::ProBuilder::SharedVertex::$$c::$SortedRemoveAndShift$b__26_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::SharedVertex::$$c*), "<SortedRemoveAndShift>b__26_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::SharedVertex::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
