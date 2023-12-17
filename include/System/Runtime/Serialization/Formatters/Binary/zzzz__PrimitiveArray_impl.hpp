#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__PrimitiveArray_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__InternalPrimitiveTypeE_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Array*)>(&::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x24cdc8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Array*)>(&::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::Init)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x24d61c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray.SetValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::*)(::StringW, int32_t)>(&::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::SetValue)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x24ce594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_code(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x10>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_code()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x10>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_code() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, 0x10>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_booleanA(::ArrayW<bool,::Array<bool>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<bool,::Array<bool>*>, 0x18>(this, std::forward<::ArrayW<bool,::Array<bool>*>>(value));
}
constexpr ::ArrayW<bool,::Array<bool>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_booleanA()  {
return ::cordl_internals::getInstanceField<::ArrayW<bool,::Array<bool>*>, 0x18>(this);
}
constexpr ::ArrayW<bool,::Array<bool>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_booleanA() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool,::Array<bool>*>, 0x18>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_charA(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x20>(this, std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_charA()  {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x20>(this);
}
constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_charA() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t,::Array<char16_t>*>, 0x20>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_doubleA(::ArrayW<double_t,::Array<double_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<double_t,::Array<double_t>*>, 0x28>(this, std::forward<::ArrayW<double_t,::Array<double_t>*>>(value));
}
constexpr ::ArrayW<double_t,::Array<double_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_doubleA()  {
return ::cordl_internals::getInstanceField<::ArrayW<double_t,::Array<double_t>*>, 0x28>(this);
}
constexpr ::ArrayW<double_t,::Array<double_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_doubleA() const {
return ::cordl_internals::getInstanceField<::ArrayW<double_t,::Array<double_t>*>, 0x28>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_int16A(::ArrayW<int16_t,::Array<int16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int16_t,::Array<int16_t>*>, 0x30>(this, std::forward<::ArrayW<int16_t,::Array<int16_t>*>>(value));
}
constexpr ::ArrayW<int16_t,::Array<int16_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_int16A()  {
return ::cordl_internals::getInstanceField<::ArrayW<int16_t,::Array<int16_t>*>, 0x30>(this);
}
constexpr ::ArrayW<int16_t,::Array<int16_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_int16A() const {
return ::cordl_internals::getInstanceField<::ArrayW<int16_t,::Array<int16_t>*>, 0x30>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_int32A(::ArrayW<int32_t,::Array<int32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x38>(this, std::forward<::ArrayW<int32_t,::Array<int32_t>*>>(value));
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_int32A()  {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x38>(this);
}
constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_int32A() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t,::Array<int32_t>*>, 0x38>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_int64A(::ArrayW<int64_t,::Array<int64_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x40>(this, std::forward<::ArrayW<int64_t,::Array<int64_t>*>>(value));
}
constexpr ::ArrayW<int64_t,::Array<int64_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_int64A()  {
return ::cordl_internals::getInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x40>(this);
}
constexpr ::ArrayW<int64_t,::Array<int64_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_int64A() const {
return ::cordl_internals::getInstanceField<::ArrayW<int64_t,::Array<int64_t>*>, 0x40>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_sbyteA(::ArrayW<int8_t,::Array<int8_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<int8_t,::Array<int8_t>*>, 0x48>(this, std::forward<::ArrayW<int8_t,::Array<int8_t>*>>(value));
}
constexpr ::ArrayW<int8_t,::Array<int8_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_sbyteA()  {
return ::cordl_internals::getInstanceField<::ArrayW<int8_t,::Array<int8_t>*>, 0x48>(this);
}
constexpr ::ArrayW<int8_t,::Array<int8_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_sbyteA() const {
return ::cordl_internals::getInstanceField<::ArrayW<int8_t,::Array<int8_t>*>, 0x48>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_singleA(::ArrayW<float_t,::Array<float_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x50>(this, std::forward<::ArrayW<float_t,::Array<float_t>*>>(value));
}
constexpr ::ArrayW<float_t,::Array<float_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_singleA()  {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x50>(this);
}
constexpr ::ArrayW<float_t,::Array<float_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_singleA() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t,::Array<float_t>*>, 0x50>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_uint16A(::ArrayW<uint16_t,::Array<uint16_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint16_t,::Array<uint16_t>*>, 0x58>(this, std::forward<::ArrayW<uint16_t,::Array<uint16_t>*>>(value));
}
constexpr ::ArrayW<uint16_t,::Array<uint16_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_uint16A()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint16_t,::Array<uint16_t>*>, 0x58>(this);
}
constexpr ::ArrayW<uint16_t,::Array<uint16_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_uint16A() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint16_t,::Array<uint16_t>*>, 0x58>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_uint32A(::ArrayW<uint32_t,::Array<uint32_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x60>(this, std::forward<::ArrayW<uint32_t,::Array<uint32_t>*>>(value));
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_uint32A()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x60>(this);
}
constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_uint32A() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint32_t,::Array<uint32_t>*>, 0x60>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__set_uint64A(::ArrayW<uint64_t,::Array<uint64_t>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<uint64_t,::Array<uint64_t>*>, 0x68>(this, std::forward<::ArrayW<uint64_t,::Array<uint64_t>*>>(value));
}
constexpr ::ArrayW<uint64_t,::Array<uint64_t>*>& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_uint64A()  {
return ::cordl_internals::getInstanceField<::ArrayW<uint64_t,::Array<uint64_t>*>, 0x68>(this);
}
constexpr ::ArrayW<uint64_t,::Array<uint64_t>*> const& System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::__get_uint64A() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint64_t,::Array<uint64_t>*>, 0x68>(this);
}
inline ::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::New_ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code, ::System::Array*  array)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>(code, array));
}
inline void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::_ctor(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code, ::System::Array*  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, code, array);
}
inline void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::Init(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE  code, ::System::Array*  array)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Array*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, code, array);
}
inline void System::Runtime::Serialization::Formatters::Binary::PrimitiveArray::SetValue(::StringW  value, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray*>::get(),
                            "SetValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, index);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
