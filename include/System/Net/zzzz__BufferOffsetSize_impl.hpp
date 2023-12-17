#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__BufferOffsetSize_def.hpp"
//  Writing Method size for method: ::System::Net::BufferOffsetSize._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::BufferOffsetSize::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, bool)>(&::System::Net::BufferOffsetSize::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x29a5d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferOffsetSize*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::BufferOffsetSize._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::BufferOffsetSize::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, bool)>(&::System::Net::BufferOffsetSize::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29a5dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferOffsetSize*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Net::BufferOffsetSize::__set_Buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this, std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& System::Net::BufferOffsetSize::__get_Buffer()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& System::Net::BufferOffsetSize::__get_Buffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t,::Array<uint8_t>*>, 0x10>(this);
}
constexpr void System::Net::BufferOffsetSize::__set_Offset(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::BufferOffsetSize::__get_Offset()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& System::Net::BufferOffsetSize::__get_Offset() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void System::Net::BufferOffsetSize::__set_Size(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Net::BufferOffsetSize::__get_Size()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& System::Net::BufferOffsetSize::__get_Size() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
inline ::System::Net::BufferOffsetSize* System::Net::BufferOffsetSize::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, bool  copyBuffer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::BufferOffsetSize*>(buffer, offset, size, copyBuffer));
}
inline void System::Net::BufferOffsetSize::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, bool  copyBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferOffsetSize*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, offset, size, copyBuffer);
}
inline ::System::Net::BufferOffsetSize* System::Net::BufferOffsetSize::New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, bool  copyBuffer)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Net::BufferOffsetSize*>(buffer, copyBuffer));
}
inline void System::Net::BufferOffsetSize::_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, bool  copyBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::BufferOffsetSize*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t,::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, buffer, copyBuffer);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
