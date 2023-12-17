#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_def.hpp"
#include "System/Globalization/zzzz__TimeSpanParse_def.hpp"
#include "System/Globalization/zzzz__TimeSpanStyles_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__TimeSpanFormat_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void System::Globalization::__TimeSpanParse__ParseFailureKind::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Globalization::__TimeSpanParse__ParseFailureKind::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& System::Globalization::__TimeSpanParse__ParseFailureKind::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__TimeSpanParse__ParseFailureKind::__TimeSpanParse__ParseFailureKind(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::System::Globalization::__TimeSpanParse__ParseFailureKind  System::Globalization::__TimeSpanParse__ParseFailureKind::None{static_cast<uint8_t>(0x0u)};
constexpr ::System::Globalization::__TimeSpanParse__ParseFailureKind  System::Globalization::__TimeSpanParse__ParseFailureKind::ArgumentNull{static_cast<uint8_t>(0x1u)};
constexpr ::System::Globalization::__TimeSpanParse__ParseFailureKind  System::Globalization::__TimeSpanParse__ParseFailureKind::Format{static_cast<uint8_t>(0x2u)};
constexpr ::System::Globalization::__TimeSpanParse__ParseFailureKind  System::Globalization::__TimeSpanParse__ParseFailureKind::FormatWithParameter{static_cast<uint8_t>(0x3u)};
constexpr ::System::Globalization::__TimeSpanParse__ParseFailureKind  System::Globalization::__TimeSpanParse__ParseFailureKind::Overflow{static_cast<uint8_t>(0x4u)};
constexpr void System::Globalization::__TimeSpanParse__TimeSpanStandardStyles::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Globalization::__TimeSpanParse__TimeSpanStandardStyles::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& System::Globalization::__TimeSpanParse__TimeSpanStandardStyles::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles::__TimeSpanParse__TimeSpanStandardStyles(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  System::Globalization::__TimeSpanParse__TimeSpanStandardStyles::None{static_cast<uint8_t>(0x0u)};
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  System::Globalization::__TimeSpanParse__TimeSpanStandardStyles::Invariant{static_cast<uint8_t>(0x1u)};
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  System::Globalization::__TimeSpanParse__TimeSpanStandardStyles::Localized{static_cast<uint8_t>(0x2u)};
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  System::Globalization::__TimeSpanParse__TimeSpanStandardStyles::RequireFull{static_cast<uint8_t>(0x4u)};
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  System::Globalization::__TimeSpanParse__TimeSpanStandardStyles::Any{static_cast<uint8_t>(0x3u)};
constexpr void System::Globalization::__TimeSpanParse__TTT::__set_value__(uint8_t  value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t& System::Globalization::__TimeSpanParse__TTT::__get_value__()  {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr uint8_t const& System::Globalization::__TimeSpanParse__TTT::__get_value__() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__TimeSpanParse__TTT::__TimeSpanParse__TTT(uint8_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x1>() {this->value__ = value__;
}
constexpr ::System::Globalization::__TimeSpanParse__TTT  System::Globalization::__TimeSpanParse__TTT::None{static_cast<uint8_t>(0x0u)};
constexpr ::System::Globalization::__TimeSpanParse__TTT  System::Globalization::__TimeSpanParse__TTT::End{static_cast<uint8_t>(0x1u)};
constexpr ::System::Globalization::__TimeSpanParse__TTT  System::Globalization::__TimeSpanParse__TTT::Num{static_cast<uint8_t>(0x2u)};
constexpr ::System::Globalization::__TimeSpanParse__TTT  System::Globalization::__TimeSpanParse__TTT::Sep{static_cast<uint8_t>(0x3u)};
constexpr ::System::Globalization::__TimeSpanParse__TTT  System::Globalization::__TimeSpanParse__TTT::NumOverflow{static_cast<uint8_t>(0x4u)};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanToken._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__TimeSpanToken::*)(::System::Globalization::__TimeSpanParse__TTT)>(&::System::Globalization::__TimeSpanParse__TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x255d5f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TTT>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanToken._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__TimeSpanToken::*)(int32_t)>(&::System::Globalization::__TimeSpanParse__TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x255a200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanToken._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__TimeSpanToken::*)(int32_t, int32_t)>(&::System::Globalization::__TimeSpanParse__TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x255d5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanToken._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__TimeSpanToken::*)(::System::Globalization::__TimeSpanParse__TTT, int32_t, int32_t, ::System::ReadOnlySpan_1<char16_t>)>(&::System::Globalization::__TimeSpanParse__TimeSpanToken::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x255d608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TTT>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanToken.IsInvalidFraction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanToken::*)()>(&::System::Globalization::__TimeSpanParse__TimeSpanToken::IsInvalidFraction)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2556be8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(),
                            "IsInvalidFraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::__TimeSpanParse__TimeSpanToken::__set__ttt(::System::Globalization::__TimeSpanParse__TTT  value)  {
::cordl_internals::setInstanceField<::System::Globalization::__TimeSpanParse__TTT, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Globalization::__TimeSpanParse__TTT>(value));
}
constexpr ::System::Globalization::__TimeSpanParse__TTT& System::Globalization::__TimeSpanParse__TimeSpanToken::__get__ttt()  {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TTT, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Globalization::__TimeSpanParse__TTT const& System::Globalization::__TimeSpanParse__TimeSpanToken::__get__ttt() const {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TTT, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanToken::__set__num(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__TimeSpanParse__TimeSpanToken::__get__num()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__TimeSpanParse__TimeSpanToken::__get__num() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanToken::__set__zeroes(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__TimeSpanParse__TimeSpanToken::__get__zeroes()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__TimeSpanParse__TimeSpanToken::__get__zeroes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanToken::__set__sep(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::Globalization::__TimeSpanParse__TimeSpanToken::__get__sep()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::Globalization::__TimeSpanParse__TimeSpanToken::__get__sep() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Globalization::__TimeSpanParse__TimeSpanToken::_ctor(::System::Globalization::__TimeSpanParse__TTT  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TTT>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type);
}
inline void System::Globalization::__TimeSpanParse__TimeSpanToken::_ctor(int32_t  number)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, number);
}
inline void System::Globalization::__TimeSpanParse__TimeSpanToken::_ctor(int32_t  number, int32_t  leadingZeroes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, number, leadingZeroes);
}
inline void System::Globalization::__TimeSpanParse__TimeSpanToken::_ctor(::System::Globalization::__TimeSpanParse__TTT  type, int32_t  number, int32_t  leadingZeroes, ::System::ReadOnlySpan_1<char16_t>  separator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TTT>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, type, number, leadingZeroes, separator);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanToken::IsInvalidFraction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(),
                            "IsInvalidFraction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_ttt", ty: "::System::Globalization::__TimeSpanParse__TTT", modifiers: "", def_value: Some("{}") }, CppParam { name: "_num", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_zeroes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sep", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken::__TimeSpanParse__TimeSpanToken(::System::Globalization::__TimeSpanParse__TTT  _ttt, int32_t  _num, int32_t  _zeroes, ::System::ReadOnlySpan_1<char16_t>  _sep) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->_ttt = _ttt;
this->_num = _num;
this->_zeroes = _zeroes;
this->_sep = _sep;
}
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanTokenizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::*)(::System::ReadOnlySpan_1<char16_t>)>(&::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x255705c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanTokenizer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::*)(::System::ReadOnlySpan_1<char16_t>, int32_t)>(&::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x255d398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanTokenizer.GetNextToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::__TimeSpanParse__TimeSpanToken (::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::*)()>(&::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::GetNextToken)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x25570b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            "GetNextToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanTokenizer.get_EOL
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::*)()>(&::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::get_EOL)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x255d584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            "get_EOL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanTokenizer.BackOne
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::*)()>(&::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::BackOne)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x255d5e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            "BackOne",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanTokenizer.get_NextChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::*)()>(&::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::get_NextChar)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x255d524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            "get_NextChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::__TimeSpanParse__TimeSpanTokenizer::__set__value(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::Globalization::__TimeSpanParse__TimeSpanTokenizer::__get__value()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::Globalization::__TimeSpanParse__TimeSpanTokenizer::__get__value() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanTokenizer::__set__pos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__TimeSpanParse__TimeSpanTokenizer::__get__pos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__TimeSpanParse__TimeSpanTokenizer::__get__pos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Globalization::__TimeSpanParse__TimeSpanTokenizer::_ctor(::System::ReadOnlySpan_1<char16_t>  input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input);
}
inline void System::Globalization::__TimeSpanParse__TimeSpanTokenizer::_ctor(::System::ReadOnlySpan_1<char16_t>  input, int32_t  startPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, input, startPosition);
}
inline ::System::Globalization::__TimeSpanParse__TimeSpanToken System::Globalization::__TimeSpanParse__TimeSpanTokenizer::GetNextToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            "GetNextToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::__TimeSpanParse__TimeSpanToken, false>(*this, ___internal_method);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanTokenizer::get_EOL()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            "get_EOL",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Globalization::__TimeSpanParse__TimeSpanTokenizer::BackOne()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            "BackOne",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline char16_t System::Globalization::__TimeSpanParse__TimeSpanTokenizer::get_NextChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>::get(),
                            "get_NextChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_value", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanTokenizer::__TimeSpanParse__TimeSpanTokenizer(::System::ReadOnlySpan_1<char16_t>  _value, int32_t  _pos) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->_value = _value;
