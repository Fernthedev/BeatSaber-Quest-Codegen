#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__XmlImplementation_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
//  Writing Method size for method: ::System::Xml::XmlImplementation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlImplementation::*)()>(&::System::Xml::XmlImplementation::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x288a230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlImplementation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlImplementation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::XmlImplementation::*)(::System::Xml::XmlNameTable*)>(&::System::Xml::XmlImplementation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x288a308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlImplementation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlImplementation.CreateDocument
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDocument* (::System::Xml::XmlImplementation::*)()>(&::System::Xml::XmlImplementation::CreateDocument)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x288a330;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlImplementation*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlImplementation*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XmlImplementation.get_NameTable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XmlImplementation::*)()>(&::System::Xml::XmlImplementation::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x288a394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlImplementation*>::get(),
                            "get_NameTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::XmlImplementation::__set_nameTable(::System::Xml::XmlNameTable*  value)  {
::cordl_internals::setInstanceField<::System::Xml::XmlNameTable*, 0x10>(this, std::forward<::System::Xml::XmlNameTable*>(value));
}
constexpr ::System::Xml::XmlNameTable* System::Xml::XmlImplementation::__get_nameTable()  {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNameTable*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> System::Xml::XmlImplementation::__get_nameTable() const {
return ::cordl_internals::getInstanceField<::System::Xml::XmlNameTable*, 0x10>(this);
}
inline ::System::Xml::XmlImplementation* System::Xml::XmlImplementation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlImplementation*>());
}
inline void System::Xml::XmlImplementation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlImplementation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Xml::XmlImplementation* System::Xml::XmlImplementation::New_ctor(::System::Xml::XmlNameTable*  nt)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::XmlImplementation*>(nt));
}
inline void System::Xml::XmlImplementation::_ctor(::System::Xml::XmlNameTable*  nt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlImplementation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, nt);
}
inline ::System::Xml::XmlDocument* System::Xml::XmlImplementation::CreateDocument()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlImplementation*>::get(),
                            "CreateDocument",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDocument*, false>(*this, ___internal_method);
}
inline ::System::Xml::XmlNameTable* System::Xml::XmlImplementation::get_NameTable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XmlImplementation*>::get(),
                            "get_NameTable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
