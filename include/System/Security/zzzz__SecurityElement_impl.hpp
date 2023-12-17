#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Security/zzzz__SecurityElement_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::System::Security::__SecurityElement__SecurityAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::__SecurityElement__SecurityAttribute::*)(::StringW, ::StringW)>(&::System::Security::__SecurityElement__SecurityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x24535cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::__SecurityElement__SecurityAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::__SecurityElement__SecurityAttribute.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::__SecurityElement__SecurityAttribute::*)()>(&::System::Security::__SecurityElement__SecurityAttribute::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24545d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::__SecurityElement__SecurityAttribute*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::__SecurityElement__SecurityAttribute.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::__SecurityElement__SecurityAttribute::*)()>(&::System::Security::__SecurityElement__SecurityAttribute::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24545dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::__SecurityElement__SecurityAttribute*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::__SecurityElement__SecurityAttribute::__set__name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::__SecurityElement__SecurityAttribute::__get__name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Security::__SecurityElement__SecurityAttribute::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Security::__SecurityElement__SecurityAttribute::__set__value(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::__SecurityElement__SecurityAttribute::__get__value()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Security::__SecurityElement__SecurityAttribute::__get__value() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::System::Security::__SecurityElement__SecurityAttribute* System::Security::__SecurityElement__SecurityAttribute::New_ctor(::StringW  name, ::StringW  value)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::__SecurityElement__SecurityAttribute*>(name, value));
}
inline void System::Security::__SecurityElement__SecurityAttribute::_ctor(::StringW  name, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::__SecurityElement__SecurityAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, value);
}
inline ::StringW System::Security::__SecurityElement__SecurityAttribute::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::__SecurityElement__SecurityAttribute*>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::Security::__SecurityElement__SecurityAttribute::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::__SecurityElement__SecurityAttribute*>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Security::SecurityElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::SecurityElement::*)(::StringW)>(&::System::Security::SecurityElement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2450ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::SecurityElement::*)(::StringW, ::StringW)>(&::System::Security::SecurityElement::_ctor)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2452d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.get_Children
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Security::SecurityElement::*)()>(&::System::Security::SecurityElement::get_Children)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2453054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "get_Children",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.get_Tag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::SecurityElement::*)()>(&::System::Security::SecurityElement::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x245305c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "get_Tag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.set_Text
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::SecurityElement::*)(::StringW)>(&::System::Security::SecurityElement::set_Text)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2452f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "set_Text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.AddAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::SecurityElement::*)(::StringW, ::StringW)>(&::System::Security::SecurityElement::AddAttribute)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2450ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.AddChild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::SecurityElement::*)(::System::Security::SecurityElement*)>(&::System::Security::SecurityElement::AddChild)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2451054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "AddChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::SecurityElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.Escape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Security::SecurityElement::Escape)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2453730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "Escape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.Unescape
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Security::SecurityElement::Unescape)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x24530e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "Unescape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.IsValidAttributeName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Security::SecurityElement::IsValidAttributeName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x245391c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "IsValidAttributeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.IsValidAttributeValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Security::SecurityElement::IsValidAttributeValue)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2453998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "IsValidAttributeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.IsValidTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Security::SecurityElement::IsValidTag)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2452edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "IsValidTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.IsValidText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Security::SecurityElement::IsValidText)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2453064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "IsValidText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.SearchForChildByTag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (::System::Security::SecurityElement::*)(::StringW)>(&::System::Security::SecurityElement::SearchForChildByTag)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2453a14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "SearchForChildByTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::SecurityElement::*)()>(&::System::Security::SecurityElement::ToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2453b3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.ToXml
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::SecurityElement::*)(ByRef<::System::Text::StringBuilder*>, int32_t)>(&::System::Security::SecurityElement::ToXml)> {
  constexpr static std::size_t size = 0x64c;
  constexpr static std::size_t addrs = 0x2453bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "ToXml",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Text::StringBuilder*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.GetAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::__SecurityElement__SecurityAttribute* (::System::Security::SecurityElement::*)(::StringW)>(&::System::Security::SecurityElement::GetAttribute)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x24532bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "GetAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.set_m_strText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::SecurityElement::*)(::StringW)>(&::System::Security::SecurityElement::set_m_strText)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2454210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "set_m_strText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::SecurityElement.SearchForTextOfLocalName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::SecurityElement::*)(::StringW)>(&::System::Security::SecurityElement::SearchForTextOfLocalName)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2454218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "SearchForTextOfLocalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Security::SecurityElement::__set_text(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::SecurityElement::__get_text()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Security::SecurityElement::__get_text() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Security::SecurityElement::__set_tag(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Security::SecurityElement::__get_tag()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Security::SecurityElement::__get_tag() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Security::SecurityElement::__set_attributes(::System::Collections::ArrayList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList*, 0x20>(this, std::forward<::System::Collections::ArrayList*>(value));
}
constexpr ::System::Collections::ArrayList* System::Security::SecurityElement::__get_attributes()  {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> System::Security::SecurityElement::__get_attributes() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x20>(this);
}
constexpr void System::Security::SecurityElement::__set_children(::System::Collections::ArrayList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList*, 0x28>(this, std::forward<::System::Collections::ArrayList*>(value));
}
constexpr ::System::Collections::ArrayList* System::Security::SecurityElement::__get_children()  {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> System::Security::SecurityElement::__get_children() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x28>(this);
}
inline void System::Security::SecurityElement::setStaticF_invalid_tag_chars(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "invalid_tag_chars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Security::SecurityElement::getStaticF_invalid_tag_chars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "invalid_tag_chars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get>();
}
inline void System::Security::SecurityElement::setStaticF_invalid_text_chars(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "invalid_text_chars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Security::SecurityElement::getStaticF_invalid_text_chars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "invalid_text_chars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get>();
}
inline void System::Security::SecurityElement::setStaticF_invalid_attr_name_chars(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "invalid_attr_name_chars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Security::SecurityElement::getStaticF_invalid_attr_name_chars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "invalid_attr_name_chars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get>();
}
inline void System::Security::SecurityElement::setStaticF_invalid_attr_value_chars(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "invalid_attr_value_chars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Security::SecurityElement::getStaticF_invalid_attr_value_chars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "invalid_attr_value_chars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get>();
}
inline void System::Security::SecurityElement::setStaticF_invalid_chars(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "invalid_chars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Security::SecurityElement::getStaticF_invalid_chars()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "invalid_chars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get>();
}
inline ::System::Security::SecurityElement* System::Security::SecurityElement::New_ctor(::StringW  tag)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::SecurityElement*>(tag));
}
inline void System::Security::SecurityElement::_ctor(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tag);
}
inline ::System::Security::SecurityElement* System::Security::SecurityElement::New_ctor(::StringW  tag, ::StringW  text)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Security::SecurityElement*>(tag, text));
}
inline void System::Security::SecurityElement::_ctor(::StringW  tag, ::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, tag, text);
}
inline ::System::Collections::ArrayList* System::Security::SecurityElement::get_Children()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "get_Children",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(*this, ___internal_method);
}
inline ::StringW System::Security::SecurityElement::get_Tag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "get_Tag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Security::SecurityElement::set_Text(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "set_Text",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void System::Security::SecurityElement::AddAttribute(::StringW  name, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "AddAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, value);
}
inline void System::Security::SecurityElement::AddChild(::System::Security::SecurityElement*  child)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "AddChild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::SecurityElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, child);
}
inline ::StringW System::Security::SecurityElement::Escape(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "Escape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
inline ::StringW System::Security::SecurityElement::Unescape(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "Unescape",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, str);
}
inline bool System::Security::SecurityElement::IsValidAttributeName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "IsValidAttributeName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name);
}
inline bool System::Security::SecurityElement::IsValidAttributeValue(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "IsValidAttributeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, value);
}
inline bool System::Security::SecurityElement::IsValidTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "IsValidTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tag);
}
inline bool System::Security::SecurityElement::IsValidText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "IsValidText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, text);
}
inline ::System::Security::SecurityElement* System::Security::SecurityElement::SearchForChildByTag(::StringW  tag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "SearchForChildByTag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::SecurityElement*, false>(*this, ___internal_method, tag);
}
inline ::StringW System::Security::SecurityElement::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Security::SecurityElement::ToXml(ByRef<::System::Text::StringBuilder*>  s, int32_t  level)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "ToXml",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Text::StringBuilder*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, s, level);
}
inline ::System::Security::__SecurityElement__SecurityAttribute* System::Security::SecurityElement::GetAttribute(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "GetAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Security::__SecurityElement__SecurityAttribute*, false>(*this, ___internal_method, name);
}
inline void System::Security::SecurityElement::set_m_strText(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "set_m_strText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW System::Security::SecurityElement::SearchForTextOfLocalName(::StringW  strLocalName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::SecurityElement*>::get(),
                            "SearchForTextOfLocalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method, strLocalName);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
