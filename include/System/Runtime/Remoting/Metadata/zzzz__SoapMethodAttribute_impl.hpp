#pragma once
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapMethodAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapMethodAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute.get_UseAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_UseAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5d6c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute.get_XmlNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_XmlNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5d74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapMethodAttribute.SetReflectionObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapMethodAttribute::*)(::System::Object*)>(&::System::Runtime::Remoting::Metadata::SoapMethodAttribute::SetReflectionObject)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x24a5d7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__responseElement(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__responseElement()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__responseElement() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__responseNamespace(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__responseNamespace()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__responseNamespace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__returnElement(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__returnElement()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__returnElement() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__soapAction(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__soapAction()  {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__soapAction() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this);
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__useAttribute(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x48>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__useAttribute()  {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr bool const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__useAttribute() const {
return ::cordl_internals::getInstanceField<bool, 0x48>(this);
}
constexpr void System::Runtime::Remoting::Metadata::SoapMethodAttribute::__set__namespace(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x50>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__namespace()  {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapMethodAttribute::__get__namespace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x50>(this);
}
inline ::System::Runtime::Remoting::Metadata::SoapMethodAttribute* System::Runtime::Remoting::Metadata::SoapMethodAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>());
}
inline void System::Runtime::Remoting::Metadata::SoapMethodAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_UseAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                            "get_UseAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Metadata::SoapMethodAttribute::get_XmlNamespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                            "get_XmlNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Runtime::Remoting::Metadata::SoapMethodAttribute::SetReflectionObject(::System::Object*  reflectionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapMethodAttribute*>::get(),
                            "SetReflectionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reflectionObject);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
