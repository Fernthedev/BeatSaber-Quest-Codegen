// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ProBuilder.MeshOperations.DeleteElements
#include "UnityEngine/ProBuilder/MeshOperations/DeleteElements.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.DeleteElements/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DeleteElements::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<System.Int32> sorted
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<int>* sorted;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // public System.Int32[] offset
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* offset;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_0
    $$c__DisplayClass0_0(System::Collections::Generic::List_1<int>* sorted_ = {}, ::Array<int>* offset_ = {}) noexcept : sorted{sorted_}, offset{offset_} {}
    // Get instance field: public System.Collections.Generic.List`1<System.Int32> sorted
    System::Collections::Generic::List_1<int>* _get_sorted();
    // Set instance field: public System.Collections.Generic.List`1<System.Int32> sorted
    void _set_sorted(System::Collections::Generic::List_1<int>* value);
    // Get instance field: public System.Int32[] offset
    ::Array<int>* _get_offset();
    // Set instance field: public System.Int32[] offset
    void _set_offset(::Array<int>* value);
    // System.Boolean <DeleteVertices>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> x)
    // Offset: 0x1553D10
    bool $DeleteVertices$b__0(System::Collections::Generic::KeyValuePair_2<int, int> x);
    // System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> <DeleteVertices>b__1(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> y)
    // Offset: 0x1553D80
    System::Collections::Generic::KeyValuePair_2<int, int> $DeleteVertices$b__1(System::Collections::Generic::KeyValuePair_2<int, int> y);
    // System.Boolean <DeleteVertices>b__2(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> x)
    // Offset: 0x1553E20
    bool $DeleteVertices$b__2(System::Collections::Generic::KeyValuePair_2<int, int> x);
    // System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> <DeleteVertices>b__3(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> y)
    // Offset: 0x1553E90
    System::Collections::Generic::KeyValuePair_2<int, int> $DeleteVertices$b__3(System::Collections::Generic::KeyValuePair_2<int, int> y);
    // public System.Void .ctor()
    // Offset: 0x155355C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeleteElements::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeleteElements::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.DeleteElements/UnityEngine.ProBuilder.MeshOperations.<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(DeleteElements::$$c__DisplayClass0_0), 24 + sizeof(::Array<int>*)> __UnityEngine_ProBuilder_MeshOperations_DeleteElements_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(DeleteElements::$$c__DisplayClass0_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements/<>c__DisplayClass0_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::$DeleteVertices$b__0
// Il2CppName: <DeleteVertices>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::*)(System::Collections::Generic::KeyValuePair_2<int, int>)>(&UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::$DeleteVertices$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0*), "<DeleteVertices>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::$DeleteVertices$b__1
// Il2CppName: <DeleteVertices>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<int, int> (UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::*)(System::Collections::Generic::KeyValuePair_2<int, int>)>(&UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::$DeleteVertices$b__1)> {
  static const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0*), "<DeleteVertices>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::$DeleteVertices$b__2
// Il2CppName: <DeleteVertices>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::*)(System::Collections::Generic::KeyValuePair_2<int, int>)>(&UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::$DeleteVertices$b__2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0*), "<DeleteVertices>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::$DeleteVertices$b__3
// Il2CppName: <DeleteVertices>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<int, int> (UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::*)(System::Collections::Generic::KeyValuePair_2<int, int>)>(&UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::$DeleteVertices$b__3)> {
  static const MethodInfo* get() {
    static auto* y = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "KeyValuePair`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32"), ::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0*), "<DeleteVertices>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{y});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
