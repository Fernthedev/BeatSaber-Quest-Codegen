#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CookieParser_def.hpp"
#include "System/Net/zzzz__CookieTokenizer_def.hpp"
#include "System/Net/zzzz__Cookie_def.hpp"
//  Writing Method size for method: ::System::Net::CookieParser._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CookieParser::*)(::StringW)>(&::System::Net::CookieParser::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x29ad644;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieParser.Get
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cookie* (::System::Net::CookieParser::*)()>(&::System::Net::CookieParser::Get)> {
  constexpr static std::size_t size = 0x55c;
  constexpr static std::size_t addrs = 0x29ad6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CookieParser.CheckQuoted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Net::CookieParser::CheckQuoted)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29abd24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                            "CheckQuoted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::CookieParser::__set_m_tokenizer(::System::Net::CookieTokenizer*  value)  {
::cordl_internals::setInstanceField<::System::Net::CookieTokenizer*, 0x10>(this, std::forward<::System::Net::CookieTokenizer*>(value));
}
constexpr ::System::Net::CookieTokenizer* System::Net::CookieParser::__get_m_tokenizer()  {
return ::cordl_internals::getInstanceField<::System::Net::CookieTokenizer*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieTokenizer*> System::Net::CookieParser::__get_m_tokenizer() const {
return ::cordl_internals::getInstanceField<::System::Net::CookieTokenizer*, 0x10>(this);
}
inline ::System::Net::CookieParser* System::Net::CookieParser::New_ctor(::StringW  cookieString)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::CookieParser*>(cookieString));
}
inline void System::Net::CookieParser::_ctor(::StringW  cookieString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, cookieString);
}
inline ::System::Net::Cookie* System::Net::CookieParser::Get()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                            "Get",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Cookie*, false>(*this, ___internal_method);
}
inline ::StringW System::Net::CookieParser::CheckQuoted(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CookieParser*>::get(),
                            "CheckQuoted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, value);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
