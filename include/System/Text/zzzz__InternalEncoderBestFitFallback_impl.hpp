#pragma once
#include "System/Text/zzzz__EncoderFallback_impl.hpp"
#include "System/Text/zzzz__InternalEncoderBestFitFallback_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::InternalEncoderBestFitFallback::*)(::System::Text::Encoding*)>(&::System::Text::InternalEncoderBestFitFallback::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26333b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.CreateFallbackBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::EncoderFallbackBuffer* (::System::Text::InternalEncoderBestFitFallback::*)()>(&::System::Text::InternalEncoderBestFitFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x26333e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.get_MaxCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::InternalEncoderBestFitFallback::*)()>(&::System::Text::InternalEncoderBestFitFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2633568;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::InternalEncoderBestFitFallback::*)(::System::Object*)>(&::System::Text::InternalEncoderBestFitFallback::Equals)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2633570;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalEncoderBestFitFallback.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::InternalEncoderBestFitFallback::*)()>(&::System::Text::InternalEncoderBestFitFallback::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2633634;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void System::Text::InternalEncoderBestFitFallback::__set__encoding(::System::Text::Encoding*  value)  {
::cordl_internals::setInstanceField<::System::Text::Encoding*, 0x10>(this, std::forward<::System::Text::Encoding*>(value));
}
constexpr ::System::Text::Encoding* System::Text::InternalEncoderBestFitFallback::__get__encoding()  {
return ::cordl_internals::getInstanceField<::System::Text::Encoding*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> System::Text::InternalEncoderBestFitFallback::__get__encoding() const {
return ::cordl_internals::getInstanceField<::System::Text::Encoding*, 0x10>(this);
}
constexpr void System::Text::InternalEncoderBestFitFallback::__set__arrayBestFit(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x18>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::Text::InternalEncoderBestFitFallback::__get__arrayBestFit()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x18>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::Text::InternalEncoderBestFitFallback::__get__arrayBestFit() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x18>(this);
}
inline ::System::Text::InternalEncoderBestFitFallback* System::Text::InternalEncoderBestFitFallback::New_ctor(::System::Text::Encoding*  encoding)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Text::InternalEncoderBestFitFallback*>(encoding));
}
inline void System::Text::InternalEncoderBestFitFallback::_ctor(::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encoding);
}
inline ::System::Text::EncoderFallbackBuffer* System::Text::InternalEncoderBestFitFallback::CreateFallbackBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                            "CreateFallbackBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::EncoderFallbackBuffer*, false>(*this, ___internal_method);
}
inline int32_t System::Text::InternalEncoderBestFitFallback::get_MaxCharCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                            "get_MaxCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool System::Text::InternalEncoderBestFitFallback::Equals(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline int32_t System::Text::InternalEncoderBestFitFallback::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalEncoderBestFitFallback*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
