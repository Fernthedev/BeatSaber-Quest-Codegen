#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__TernaryTreeReadOnly_def.hpp"
//  Writing Method size for method: ::System::Xml::TernaryTreeReadOnly._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::TernaryTreeReadOnly::*)(::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::System::Xml::TernaryTreeReadOnly::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2851124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TernaryTreeReadOnly*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TernaryTreeReadOnly.FindCaseInsensitiveString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Xml::TernaryTreeReadOnly::*)(::StringW)>(&::System::Xml::TernaryTreeReadOnly::FindCaseInsensitiveString)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x284f980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TernaryTreeReadOnly*>::get(),
                            "FindCaseInsensitiveString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::TernaryTreeReadOnly::__set_nodeBuffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Xml::TernaryTreeReadOnly::__get_nodeBuffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Xml::TernaryTreeReadOnly::__get_nodeBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
inline ::System::Xml::TernaryTreeReadOnly* System::Xml::TernaryTreeReadOnly::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  nodeBuffer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::TernaryTreeReadOnly*>(nodeBuffer));
}
inline void System::Xml::TernaryTreeReadOnly::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  nodeBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TernaryTreeReadOnly*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, nodeBuffer);
}
inline uint8_t System::Xml::TernaryTreeReadOnly::FindCaseInsensitiveString(::StringW  stringToFind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::TernaryTreeReadOnly*>::get(),
                            "FindCaseInsensitiveString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint8_t, false>(*this, ___internal_method, stringToFind);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
