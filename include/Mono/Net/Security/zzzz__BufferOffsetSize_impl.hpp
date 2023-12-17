#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize.get_EndOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::BufferOffsetSize::*)()>(&::Mono::Net::Security::BufferOffsetSize::get_EndOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x281dda8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::BufferOffsetSize*>::get(),
                            "get_EndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize.get_Remaining
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Net::Security::BufferOffsetSize::*)()>(&::Mono::Net::Security::BufferOffsetSize::get_Remaining)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x281ddb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::BufferOffsetSize*>::get(),
                            "get_Remaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Net::Security::BufferOffsetSize::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Net::Security::BufferOffsetSize::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x281dddc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::BufferOffsetSize*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Net::Security::BufferOffsetSize.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Net::Security::BufferOffsetSize::*)()>(&::Mono::Net::Security::BufferOffsetSize::ToString)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x281dee0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::BufferOffsetSize*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::BufferOffsetSize*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
constexpr void Mono::Net::Security::BufferOffsetSize::__set_Buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& Mono::Net::Security::BufferOffsetSize::__get_Buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& Mono::Net::Security::BufferOffsetSize::__get_Buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr void Mono::Net::Security::BufferOffsetSize::__set_Offset(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::BufferOffsetSize::__get_Offset()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& Mono::Net::Security::BufferOffsetSize::__get_Offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void Mono::Net::Security::BufferOffsetSize::__set_Size(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::BufferOffsetSize::__get_Size()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& Mono::Net::Security::BufferOffsetSize::__get_Size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr void Mono::Net::Security::BufferOffsetSize::__set_TotalBytes(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Net::Security::BufferOffsetSize::__get_TotalBytes()  {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr int32_t const& Mono::Net::Security::BufferOffsetSize::__get_TotalBytes() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this);
}
constexpr void Mono::Net::Security::BufferOffsetSize::__set_Complete(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x24>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Net::Security::BufferOffsetSize::__get_Complete()  {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
constexpr bool const& Mono::Net::Security::BufferOffsetSize::__get_Complete() const {
return ::cordl_internals::getInstanceField<bool, 0x24>(this);
}
inline int32_t Mono::Net::Security::BufferOffsetSize::get_EndOffset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::BufferOffsetSize*>::get(),
                            "get_EndOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline int32_t Mono::Net::Security::BufferOffsetSize::get_Remaining()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::BufferOffsetSize*>::get(),
                            "get_Remaining",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline ::Mono::Net::Security::BufferOffsetSize* Mono::Net::Security::BufferOffsetSize::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Net::Security::BufferOffsetSize*>(buffer, offset, size));
}
inline void Mono::Net::Security::BufferOffsetSize::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::BufferOffsetSize*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, offset, size);
}
inline ::StringW Mono::Net::Security::BufferOffsetSize::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Net::Security::BufferOffsetSize*>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
