// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: ModestTree.TypeExtensions
#include "ModestTree/TypeExtensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeExtensions/ModestTree.<>c__DisplayClass39_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TypeExtensions::$$c__DisplayClass39_0 : public ::Il2CppObject {
    public:
    // public System.Type[] attributeTypes
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::Type*>* attributeTypes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass39_0
    $$c__DisplayClass39_0(::Array<System::Type*>* attributeTypes_ = {}) noexcept : attributeTypes{attributeTypes_} {}
    // Creating conversion operator: operator ::Array<System::Type*>*
    constexpr operator ::Array<System::Type*>*() const noexcept {
      return attributeTypes;
    }
    // Get instance field: public System.Type[] attributeTypes
    ::Array<System::Type*>* _get_attributeTypes();
    // Set instance field: public System.Type[] attributeTypes
    void _set_attributeTypes(::Array<System::Type*>* value);
    // System.Boolean <AllAttributes>b__0(System.Attribute a)
    // Offset: 0x13D6688
    bool $AllAttributes$b__0(System::Attribute* a);
    // public System.Void .ctor()
    // Offset: 0x13D643C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeExtensions::$$c__DisplayClass39_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::$$c__DisplayClass39_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeExtensions::$$c__DisplayClass39_0*, creationType>()));
    }
  }; // ModestTree.TypeExtensions/ModestTree.<>c__DisplayClass39_0
  #pragma pack(pop)
  static check_size<sizeof(TypeExtensions::$$c__DisplayClass39_0), 16 + sizeof(::Array<System::Type*>*)> __ModestTree_TypeExtensions_$$c__DisplayClass39_0SizeCheck;
  static_assert(sizeof(TypeExtensions::$$c__DisplayClass39_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeExtensions::$$c__DisplayClass39_0*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$$c__DisplayClass39_0::$AllAttributes$b__0
// Il2CppName: <AllAttributes>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (ModestTree::TypeExtensions::$$c__DisplayClass39_0::*)(System::Attribute*)>(&ModestTree::TypeExtensions::$$c__DisplayClass39_0::$AllAttributes$b__0)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Attribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ModestTree::TypeExtensions::$$c__DisplayClass39_0*), "<AllAttributes>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: ModestTree::TypeExtensions::$$c__DisplayClass39_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
