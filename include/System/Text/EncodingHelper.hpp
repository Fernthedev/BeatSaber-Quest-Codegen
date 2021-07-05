// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.EncodingHelper
  class EncodingHelper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: EncodingHelper
    EncodingHelper() noexcept {}
    // Get static field: static private System.Text.Encoding utf8EncodingWithoutMarkers
    static System::Text::Encoding* _get_utf8EncodingWithoutMarkers();
    // Set static field: static private System.Text.Encoding utf8EncodingWithoutMarkers
    static void _set_utf8EncodingWithoutMarkers(System::Text::Encoding* value);
    // Get static field: static private readonly System.Object lockobj
    static ::Il2CppObject* _get_lockobj();
    // Set static field: static private readonly System.Object lockobj
    static void _set_lockobj(::Il2CppObject* value);
    // Get static field: static private System.Reflection.Assembly i18nAssembly
    static System::Reflection::Assembly* _get_i18nAssembly();
    // Set static field: static private System.Reflection.Assembly i18nAssembly
    static void _set_i18nAssembly(System::Reflection::Assembly* value);
    // Get static field: static private System.Boolean i18nDisabled
    static bool _get_i18nDisabled();
    // Set static field: static private System.Boolean i18nDisabled
    static void _set_i18nDisabled(bool value);
    // static System.Text.Encoding get_UTF8Unmarked()
    // Offset: 0x1CFA66C
    static System::Text::Encoding* get_UTF8Unmarked();
    // static System.String InternalCodePage(ref System.Int32 code_page)
    // Offset: 0x1CFA8A4
    static ::Il2CppString* InternalCodePage(int& code_page);
    // static System.Text.Encoding GetDefaultEncoding()
    // Offset: 0x1CF8DC4
    static System::Text::Encoding* GetDefaultEncoding();
    // static System.Object InvokeI18N(System.String name, params System.Object[] args)
    // Offset: 0x1CF72E4
    static ::Il2CppObject* InvokeI18N(::Il2CppString* name, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object InvokeI18N(System.String name, params System.Object[] args)
    static ::Il2CppObject* InvokeI18N(::Il2CppString* name, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object InvokeI18N(System.String name, params System.Object[] args)
    template<class ...TParams>
    static ::Il2CppObject* InvokeI18N(::Il2CppString* name, TParams&&... args) {
      return InvokeI18N(name, {args...});
    }
    // static private System.Void .cctor()
    // Offset: 0x1CFA8A8
    static void _cctor();
  }; // System.Text.EncodingHelper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncodingHelper*, "System.Text", "EncodingHelper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::EncodingHelper::get_UTF8Unmarked
// Il2CppName: get_UTF8Unmarked
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (*)()>(&System::Text::EncodingHelper::get_UTF8Unmarked)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingHelper*), "get_UTF8Unmarked", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingHelper::InternalCodePage
// Il2CppName: InternalCodePage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(int&)>(&System::Text::EncodingHelper::InternalCodePage)> {
  const MethodInfo* get() {
    static auto* code_page = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingHelper*), "InternalCodePage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code_page});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingHelper::GetDefaultEncoding
// Il2CppName: GetDefaultEncoding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Text::Encoding* (*)()>(&System::Text::EncodingHelper::GetDefaultEncoding)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingHelper*), "GetDefaultEncoding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingHelper::InvokeI18N
// Il2CppName: InvokeI18N
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppString*, ::Array<::Il2CppObject*>*)>(&System::Text::EncodingHelper::InvokeI18N)> {
  const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingHelper*), "InvokeI18N", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, args});
  }
};
// Writing MetadataGetter for method: System::Text::EncodingHelper::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Text::EncodingHelper::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::EncodingHelper*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
