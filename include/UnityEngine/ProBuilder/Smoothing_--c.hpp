// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.Smoothing
#include "UnityEngine/ProBuilder/Smoothing.hpp"
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
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Face
  class Face;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.Smoothing/<>c
  // [CompilerGeneratedAttribute] Offset: E3A39C
  class Smoothing::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.ProBuilder.Smoothing/<>c <>9
    static UnityEngine::ProBuilder::Smoothing::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.ProBuilder.Smoothing/<>c <>9
    static void _set_$$9(UnityEngine::ProBuilder::Smoothing::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__5_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, int>* _get_$$9__5_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__5_0
    static void _set_$$9__5_0(System::Func_2<UnityEngine::ProBuilder::Face*, int>* value);
    // Get static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__9_0
    static System::Func_2<UnityEngine::ProBuilder::Face*, int>* _get_$$9__9_0();
    // Set static field: static public System.Func`2<UnityEngine.ProBuilder.Face,System.Int32> <>9__9_0
    static void _set_$$9__9_0(System::Func_2<UnityEngine::ProBuilder::Face*, int>* value);
    // static private System.Void .cctor()
    // Offset: 0x22BC7D0
    static void _cctor();
    // System.Int32 <GetUnusedSmoothingGroup>b__5_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x22BC83C
    int $GetUnusedSmoothingGroup$b__5_0(UnityEngine::ProBuilder::Face* x);
    // System.Int32 <ApplySmoothingGroups>b__9_0(UnityEngine.ProBuilder.Face x)
    // Offset: 0x22BC854
    int $ApplySmoothingGroups$b__9_0(UnityEngine::ProBuilder::Face* x);
    // public System.Void .ctor()
    // Offset: 0x22BC834
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Smoothing::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::Smoothing::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Smoothing::$$c*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.Smoothing/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Smoothing::$$c*, "UnityEngine.ProBuilder", "Smoothing/<>c");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::ProBuilder::Smoothing::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Smoothing::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::$$c::$GetUnusedSmoothingGroup$b__5_0
// Il2CppName: <GetUnusedSmoothingGroup>b__5_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Smoothing::$$c::*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::Smoothing::$$c::$GetUnusedSmoothingGroup$b__5_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Smoothing::$$c*), "<GetUnusedSmoothingGroup>b__5_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::$$c::$ApplySmoothingGroups$b__9_0
// Il2CppName: <ApplySmoothingGroups>b__9_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Smoothing::$$c::*)(UnityEngine::ProBuilder::Face*)>(&UnityEngine::ProBuilder::Smoothing::$$c::$ApplySmoothingGroups$b__9_0)> {
  const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Face")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Smoothing::$$c*), "<ApplySmoothingGroups>b__9_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Smoothing::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
