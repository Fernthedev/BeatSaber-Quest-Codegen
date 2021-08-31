// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IParameterInfo
  class IParameterInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TypeHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeHelper : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Internal::TypeHelper::NonmatchingTypeClass
    class NonmatchingTypeClass;
    // Creating value type constructor for type: TypeHelper
    TypeHelper() noexcept {}
    // Get static field: static public readonly System.Type NonmatchingType
    static System::Type* _get_NonmatchingType();
    // Set static field: static public readonly System.Type NonmatchingType
    static void _set_NonmatchingType(System::Type* value);
    // static private System.Void .cctor()
    // Offset: 0x22A4340
    static void _cctor();
    // static public System.String GetDisplayName(System.Type type)
    // Offset: 0x22A32A0
    static ::Il2CppString* GetDisplayName(System::Type* type);
    // static public System.String GetDisplayName(System.Type type, System.Object[] arglist)
    // Offset: 0x22A3658
    static ::Il2CppString* GetDisplayName(System::Type* type, ::Array<::Il2CppObject*>* arglist);
    // static public System.Type BestCommonType(System.Type type1, System.Type type2)
    // Offset: 0x229772C
    static System::Type* BestCommonType(System::Type* type1, System::Type* type2);
    // static public System.Boolean IsNumeric(System.Type type)
    // Offset: 0x22A3978
    static bool IsNumeric(System::Type* type);
    // static public System.Void ConvertArgumentList(System.Object[] arglist, NUnit.Framework.Interfaces.IParameterInfo[] parameters)
    // Offset: 0x22A3C38
    static void ConvertArgumentList(::Array<::Il2CppObject*>* arglist, ::Array<NUnit::Framework::Interfaces::IParameterInfo*>* parameters);
    // static public System.Boolean CanDeduceTypeArgsFromArgs(System.Type type, System.Object[] arglist, ref System.Type[] typeArgsOut)
    // Offset: 0x22A405C
    static bool CanDeduceTypeArgsFromArgs(System::Type* type, ::Array<::Il2CppObject*>* arglist, ByRef<::Array<System::Type*>*> typeArgsOut);
  }; // NUnit.Framework.Internal.TypeHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TypeHelper*, "NUnit.Framework.Internal", "TypeHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::TypeHelper::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeHelper::GetDisplayName
// Il2CppName: GetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Type*)>(&NUnit::Framework::Internal::TypeHelper::GetDisplayName)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeHelper*), "GetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeHelper::GetDisplayName
// Il2CppName: GetDisplayName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(System::Type*, ::Array<::Il2CppObject*>*)>(&NUnit::Framework::Internal::TypeHelper::GetDisplayName)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* arglist = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeHelper*), "GetDisplayName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, arglist});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeHelper::BestCommonType
// Il2CppName: BestCommonType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Type* (*)(System::Type*, System::Type*)>(&NUnit::Framework::Internal::TypeHelper::BestCommonType)> {
  static const MethodInfo* get() {
    static auto* type1 = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* type2 = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeHelper*), "BestCommonType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type1, type2});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeHelper::IsNumeric
// Il2CppName: IsNumeric
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*)>(&NUnit::Framework::Internal::TypeHelper::IsNumeric)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeHelper*), "IsNumeric", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeHelper::ConvertArgumentList
// Il2CppName: ConvertArgumentList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Array<::Il2CppObject*>*, ::Array<NUnit::Framework::Interfaces::IParameterInfo*>*)>(&NUnit::Framework::Internal::TypeHelper::ConvertArgumentList)> {
  static const MethodInfo* get() {
    static auto* arglist = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("NUnit.Framework.Interfaces", "IParameterInfo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeHelper*), "ConvertArgumentList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arglist, parameters});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::TypeHelper::CanDeduceTypeArgsFromArgs
// Il2CppName: CanDeduceTypeArgsFromArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(System::Type*, ::Array<::Il2CppObject*>*, ByRef<::Array<System::Type*>*>)>(&NUnit::Framework::Internal::TypeHelper::CanDeduceTypeArgsFromArgs)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* arglist = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* typeArgsOut = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::TypeHelper*), "CanDeduceTypeArgsFromArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, arglist, typeArgsOut});
  }
};
