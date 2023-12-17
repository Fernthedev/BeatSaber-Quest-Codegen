#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Xml/Schema/zzzz__NamespaceList_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
constexpr void System::Xml::Schema::__NamespaceList__ListType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::Schema::__NamespaceList__ListType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::Schema::__NamespaceList__ListType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::__NamespaceList__ListType::__NamespaceList__ListType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::System::Xml::Schema::__NamespaceList__ListType  System::Xml::Schema::__NamespaceList__ListType::Any{static_cast<int32_t>(0x0)};
constexpr ::System::Xml::Schema::__NamespaceList__ListType  System::Xml::Schema::__NamespaceList__ListType::Other{static_cast<int32_t>(0x1)};
constexpr ::System::Xml::Schema::__NamespaceList__ListType  System::Xml::Schema::__NamespaceList__ListType::Set{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c3ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::NamespaceList::*)(::StringW, ::StringW)>(&::System::Xml::Schema::NamespaceList::_ctor)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x28c3ad0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::__NamespaceList__ListType (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c3d70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.get_Excluded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::get_Excluded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28c3d78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            "get_Excluded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.get_Enumerate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ICollection* (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::get_Enumerate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x28c3d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            "get_Enumerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Allows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::NamespaceList::*)(::StringW)>(&::System::Xml::Schema::NamespaceList::Allows)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x28c3dec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.Allows
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::NamespaceList::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::NamespaceList::Allows)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x28c3e70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            "Allows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::NamespaceList.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::NamespaceList::*)()>(&::System::Xml::Schema::NamespaceList::ToString)> {
  constexpr static std::size_t size = 0x4c8;
  constexpr static std::size_t addrs = 0x28c3e90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void System::Xml::Schema::NamespaceList::__set_type(::System::Xml::Schema::__NamespaceList__ListType  value)  {
::cordl_internals::setInstanceField<::System::Xml::Schema::__NamespaceList__ListType, 0x10>(this, std::forward<::System::Xml::Schema::__NamespaceList__ListType>(value));
}
constexpr ::System::Xml::Schema::__NamespaceList__ListType& System::Xml::Schema::NamespaceList::__get_type()  {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::__NamespaceList__ListType, 0x10>(this);
}
constexpr ::System::Xml::Schema::__NamespaceList__ListType const& System::Xml::Schema::NamespaceList::__get_type() const {
return ::cordl_internals::getInstanceField<::System::Xml::Schema::__NamespaceList__ListType, 0x10>(this);
}
constexpr void System::Xml::Schema::NamespaceList::__set_set(::System::Collections::Hashtable*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Hashtable*, 0x18>(this, std::forward<::System::Collections::Hashtable*>(value));
}
constexpr ::System::Collections::Hashtable* System::Xml::Schema::NamespaceList::__get_set()  {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> System::Xml::Schema::NamespaceList::__get_set() const {
return ::cordl_internals::getInstanceField<::System::Collections::Hashtable*, 0x18>(this);
}
constexpr void System::Xml::Schema::NamespaceList::__set_targetNamespace(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Xml::Schema::NamespaceList::__get_targetNamespace()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& System::Xml::Schema::NamespaceList::__get_targetNamespace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::NamespaceList*>());
}
inline void System::Xml::Schema::NamespaceList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Xml::Schema::NamespaceList* System::Xml::Schema::NamespaceList::New_ctor(::StringW  namespaces, ::StringW  targetNamespace)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::NamespaceList*>(namespaces, targetNamespace));
}
inline void System::Xml::Schema::NamespaceList::_ctor(::StringW  namespaces, ::StringW  targetNamespace)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, namespaces, targetNamespace);
}
inline ::System::Xml::Schema::__NamespaceList__ListType System::Xml::Schema::NamespaceList::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::__NamespaceList__ListType, false>(*this, ___internal_method);
}
inline ::StringW System::Xml::Schema::NamespaceList::get_Excluded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            "get_Excluded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::System::Collections::ICollection* System::Xml::Schema::NamespaceList::get_Enumerate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            "get_Enumerate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ICollection*, false>(*this, ___internal_method);
}
inline bool System::Xml::Schema::NamespaceList::Allows(::StringW  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            "Allows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, ns);
}
inline bool System::Xml::Schema::NamespaceList::Allows(::System::Xml::XmlQualifiedName*  qname)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            "Allows",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, qname);
}
inline ::StringW System::Xml::Schema::NamespaceList::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::NamespaceList*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
