// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security
namespace System::Security {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityElement
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9C78C
  class SecurityElement : public ::Il2CppObject {
    public:
    // Nested type: System::Security::SecurityElement::SecurityAttribute
    class SecurityAttribute;
    // private System.String text
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* text;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String tag
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* tag;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.ArrayList attributes
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ArrayList* attributes;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList children
    // Size: 0x8
    // Offset: 0x28
    System::Collections::ArrayList* children;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: SecurityElement
    SecurityElement(::Il2CppString* text_ = {}, ::Il2CppString* tag_ = {}, System::Collections::ArrayList* attributes_ = {}, System::Collections::ArrayList* children_ = {}) noexcept : text{text_}, tag{tag_}, attributes{attributes_}, children{children_} {}
    // Get static field: static private readonly System.Char[] invalid_tag_chars
    static ::Array<::Il2CppChar>* _get_invalid_tag_chars();
    // Set static field: static private readonly System.Char[] invalid_tag_chars
    static void _set_invalid_tag_chars(::Array<::Il2CppChar>* value);
    // Get static field: static private readonly System.Char[] invalid_text_chars
    static ::Array<::Il2CppChar>* _get_invalid_text_chars();
    // Set static field: static private readonly System.Char[] invalid_text_chars
    static void _set_invalid_text_chars(::Array<::Il2CppChar>* value);
    // Get static field: static private readonly System.Char[] invalid_attr_name_chars
    static ::Array<::Il2CppChar>* _get_invalid_attr_name_chars();
    // Set static field: static private readonly System.Char[] invalid_attr_name_chars
    static void _set_invalid_attr_name_chars(::Array<::Il2CppChar>* value);
    // Get static field: static private readonly System.Char[] invalid_attr_value_chars
    static ::Array<::Il2CppChar>* _get_invalid_attr_value_chars();
    // Set static field: static private readonly System.Char[] invalid_attr_value_chars
    static void _set_invalid_attr_value_chars(::Array<::Il2CppChar>* value);
    // Get static field: static private readonly System.Char[] invalid_chars
    static ::Array<::Il2CppChar>* _get_invalid_chars();
    // Set static field: static private readonly System.Char[] invalid_chars
    static void _set_invalid_chars(::Array<::Il2CppChar>* value);
    // Get instance field: private System.String text
    ::Il2CppString* _get_text();
    // Set instance field: private System.String text
    void _set_text(::Il2CppString* value);
    // Get instance field: private System.String tag
    ::Il2CppString* _get_tag();
    // Set instance field: private System.String tag
    void _set_tag(::Il2CppString* value);
    // Get instance field: private System.Collections.ArrayList attributes
    System::Collections::ArrayList* _get_attributes();
    // Set instance field: private System.Collections.ArrayList attributes
    void _set_attributes(System::Collections::ArrayList* value);
    // Get instance field: private System.Collections.ArrayList children
    System::Collections::ArrayList* _get_children();
    // Set instance field: private System.Collections.ArrayList children
    void _set_children(System::Collections::ArrayList* value);
    // public System.Collections.Hashtable get_Attributes()
    // Offset: 0x1B4CC78
    System::Collections::Hashtable* get_Attributes();
    // public System.Collections.ArrayList get_Children()
    // Offset: 0x1B4CF2C
    System::Collections::ArrayList* get_Children();
    // public System.String get_Tag()
    // Offset: 0x1B4CF34
    ::Il2CppString* get_Tag();
    // public System.String get_Text()
    // Offset: 0x1B4CF3C
    ::Il2CppString* get_Text();
    // public System.Void set_Text(System.String value)
    // Offset: 0x1B4CB68
    void set_Text(::Il2CppString* value);
    // System.Void set_m_strText(System.String value)
    // Offset: 0x1B4E0E8
    void set_m_strText(::Il2CppString* value);
    // public System.Void .ctor(System.String tag)
    // Offset: 0x1B4C748
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityElement* New_ctor(::Il2CppString* tag) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::SecurityElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityElement*, creationType>(tag)));
    }
    // public System.Void .ctor(System.String tag, System.String text)
    // Offset: 0x1B4C9A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SecurityElement* New_ctor(::Il2CppString* tag, ::Il2CppString* text) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::SecurityElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SecurityElement*, creationType>(tag, text)));
    }
    // static private System.Void .cctor()
    // Offset: 0x1B4E0F0
    static void _cctor();
    // public System.Void AddAttribute(System.String name, System.String value)
    // Offset: 0x1B4C750
    void AddAttribute(::Il2CppString* name, ::Il2CppString* value);
    // public System.Void AddChild(System.Security.SecurityElement child)
    // Offset: 0x1B4C8D0
    void AddChild(System::Security::SecurityElement* child);
    // static public System.String Escape(System.String str)
    // Offset: 0x1B4D520
    static ::Il2CppString* Escape(::Il2CppString* str);
    // static private System.String Unescape(System.String str)
    // Offset: 0x1B4CFD0
    static ::Il2CppString* Unescape(::Il2CppString* str);
    // static public System.Security.SecurityElement FromString(System.String xml)
    // Offset: 0x1B4D6FC
    static System::Security::SecurityElement* FromString(::Il2CppString* xml);
    // static public System.Boolean IsValidAttributeName(System.String name)
    // Offset: 0x1B4D8D8
    static bool IsValidAttributeName(::Il2CppString* name);
    // static public System.Boolean IsValidAttributeValue(System.String value)
    // Offset: 0x1B4D964
    static bool IsValidAttributeValue(::Il2CppString* value);
    // static public System.Boolean IsValidTag(System.String tag)
    // Offset: 0x1B4CADC
    static bool IsValidTag(::Il2CppString* tag);
    // static public System.Boolean IsValidText(System.String text)
    // Offset: 0x1B4CF44
    static bool IsValidText(::Il2CppString* text);
    // public System.Security.SecurityElement SearchForChildByTag(System.String tag)
    // Offset: 0x1B4D9F0
    System::Security::SecurityElement* SearchForChildByTag(::Il2CppString* tag);
    // private System.Void ToXml(ref System.Text.StringBuilder s, System.Int32 level)
    // Offset: 0x1B4DBA8
    void ToXml(ByRef<System::Text::StringBuilder*> s, int level);
    // System.Security.SecurityElement/System.Security.SecurityAttribute GetAttribute(System.String name)
    // Offset: 0x1B4D10C
    System::Security::SecurityElement::SecurityAttribute* GetAttribute(::Il2CppString* name);
    // System.String SearchForTextOfLocalName(System.String strLocalName)
    // Offset: 0x1B3B8C4
    ::Il2CppString* SearchForTextOfLocalName(::Il2CppString* strLocalName);
    // public override System.String ToString()
    // Offset: 0x1B4DB18
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Security.SecurityElement
  #pragma pack(pop)
  static check_size<sizeof(SecurityElement), 40 + sizeof(System::Collections::ArrayList*)> __System_Security_SecurityElementSizeCheck;
  static_assert(sizeof(SecurityElement) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityElement*, "System.Security", "SecurityElement");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::SecurityElement::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Hashtable* (System::Security::SecurityElement::*)()>(&System::Security::SecurityElement::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::get_Children
// Il2CppName: get_Children
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::ArrayList* (System::Security::SecurityElement::*)()>(&System::Security::SecurityElement::get_Children)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "get_Children", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::get_Tag
// Il2CppName: get_Tag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::SecurityElement::*)()>(&System::Security::SecurityElement::get_Tag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "get_Tag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::get_Text
// Il2CppName: get_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::SecurityElement::*)()>(&System::Security::SecurityElement::get_Text)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "get_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::set_Text
// Il2CppName: set_Text
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityElement::*)(::Il2CppString*)>(&System::Security::SecurityElement::set_Text)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "set_Text", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::set_m_strText
// Il2CppName: set_m_strText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityElement::*)(::Il2CppString*)>(&System::Security::SecurityElement::set_m_strText)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "set_m_strText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::SecurityElement::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::SecurityElement::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::SecurityElement::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::AddAttribute
// Il2CppName: AddAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityElement::*)(::Il2CppString*, ::Il2CppString*)>(&System::Security::SecurityElement::AddAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "AddAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, value});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::AddChild
// Il2CppName: AddChild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityElement::*)(System::Security::SecurityElement*)>(&System::Security::SecurityElement::AddChild)> {
  static const MethodInfo* get() {
    static auto* child = &::il2cpp_utils::GetClassFromName("System.Security", "SecurityElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "AddChild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{child});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::Escape
// Il2CppName: Escape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Security::SecurityElement::Escape)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "Escape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::Unescape
// Il2CppName: Unescape
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)(::Il2CppString*)>(&System::Security::SecurityElement::Unescape)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "Unescape", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::FromString
// Il2CppName: FromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement* (*)(::Il2CppString*)>(&System::Security::SecurityElement::FromString)> {
  static const MethodInfo* get() {
    static auto* xml = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "FromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xml});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::IsValidAttributeName
// Il2CppName: IsValidAttributeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Security::SecurityElement::IsValidAttributeName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "IsValidAttributeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::IsValidAttributeValue
// Il2CppName: IsValidAttributeValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Security::SecurityElement::IsValidAttributeValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "IsValidAttributeValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::IsValidTag
// Il2CppName: IsValidTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Security::SecurityElement::IsValidTag)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "IsValidTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::IsValidText
// Il2CppName: IsValidText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppString*)>(&System::Security::SecurityElement::IsValidText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "IsValidText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::SearchForChildByTag
// Il2CppName: SearchForChildByTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement* (System::Security::SecurityElement::*)(::Il2CppString*)>(&System::Security::SecurityElement::SearchForChildByTag)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "SearchForChildByTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::SecurityElement::*)(ByRef<System::Text::StringBuilder*>, int)>(&System::Security::SecurityElement::ToXml)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->this_arg;
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, level});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::GetAttribute
// Il2CppName: GetAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::SecurityElement::SecurityAttribute* (System::Security::SecurityElement::*)(::Il2CppString*)>(&System::Security::SecurityElement::GetAttribute)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "GetAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::SearchForTextOfLocalName
// Il2CppName: SearchForTextOfLocalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::SecurityElement::*)(::Il2CppString*)>(&System::Security::SecurityElement::SearchForTextOfLocalName)> {
  static const MethodInfo* get() {
    static auto* strLocalName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "SearchForTextOfLocalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{strLocalName});
  }
};
// Writing MetadataGetter for method: System::Security::SecurityElement::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Security::SecurityElement::*)()>(&System::Security::SecurityElement::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::SecurityElement*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
