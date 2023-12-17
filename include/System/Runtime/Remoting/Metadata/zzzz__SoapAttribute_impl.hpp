#pragma once
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/Remoting/Metadata/zzzz__SoapAttribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5c8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute.get_UseAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapAttribute::get_UseAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5c94;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute.get_XmlNamespace
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Runtime::Remoting::Metadata::SoapAttribute::*)()>(&::System::Runtime::Remoting::Metadata::SoapAttribute::get_XmlNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5c9c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Metadata::SoapAttribute.SetReflectionObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Metadata::SoapAttribute::*)(::System::Object*)>(&::System::Runtime::Remoting::Metadata::SoapAttribute::SetReflectionObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a5ca4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Metadata::SoapAttribute::__set__useAttribute(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Remoting::Metadata::SoapAttribute::__get__useAttribute()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& System::Runtime::Remoting::Metadata::SoapAttribute::__get__useAttribute() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void System::Runtime::Remoting::Metadata::SoapAttribute::__set_ProtXmlNamespace(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Remoting::Metadata::SoapAttribute::__get_ProtXmlNamespace()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Runtime::Remoting::Metadata::SoapAttribute::__get_ProtXmlNamespace() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Runtime::Remoting::Metadata::SoapAttribute::__set_ReflectInfo(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Remoting::Metadata::SoapAttribute::__get_ReflectInfo()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Remoting::Metadata::SoapAttribute::__get_ReflectInfo() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
inline ::System::Runtime::Remoting::Metadata::SoapAttribute* System::Runtime::Remoting::Metadata::SoapAttribute::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Metadata::SoapAttribute*>());
}
inline void System::Runtime::Remoting::Metadata::SoapAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool System::Runtime::Remoting::Metadata::SoapAttribute::get_UseAttribute()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                            "get_UseAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW System::Runtime::Remoting::Metadata::SoapAttribute::get_XmlNamespace()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                            "get_XmlNamespace",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void System::Runtime::Remoting::Metadata::SoapAttribute::SetReflectionObject(::System::Object*  reflectionObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Metadata::SoapAttribute*>::get(),
                            "SetReflectionObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, reflectionObject);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
