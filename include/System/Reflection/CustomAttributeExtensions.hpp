// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.CustomAttributeExtensions
  // [ExtensionAttribute] Offset: FFFFFFFF
  class CustomAttributeExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CustomAttributeExtensions
    CustomAttributeExtensions() noexcept {}
    // static public System.Attribute GetCustomAttribute(System.Reflection.Assembly element, System.Type attributeType)
    // Offset: 0x1C77188
    static System::Attribute* GetCustomAttribute(System::Reflection::Assembly* element, System::Type* attributeType);
    // static public T GetCustomAttribute(System.Reflection.Assembly element)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T GetCustomAttribute(System::Reflection::Assembly* element) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::CustomAttributeExtensions::GetCustomAttribute");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Reflection", "CustomAttributeExtensions", "GetCustomAttribute", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(element)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, element);
    }
    // static public System.Collections.Generic.IEnumerable`1<System.Attribute> GetCustomAttributes(System.Reflection.Assembly element, System.Type attributeType)
    // Offset: 0x1C77190
    static System::Collections::Generic::IEnumerable_1<System::Attribute*>* GetCustomAttributes(System::Reflection::Assembly* element, System::Type* attributeType);
    // static public System.Collections.Generic.IEnumerable`1<T> GetCustomAttributes(System.Reflection.Assembly element)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<T>* GetCustomAttributes(System::Reflection::Assembly* element) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::CustomAttributeExtensions::GetCustomAttributes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Reflection", "CustomAttributeExtensions", "GetCustomAttributes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(element)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, element);
    }
    // static public System.Collections.Generic.IEnumerable`1<System.Attribute> GetCustomAttributes(System.Reflection.MemberInfo element, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1C77198
    static System::Collections::Generic::IEnumerable_1<System::Attribute*>* GetCustomAttributes(System::Reflection::MemberInfo* element, System::Type* attributeType, bool inherit);
    // static public System.Collections.Generic.IEnumerable`1<T> GetCustomAttributes(System.Reflection.MemberInfo element, System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<T>* GetCustomAttributes(System::Reflection::MemberInfo* element, bool inherit) {
      static_assert(std::is_convertible_v<T, System::Attribute*>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::CustomAttributeExtensions::GetCustomAttributes");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Reflection", "CustomAttributeExtensions", "GetCustomAttributes", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(element), ::il2cpp_utils::ExtractType(inherit)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, element, inherit);
    }
  }; // System.Reflection.CustomAttributeExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeExtensions*, "System.Reflection", "CustomAttributeExtensions");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::CustomAttributeExtensions::GetCustomAttribute
// Il2CppName: GetCustomAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Attribute* (*)(System::Reflection::Assembly*, System::Type*)>(&System::Reflection::CustomAttributeExtensions::GetCustomAttribute)> {
  const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeExtensions*), "GetCustomAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeExtensions::GetCustomAttribute
// Il2CppName: GetCustomAttribute
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Reflection::CustomAttributeExtensions::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Attribute*>* (*)(System::Reflection::Assembly*, System::Type*)>(&System::Reflection::CustomAttributeExtensions::GetCustomAttributes)> {
  const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeExtensions*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeExtensions::GetCustomAttributes
// Il2CppName: GetCustomAttributes
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Reflection::CustomAttributeExtensions::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Attribute*>* (*)(System::Reflection::MemberInfo*, System::Type*, bool)>(&System::Reflection::CustomAttributeExtensions::GetCustomAttributes)> {
  const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::CustomAttributeExtensions*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::CustomAttributeExtensions::GetCustomAttributes
// Il2CppName: GetCustomAttributes
// Cannot write MetadataGetter for generic methods!
