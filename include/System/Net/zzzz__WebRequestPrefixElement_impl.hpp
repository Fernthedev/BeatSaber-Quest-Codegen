#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__WebRequestPrefixElement_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Net/zzzz__IWebRequestCreate_def.hpp"
//  Writing Method size for method: ::System::Net::WebRequestPrefixElement.get_Creator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebRequestCreate* (::System::Net::WebRequestPrefixElement::*)()>(&::System::Net::WebRequestPrefixElement::get_Creator)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x299e2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(),
                            "get_Creator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestPrefixElement.set_Creator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestPrefixElement::*)(::System::Net::IWebRequestCreate*)>(&::System::Net::WebRequestPrefixElement::set_Creator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299e4b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(),
                            "set_Creator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebRequestCreate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::WebRequestPrefixElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::WebRequestPrefixElement::*)(::StringW, ::System::Net::IWebRequestCreate*)>(&::System::Net::WebRequestPrefixElement::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x299e4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebRequestCreate*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::WebRequestPrefixElement::__set_Prefix(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Net::WebRequestPrefixElement::__get_Prefix()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Net::WebRequestPrefixElement::__get_Prefix() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Net::WebRequestPrefixElement::__set_creator(::System::Net::IWebRequestCreate*  value)  {
::cordl_internals::setInstanceField<::System::Net::IWebRequestCreate*, 0x18>(this, std::forward<::System::Net::IWebRequestCreate*>(value));
}
constexpr ::System::Net::IWebRequestCreate* System::Net::WebRequestPrefixElement::__get_creator()  {
return ::cordl_internals::getInstanceField<::System::Net::IWebRequestCreate*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebRequestCreate*> System::Net::WebRequestPrefixElement::__get_creator() const {
return ::cordl_internals::getInstanceField<::System::Net::IWebRequestCreate*, 0x18>(this);
}
constexpr void System::Net::WebRequestPrefixElement::__set_creatorType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x20>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Net::WebRequestPrefixElement::__get_creatorType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Net::WebRequestPrefixElement::__get_creatorType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x20>(this);
}
inline ::System::Net::IWebRequestCreate* System::Net::WebRequestPrefixElement::get_Creator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(),
                            "get_Creator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::IWebRequestCreate*, false>(*this, ___internal_method);
}
inline void System::Net::WebRequestPrefixElement::set_Creator(::System::Net::IWebRequestCreate*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(),
                            "set_Creator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebRequestCreate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Net::WebRequestPrefixElement* System::Net::WebRequestPrefixElement::New_ctor(::StringW  P, ::System::Net::IWebRequestCreate*  C)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::WebRequestPrefixElement*>(P, C));
}
inline void System::Net::WebRequestPrefixElement::_ctor(::StringW  P, ::System::Net::IWebRequestCreate*  C)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::WebRequestPrefixElement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebRequestCreate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, P, C);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
