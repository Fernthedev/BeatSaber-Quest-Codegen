// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.TypeStringFormatter
#include "ModestTree/TypeStringFormatter.hpp"
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
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeStringFormatter/<>c
  // [CompilerGeneratedAttribute] Offset: DDD57C
  class TypeStringFormatter::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly ModestTree.TypeStringFormatter/<>c <>9
    static ModestTree::TypeStringFormatter::$$c* _get_$$9();
    // Set static field: static public readonly ModestTree.TypeStringFormatter/<>c <>9
    static void _set_$$9(ModestTree::TypeStringFormatter::$$c* value);
    // Get static field: static public System.Func`2<System.Type,System.String> <>9__2_0
    static System::Func_2<System::Type*, ::Il2CppString*>* _get_$$9__2_0();
    // Set static field: static public System.Func`2<System.Type,System.String> <>9__2_0
    static void _set_$$9__2_0(System::Func_2<System::Type*, ::Il2CppString*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1384E10
    static void _cctor();
    // System.String <PrettyNameInternal>b__2_0(System.Type t)
    // Offset: 0x1384E7C
    ::Il2CppString* $PrettyNameInternal$b__2_0(System::Type* t);
    // public System.Void .ctor()
    // Offset: 0x1384E74
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeStringFormatter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeStringFormatter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeStringFormatter::$$c*, creationType>()));
    }
  }; // ModestTree.TypeStringFormatter/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeStringFormatter::$$c*, "ModestTree", "TypeStringFormatter/<>c");
// Writing includes for template specializations
#include "System/Type.hpp"
// Writing MetadataGetter for method: ModestTree::TypeStringFormatter::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&ModestTree::TypeStringFormatter::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeStringFormatter::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeStringFormatter::$$c::$PrettyNameInternal$b__2_0
// Il2CppName: <PrettyNameInternal>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (ModestTree::TypeStringFormatter::$$c::*)(System::Type*)>(&ModestTree::TypeStringFormatter::$$c::$PrettyNameInternal$b__2_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeStringFormatter::$$c*), "<PrettyNameInternal>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeStringFormatter::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