this->_pos = _pos;
}
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.get_PositiveInvariant
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::__TimeSpanFormat__FormatLiterals (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)()>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::get_PositiveInvariant)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x255d618;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "get_PositiveInvariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.get_NegativeInvariant
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::__TimeSpanFormat__FormatLiterals (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)()>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::get_NegativeInvariant)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x255d680;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "get_NegativeInvariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.get_PositiveLocalized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::__TimeSpanFormat__FormatLiterals (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)()>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::get_PositiveLocalized)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x255a09c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "get_PositiveLocalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.get_NegativeLocalized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::__TimeSpanFormat__FormatLiterals (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)()>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::get_NegativeLocalized)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x255a14c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "get_NegativeLocalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.FullAppCompatMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::__TimeSpanFormat__FormatLiterals)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullAppCompatMatch)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x255af14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullAppCompatMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.PartialAppCompatMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::__TimeSpanFormat__FormatLiterals)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::PartialAppCompatMatch)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x255c024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "PartialAppCompatMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.FullMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::__TimeSpanFormat__FormatLiterals)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullMatch)> {
  constexpr static std::size_t size = 0x7b4;
  constexpr static std::size_t addrs = 0x25598e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.FullDMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::__TimeSpanFormat__FormatLiterals)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullDMatch)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x255c980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullDMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.FullHMMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::__TimeSpanFormat__FormatLiterals)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullHMMatch)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x255c568;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullHMMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.FullDHMMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::__TimeSpanFormat__FormatLiterals)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullDHMMatch)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x255bad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullDHMMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.FullHMSMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::__TimeSpanFormat__FormatLiterals)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullHMSMatch)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x255b58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullHMSMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.FullDHMSMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::__TimeSpanFormat__FormatLiterals)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullDHMSMatch)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x255a894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullDHMSMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.FullHMSFMatch
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::__TimeSpanFormat__FormatLiterals)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullHMSFMatch)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x255a214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullHMSFMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::DateTimeFormatInfo*)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::Init)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2557068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.ProcessToken
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanToken>, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::ProcessToken)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x25572f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "ProcessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.AddSep
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::ReadOnlySpan_1<char16_t>, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::AddSep)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x255d6ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "AddSep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo.AddNum
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::*)(::System::Globalization::__TimeSpanParse__TimeSpanToken, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::AddNum)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x255d800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "AddNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__lastSeenTTT(::System::Globalization::__TimeSpanParse__TTT  value)  {
::cordl_internals::setInstanceField<::System::Globalization::__TimeSpanParse__TTT, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Globalization::__TimeSpanParse__TTT>(value));
}
constexpr ::System::Globalization::__TimeSpanParse__TTT& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__lastSeenTTT()  {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TTT, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Globalization::__TimeSpanParse__TTT const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__lastSeenTTT() const {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TTT, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__tokenCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__tokenCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__tokenCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__sepCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__sepCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__sepCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__numCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__posLoc(::System::Globalization::__TimeSpanFormat__FormatLiterals  value)  {
::cordl_internals::setInstanceField<::System::Globalization::__TimeSpanFormat__FormatLiterals, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Globalization::__TimeSpanFormat__FormatLiterals>(value));
}
constexpr ::System::Globalization::__TimeSpanFormat__FormatLiterals& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__posLoc()  {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanFormat__FormatLiterals, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Globalization::__TimeSpanFormat__FormatLiterals const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__posLoc() const {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanFormat__FormatLiterals, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__negLoc(::System::Globalization::__TimeSpanFormat__FormatLiterals  value)  {
::cordl_internals::setInstanceField<::System::Globalization::__TimeSpanFormat__FormatLiterals, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Globalization::__TimeSpanFormat__FormatLiterals>(value));
}
constexpr ::System::Globalization::__TimeSpanFormat__FormatLiterals& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__negLoc()  {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanFormat__FormatLiterals, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Globalization::__TimeSpanFormat__FormatLiterals const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__negLoc() const {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanFormat__FormatLiterals, 0x38>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__posLocInit(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__posLocInit()  {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__posLocInit() const {
return ::cordl_internals::getInstanceField<bool, 0x60>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__negLocInit(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x61>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__negLocInit()  {
return ::cordl_internals::getInstanceField<bool, 0x61>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__negLocInit() const {
return ::cordl_internals::getInstanceField<bool, 0x61>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__fullPosPattern(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__fullPosPattern()  {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__fullPosPattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0x68>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__fullNegPattern(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__fullNegPattern()  {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__fullNegPattern() const {
return ::cordl_internals::getInstanceField<::StringW, 0x70>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__numbers0(::System::Globalization::__TimeSpanParse__TimeSpanToken  value)  {
::cordl_internals::setInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Globalization::__TimeSpanParse__TimeSpanToken>(value));
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numbers0()  {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numbers0() const {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0x78>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__numbers1(::System::Globalization::__TimeSpanParse__TimeSpanToken  value)  {
::cordl_internals::setInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Globalization::__TimeSpanParse__TimeSpanToken>(value));
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numbers1()  {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numbers1() const {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0x98>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__numbers2(::System::Globalization::__TimeSpanParse__TimeSpanToken  value)  {
::cordl_internals::setInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Globalization::__TimeSpanParse__TimeSpanToken>(value));
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numbers2()  {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numbers2() const {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0xb8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__numbers3(::System::Globalization::__TimeSpanParse__TimeSpanToken  value)  {
::cordl_internals::setInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0xd8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Globalization::__TimeSpanParse__TimeSpanToken>(value));
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numbers3()  {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0xd8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numbers3() const {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0xd8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__numbers4(::System::Globalization::__TimeSpanParse__TimeSpanToken  value)  {
::cordl_internals::setInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Globalization::__TimeSpanParse__TimeSpanToken>(value));
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numbers4()  {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanToken const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__numbers4() const {
return ::cordl_internals::getInstanceField<::System::Globalization::__TimeSpanParse__TimeSpanToken, 0xf8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__literals0(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x118>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals0()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x118>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals0() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x118>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__literals1(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x128>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals1()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x128>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals1() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x128>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__literals2(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x138>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals2()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x138>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals2() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x138>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__literals3(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals3()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals3() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x148>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__literals4(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x158>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals4()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x158>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals4() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x158>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__set__literals5(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x168>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals5()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x168>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__get__literals5() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x168>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals System::Globalization::__TimeSpanParse__TimeSpanRawInfo::get_PositiveInvariant()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "get_PositiveInvariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::__TimeSpanFormat__FormatLiterals, false>(*this, ___internal_method);
}
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals System::Globalization::__TimeSpanParse__TimeSpanRawInfo::get_NegativeInvariant()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "get_NegativeInvariant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::__TimeSpanFormat__FormatLiterals, false>(*this, ___internal_method);
}
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals System::Globalization::__TimeSpanParse__TimeSpanRawInfo::get_PositiveLocalized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "get_PositiveLocalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::__TimeSpanFormat__FormatLiterals, false>(*this, ___internal_method);
}
inline ::System::Globalization::__TimeSpanFormat__FormatLiterals System::Globalization::__TimeSpanParse__TimeSpanRawInfo::get_NegativeLocalized()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "get_NegativeLocalized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::__TimeSpanFormat__FormatLiterals, false>(*this, ___internal_method);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullAppCompatMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullAppCompatMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::PartialAppCompatMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "PartialAppCompatMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullDMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullDMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullHMMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullHMMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullDHMMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullDHMMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullHMSMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullHMSMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullDHMSMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullDHMSMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pattern);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::FullHMSFMatch(::System::Globalization::__TimeSpanFormat__FormatLiterals  pattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "FullHMSFMatch",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanFormat__FormatLiterals>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pattern);
}
inline void System::Globalization::__TimeSpanParse__TimeSpanRawInfo::Init(::System::Globalization::DateTimeFormatInfo*  dtfi)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeFormatInfo*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dtfi);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::ProcessToken(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanToken>  tok, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "ProcessToken",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanToken>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, tok, result);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::AddSep(::System::ReadOnlySpan_1<char16_t>  sep, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "AddSep",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, sep, result);
}
inline bool System::Globalization::__TimeSpanParse__TimeSpanRawInfo::AddNum(::System::Globalization::__TimeSpanParse__TimeSpanToken  num, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>::get(),
                            "AddNum",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, num, result);
}
// Ctor Parameters [CppParam { name: "_lastSeenTTT", ty: "::System::Globalization::__TimeSpanParse__TTT", modifiers: "", def_value: Some("{}") }, CppParam { name: "_tokenCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_sepCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_posLoc", ty: "::System::Globalization::__TimeSpanFormat__FormatLiterals", modifiers: "", def_value: Some("{}") }, CppParam { name: "_negLoc", ty: "::System::Globalization::__TimeSpanFormat__FormatLiterals", modifiers: "", def_value: Some("{}") }, CppParam { name: "_posLocInit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_negLocInit", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "_fullPosPattern", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_fullNegPattern", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_numbers0", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers1", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers2", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers3", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_numbers4", ty: "::System::Globalization::__TimeSpanParse__TimeSpanToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals0", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals1", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals2", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals3", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals4", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_literals5", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanRawInfo::__TimeSpanParse__TimeSpanRawInfo(::System::Globalization::__TimeSpanParse__TTT  _lastSeenTTT, int32_t  _tokenCount, int32_t  _sepCount, int32_t  _numCount, ::System::Globalization::__TimeSpanFormat__FormatLiterals  _posLoc, ::System::Globalization::__TimeSpanFormat__FormatLiterals  _negLoc, bool  _posLocInit, bool  _negLocInit, ::StringW  _fullPosPattern, ::StringW  _fullNegPattern, ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers0, ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers1, ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers2, ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers3, ::System::Globalization::__TimeSpanParse__TimeSpanToken  _numbers4, ::System::ReadOnlySpan_1<char16_t>  _literals0, ::System::ReadOnlySpan_1<char16_t>  _literals1, ::System::ReadOnlySpan_1<char16_t>  _literals2, ::System::ReadOnlySpan_1<char16_t>  _literals3, ::System::ReadOnlySpan_1<char16_t>  _literals4, ::System::ReadOnlySpan_1<char16_t>  _literals5) noexcept : ::bs_hook::ValueTypeWrapper<0x178>() {this->_lastSeenTTT = _lastSeenTTT;
this->_tokenCount = _tokenCount;
this->_sepCount = _sepCount;
this->_numCount = _numCount;
this->_posLoc = _posLoc;
this->_negLoc = _negLoc;
this->_posLocInit = _posLocInit;
this->_negLocInit = _negLocInit;
this->_fullPosPattern = _fullPosPattern;
this->_fullNegPattern = _fullNegPattern;
this->_numbers0 = _numbers0;
this->_numbers1 = _numbers1;
this->_numbers2 = _numbers2;
this->_numbers3 = _numbers3;
this->_numbers4 = _numbers4;
this->_literals0 = _literals0;
this->_literals1 = _literals1;
this->_literals2 = _literals2;
this->_literals3 = _literals3;
this->_literals4 = _literals4;
this->_literals5 = _literals5;
}
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__TimeSpanResult::*)(bool)>(&::System::Globalization::__TimeSpanParse__TimeSpanResult::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x255d918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__TimeSpanResult.SetFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__TimeSpanResult::*)(::System::Globalization::__TimeSpanParse__ParseFailureKind, ::StringW, ::System::Object*, ::StringW)>(&::System::Globalization::__TimeSpanParse__TimeSpanResult::SetFailure)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x255d928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__ParseFailureKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::__TimeSpanParse__TimeSpanResult::__set_parsedTimeSpan(::System::TimeSpan  value)  {
::cordl_internals::setInstanceField<::System::TimeSpan, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::TimeSpan>(value));
}
constexpr ::System::TimeSpan& System::Globalization::__TimeSpanParse__TimeSpanResult::__get_parsedTimeSpan()  {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::TimeSpan const& System::Globalization::__TimeSpanParse__TimeSpanResult::__get_parsedTimeSpan() const {
return ::cordl_internals::getInstanceField<::System::TimeSpan, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__TimeSpanResult::__set__throwOnFailure(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::Globalization::__TimeSpanParse__TimeSpanResult::__get__throwOnFailure()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::Globalization::__TimeSpanParse__TimeSpanResult::__get__throwOnFailure() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Globalization::__TimeSpanParse__TimeSpanResult::_ctor(bool  throwOnFailure)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanResult>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, throwOnFailure);
}
/// @param messageArgument: ::System::Object* (default: csnull)
/// @param argumentName: ::StringW (default: csnull)
inline bool System::Globalization::__TimeSpanParse__TimeSpanResult::SetFailure(::System::Globalization::__TimeSpanParse__ParseFailureKind  kind, ::StringW  resourceKey, ::System::Object*  messageArgument, ::StringW  argumentName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__TimeSpanResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__ParseFailureKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, kind, resourceKey, messageArgument, argumentName);
}
// Ctor Parameters [CppParam { name: "parsedTimeSpan", ty: "::System::TimeSpan", modifiers: "", def_value: Some("{}") }, CppParam { name: "_throwOnFailure", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__TimeSpanParse__TimeSpanResult::__TimeSpanParse__TimeSpanResult(::System::TimeSpan  parsedTimeSpan, bool  _throwOnFailure) noexcept : ::bs_hook::ValueTypeWrapper<0x10>() {this->parsedTimeSpan = parsedTimeSpan;
this->_throwOnFailure = _throwOnFailure;
}
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__StringParser.NextChar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__StringParser::*)()>(&::System::Globalization::__TimeSpanParse__StringParser::NextChar)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x255da70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "NextChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__StringParser.NextNonDigit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::System::Globalization::__TimeSpanParse__StringParser::*)()>(&::System::Globalization::__TimeSpanParse__StringParser::NextNonDigit)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x255dabc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "NextNonDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__StringParser.TryParse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__StringParser::*)(::System::ReadOnlySpan_1<char16_t>, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::__TimeSpanParse__StringParser::TryParse)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x255db18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__StringParser.ParseInt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__StringParser::*)(int32_t, ByRef<int32_t>, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::__TimeSpanParse__StringParser::ParseInt)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x255def4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "ParseInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__StringParser.ParseTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::__TimeSpanParse__StringParser::*)(ByRef<int64_t>, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::__TimeSpanParse__StringParser::ParseTime)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x255dd34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "ParseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::__TimeSpanParse__StringParser.SkipBlanks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__TimeSpanParse__StringParser::*)()>(&::System::Globalization::__TimeSpanParse__StringParser::SkipBlanks)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x255dd04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "SkipBlanks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::__TimeSpanParse__StringParser::__set__str(::System::ReadOnlySpan_1<char16_t>  value)  {
::cordl_internals::setInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::ReadOnlySpan_1<char16_t>>(value));
}
constexpr ::System::ReadOnlySpan_1<char16_t>& System::Globalization::__TimeSpanParse__StringParser::__get__str()  {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::ReadOnlySpan_1<char16_t> const& System::Globalization::__TimeSpanParse__StringParser::__get__str() const {
return ::cordl_internals::getInstanceField<::System::ReadOnlySpan_1<char16_t>, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__StringParser::__set__ch(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<char16_t>(value));
}
constexpr char16_t& System::Globalization::__TimeSpanParse__StringParser::__get__ch()  {
return ::cordl_internals::getInstanceField<char16_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr char16_t const& System::Globalization::__TimeSpanParse__StringParser::__get__ch() const {
return ::cordl_internals::getInstanceField<char16_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__StringParser::__set__pos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__TimeSpanParse__StringParser::__get__pos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__TimeSpanParse__StringParser::__get__pos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Globalization::__TimeSpanParse__StringParser::__set__len(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::__TimeSpanParse__StringParser::__get__len()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Globalization::__TimeSpanParse__StringParser::__get__len() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Globalization::__TimeSpanParse__StringParser::NextChar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "NextChar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline char16_t System::Globalization::__TimeSpanParse__StringParser::NextNonDigit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "NextNonDigit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(*this, ___internal_method);
}
inline bool System::Globalization::__TimeSpanParse__StringParser::TryParse(::System::ReadOnlySpan_1<char16_t>  input, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "TryParse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, input, result);
}
inline bool System::Globalization::__TimeSpanParse__StringParser::ParseInt(int32_t  max, ByRef<int32_t>  i, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "ParseInt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, max, i, result);
}
inline bool System::Globalization::__TimeSpanParse__StringParser::ParseTime(ByRef<int64_t>  time, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "ParseTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, time, result);
}
inline void System::Globalization::__TimeSpanParse__StringParser::SkipBlanks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__TimeSpanParse__StringParser>::get(),
                            "SkipBlanks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_str", ty: "::System::ReadOnlySpan_1<char16_t>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ch", ty: "char16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_pos", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_len", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Globalization::__TimeSpanParse__StringParser::__TimeSpanParse__StringParser(::System::ReadOnlySpan_1<char16_t>  _str, char16_t  _ch, int32_t  _pos, int32_t  _len) noexcept : ::bs_hook::ValueTypeWrapper<0x20>() {this->_str = _str;
this->_ch = _ch;
this->_pos = _pos;
this->_len = _len;
}
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.Pow10
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)(int32_t)>(&::System::Globalization::TimeSpanParse::Pow10)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2556650;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "Pow10",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryTimeToTicks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, ::System::Globalization::__TimeSpanParse__TimeSpanToken, ::System::Globalization::__TimeSpanParse__TimeSpanToken, ::System::Globalization::__TimeSpanParse__TimeSpanToken, ::System::Globalization::__TimeSpanParse__TimeSpanToken, ::System::Globalization::__TimeSpanParse__TimeSpanToken, ByRef<int64_t>)>(&::System::Globalization::TimeSpanParse::TryTimeToTicks)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2556a88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryTimeToTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*)>(&::System::Globalization::TimeSpanParse::Parse)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2556c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseExact
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ByRef<::System::TimeSpan>)>(&::System::Globalization::TimeSpanParse::TryParseExact)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2556e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseTimeSpan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, ::System::IFormatProvider*, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseTimeSpan)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2556c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryParseTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminalState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminalState)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2557414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_DHMSF
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2559678;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminal_DHMSF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HMS_F_D
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D)> {
  constexpr static std::size_t size = 0xbdc;
  constexpr static std::size_t addrs = 0x2558a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminal_HMS_F_D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HM_S_D
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D)> {
  constexpr static std::size_t size = 0xe68;
  constexpr static std::size_t addrs = 0x2557c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminal_HM_S_D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_HM
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_HM)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x25578dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminal_HM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ProcessTerminal_D
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::ProcessTerminal_D)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x255754c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminal_D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseExactTimeSpan
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseExactTimeSpan)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2556ed0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryParseExactTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseByFormat
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ::System::ReadOnlySpan_1<char16_t>, ::System::Globalization::TimeSpanStyles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseByFormat)> {
  constexpr static std::size_t size = 0x6fc;
  constexpr static std::size_t addrs = 0x255cc9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryParseByFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactDigits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>, int32_t, ByRef<int32_t>)>(&::System::Globalization::TimeSpanParse::ParseExactDigits)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x255d3a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ParseExactDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactDigits
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>, int32_t, int32_t, ByRef<int32_t>, ByRef<int32_t>)>(&::System::Globalization::TimeSpanParse::ParseExactDigits)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x255d3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ParseExactDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.ParseExactLiteral
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>, ::System::Text::StringBuilder*)>(&::System::Globalization::TimeSpanParse::ParseExactLiteral)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x255d498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ParseExactLiteral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::TimeSpanParse.TryParseTimeSpanConstant
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::ReadOnlySpan_1<char16_t>, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>)>(&::System::Globalization::TimeSpanParse::TryParseTimeSpanConstant)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x255cc64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryParseTimeSpanConstant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
    return ___internal_method;
  }
};
inline int64_t System::Globalization::TimeSpanParse::Pow10(int32_t  pow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "Pow10",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(nullptr, ___internal_method, pow);
}
inline bool System::Globalization::TimeSpanParse::TryTimeToTicks(bool  positive, ::System::Globalization::__TimeSpanParse__TimeSpanToken  days, ::System::Globalization::__TimeSpanParse__TimeSpanToken  hours, ::System::Globalization::__TimeSpanParse__TimeSpanToken  minutes, ::System::Globalization::__TimeSpanParse__TimeSpanToken  seconds, ::System::Globalization::__TimeSpanParse__TimeSpanToken  fraction, ByRef<int64_t>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryTimeToTicks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanToken>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int64_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, positive, days, hours, minutes, seconds, fraction, result);
}
inline ::System::TimeSpan System::Globalization::TimeSpanParse::Parse(::System::ReadOnlySpan_1<char16_t>  input, ::System::IFormatProvider*  formatProvider)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan, false>(nullptr, ___internal_method, input, formatProvider);
}
inline bool System::Globalization::TimeSpanParse::TryParseExact(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider, ::System::Globalization::TimeSpanStyles  styles, ByRef<::System::TimeSpan>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryParseExact",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TimeSpan>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, format, formatProvider, styles, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseTimeSpan(::System::ReadOnlySpan_1<char16_t>  input, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ::System::IFormatProvider*  formatProvider, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryParseTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, style, formatProvider, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminalState(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminalState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_DHMSF(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminal_DHMSF",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HMS_F_D(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminal_HMS_F_D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HM_S_D(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminal_HM_S_D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_HM(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminal_HM",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::ProcessTerminal_D(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>  raw, ::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles  style, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ProcessTerminal_D",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanRawInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::__TimeSpanParse__TimeSpanStandardStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, raw, style, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseExactTimeSpan(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  formatProvider, ::System::Globalization::TimeSpanStyles  styles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryParseExactTimeSpan",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, format, formatProvider, styles, result);
}
inline bool System::Globalization::TimeSpanParse::TryParseByFormat(::System::ReadOnlySpan_1<char16_t>  input, ::System::ReadOnlySpan_1<char16_t>  format, ::System::Globalization::TimeSpanStyles  styles, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryParseByFormat",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::TimeSpanStyles>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, format, styles, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactDigits(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>  tokenizer, int32_t  minDigitLength, ByRef<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ParseExactDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tokenizer, minDigitLength, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactDigits(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>  tokenizer, int32_t  minDigitLength, int32_t  maxDigitLength, ByRef<int32_t>  zeroes, ByRef<int32_t>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ParseExactDigits",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tokenizer, minDigitLength, maxDigitLength, zeroes, result);
}
inline bool System::Globalization::TimeSpanParse::ParseExactLiteral(ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>  tokenizer, ::System::Text::StringBuilder*  enquotedString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "ParseExactLiteral",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanTokenizer>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, tokenizer, enquotedString);
}
inline bool System::Globalization::TimeSpanParse::TryParseTimeSpanConstant(::System::ReadOnlySpan_1<char16_t>  input, ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::TimeSpanParse*>::get(),
                            "TryParseTimeSpanConstant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<char16_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Globalization::__TimeSpanParse__TimeSpanResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, input, result);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
