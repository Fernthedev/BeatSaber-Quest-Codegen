#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Enum_ParseFailureKind_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::__Enum__EnumResult.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Enum__EnumResult::*)(bool)>(&::System::__Enum__EnumResult::Init)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x25e2a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Enum__EnumResult.SetFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Enum__EnumResult::*)(::System::Exception*)>(&::System::__Enum__EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x25e387c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Enum__EnumResult.SetFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Enum__EnumResult::*)(::System::__Enum__ParseFailureKind, ::StringW)>(&::System::__Enum__EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25e327c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Enum__ParseFailureKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Enum__EnumResult.SetFailure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Enum__EnumResult::*)(::System::__Enum__ParseFailureKind, ::StringW, ::System::Object*)>(&::System::__Enum__EnumResult::SetFailure)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25e32b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Enum__ParseFailureKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__Enum__EnumResult.GetEnumParseException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::__Enum__EnumResult::*)()>(&::System::__Enum__EnumResult::GetEnumParseException)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x25e3100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(),
                            "GetEnumParseException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::__Enum__EnumResult::__set_parsedEnum(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::__Enum__EnumResult::__get_parsedEnum()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::__Enum__EnumResult::__get_parsedEnum() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::__Enum__EnumResult::__set_canThrow(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& System::__Enum__EnumResult::__get_canThrow()  {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& System::__Enum__EnumResult::__get_canThrow() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::__Enum__EnumResult::__set_m_failure(::System::__Enum__ParseFailureKind  value)  {
::cordl_internals::setInstanceField<::System::__Enum__ParseFailureKind, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::__Enum__ParseFailureKind>(value));
}
constexpr ::System::__Enum__ParseFailureKind& System::__Enum__EnumResult::__get_m_failure()  {
return ::cordl_internals::getInstanceField<::System::__Enum__ParseFailureKind, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::System::__Enum__ParseFailureKind const& System::__Enum__EnumResult::__get_m_failure() const {
return ::cordl_internals::getInstanceField<::System::__Enum__ParseFailureKind, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::__Enum__EnumResult::__set_m_failureMessageID(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::__Enum__EnumResult::__get_m_failureMessageID()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::__Enum__EnumResult::__get_m_failureMessageID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::__Enum__EnumResult::__set_m_failureParameter(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::StringW>(value));
}
constexpr ::StringW& System::__Enum__EnumResult::__get_m_failureParameter()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::StringW const& System::__Enum__EnumResult::__get_m_failureParameter() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::__Enum__EnumResult::__set_m_failureMessageFormatArgument(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::__Enum__EnumResult::__get_m_failureMessageFormatArgument()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::__Enum__EnumResult::__get_m_failureMessageFormatArgument() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::__Enum__EnumResult::__set_m_innerException(::System::Exception*  value)  {
::cordl_internals::setInstanceField<::System::Exception*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::System::Exception*>(value));
}
constexpr ::System::Exception* System::__Enum__EnumResult::__get_m_innerException()  {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> System::__Enum__EnumResult::__get_m_innerException() const {
return ::cordl_internals::getInstanceField<::System::Exception*, 0x28>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::__Enum__EnumResult::Init(bool  canMethodThrow)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, canMethodThrow);
}
inline void System::__Enum__EnumResult::SetFailure(::System::Exception*  unhandledException)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, unhandledException);
}
inline void System::__Enum__EnumResult::SetFailure(::System::__Enum__ParseFailureKind  failure, ::StringW  failureParameter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Enum__ParseFailureKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, failure, failureParameter);
}
inline void System::__Enum__EnumResult::SetFailure(::System::__Enum__ParseFailureKind  failure, ::StringW  failureMessageID, ::System::Object*  failureMessageFormatArgument)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(),
                            "SetFailure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::__Enum__ParseFailureKind>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, failure, failureMessageID, failureMessageFormatArgument);
}
inline ::System::Exception* System::__Enum__EnumResult::GetEnumParseException()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__EnumResult>::get(),
                            "GetEnumParseException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "parsedEnum", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "canThrow", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_failure", ty: "::System::__Enum__ParseFailureKind", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_failureMessageID", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_failureParameter", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_failureMessageFormatArgument", ty: "::System::Object*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_innerException", ty: "::System::Exception*", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::__Enum__EnumResult::__Enum__EnumResult(::System::Object*  parsedEnum, bool  canThrow, ::System::__Enum__ParseFailureKind  m_failure, ::StringW  m_failureMessageID, ::StringW  m_failureParameter, ::System::Object*  m_failureMessageFormatArgument, ::System::Exception*  m_innerException) noexcept : ::bs_hook::ValueTypeWrapper<0x30>() {this->parsedEnum = parsedEnum;
this->canThrow = canThrow;
this->m_failure = m_failure;
this->m_failureMessageID = m_failureMessageID;
this->m_failureParameter = m_failureParameter;
this->m_failureMessageFormatArgument = m_failureMessageFormatArgument;
this->m_innerException = m_innerException;
}
//  Writing Method size for method: ::System::__Enum__ValuesAndNames._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__Enum__ValuesAndNames::*)(::ArrayW<uint64_t,::Array<uint64_t>*>, ::ArrayW<::StringW,::Array<::StringW>*>)>(&::System::__Enum__ValuesAndNames::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x25e1ec0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__ValuesAndNames*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::__Enum__ValuesAndNames::__set_Values(::ArrayW<uint64_t,::Array<uint64_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint64_t,::Array<uint64_t>*>, 0x10>(this, std::forward<::ArrayW<uint64_t,::Array<uint64_t>*>>(value));
}
constexpr ::ArrayW<uint64_t,::Array<uint64_t>*>& System::__Enum__ValuesAndNames::__get_Values()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint64_t,::Array<uint64_t>*>, 0x10>(this);
}
constexpr ::ArrayW<uint64_t,::Array<uint64_t>*> const& System::__Enum__ValuesAndNames::__get_Values() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint64_t,::Array<uint64_t>*>, 0x10>(this);
}
constexpr void System::__Enum__ValuesAndNames::__set_Names(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this, std::forward<::ArrayW<::StringW,::Array<::StringW>*>>(value));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& System::__Enum__ValuesAndNames::__get_Names()  {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& System::__Enum__ValuesAndNames::__get_Names() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW,::Array<::StringW>*>, 0x18>(this);
}
inline ::System::__Enum__ValuesAndNames* System::__Enum__ValuesAndNames::New_ctor(::ArrayW<uint64_t,::Array<uint64_t>*>  values, ::ArrayW<::StringW,::Array<::StringW>*>  names)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::__Enum__ValuesAndNames*>(values, names));
}
inline void System::__Enum__ValuesAndNames::_ctor(::ArrayW<uint64_t,::Array<uint64_t>*>  values, ::ArrayW<::StringW,::Array<::StringW>*>  names)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__Enum__ValuesAndNames*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint64_t,::Array<uint64_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW,::Array<::StringW>*>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, values, names);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
