#pragma once
#include "System/Text/zzzz__DecoderFallback_impl.hpp"
#include "System/Text/zzzz__InternalDecoderBestFitFallback_def.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Text/zzzz__Encoding_def.hpp"
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::InternalDecoderBestFitFallback::*)(::System::Text::Encoding*)>(&::System::Text::InternalDecoderBestFitFallback::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2630b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.CreateFallbackBuffer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::DecoderFallbackBuffer* (::System::Text::InternalDecoderBestFitFallback::*)()>(&::System::Text::InternalDecoderBestFitFallback::CreateFallbackBuffer)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2630b40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.get_MaxCharCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::InternalDecoderBestFitFallback::*)()>(&::System::Text::InternalDecoderBestFitFallback::get_MaxCharCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2630cc8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::InternalDecoderBestFitFallback::*)(::System::Object*)>(&::System::Text::InternalDecoderBestFitFallback::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2630cd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::InternalDecoderBestFitFallback.GetHashCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::InternalDecoderBestFitFallback::*)()>(&::System::Text::InternalDecoderBestFitFallback::GetHashCode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2630d78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr void System::Text::InternalDecoderBestFitFallback::__set__encoding(::System::Text::Encoding*  value)  {
::cordl_internals::setInstanceField<::System::Text::Encoding*, 0x10>(this, std::forward<::System::Text::Encoding*>(value));
}
constexpr ::System::Text::Encoding* System::Text::InternalDecoderBestFitFallback::__get__encoding()  {
return ::cordl_internals::getInstanceField<::System::Text::Encoding*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> System::Text::InternalDecoderBestFitFallback::__get__encoding() const {
return ::cordl_internals::getInstanceField<::System::Text::Encoding*, 0x10>(this);
}
constexpr void System::Text::InternalDecoderBestFitFallback::__set__arrayBestFit(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x18>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::Text::InternalDecoderBestFitFallback::__get__arrayBestFit()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x18>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::Text::InternalDecoderBestFitFallback::__get__arrayBestFit() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x18>(this);
}
constexpr void System::Text::InternalDecoderBestFitFallback::__set__cReplacement(char16_t  value)  {
::cordl_internals::setInstanceField<char16_t, 0x20>(this, std::forward<char16_t>(value));
}
constexpr char16_t& System::Text::InternalDecoderBestFitFallback::__get__cReplacement()  {
return ::cordl_internals::getInstanceField<char16_t, 0x20>(this);
}
constexpr char16_t const& System::Text::InternalDecoderBestFitFallback::__get__cReplacement() const {
return ::cordl_internals::getInstanceField<char16_t, 0x20>(this);
}
inline ::System::Text::InternalDecoderBestFitFallback* System::Text::InternalDecoderBestFitFallback::New_ctor(::System::Text::Encoding*  encoding)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Text::InternalDecoderBestFitFallback*>(encoding));
}
inline void System::Text::InternalDecoderBestFitFallback::_ctor(::System::Text::Encoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::Encoding*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, encoding);
}
inline ::System::Text::DecoderFallbackBuffer* System::Text::InternalDecoderBestFitFallback::CreateFallbackBuffer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                            "CreateFallbackBuffer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Text::DecoderFallbackBuffer*, false>(*this, ___internal_method);
}
inline int32_t System::Text::InternalDecoderBestFitFallback::get_MaxCharCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                            "get_MaxCharCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline bool System::Text::InternalDecoderBestFitFallback::Equals(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, value);
}
inline int32_t System::Text::InternalDecoderBestFitFallback::GetHashCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::InternalDecoderBestFitFallback*>::get(),
                            "GetHashCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
