#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryMethodReturn_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::*)()>(&::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24c21b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Write)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x24c21c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn.Dump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::*)()>(&::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24c2308;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(),
                            "Dump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_returnValue(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x10>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_returnValue()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_returnValue() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x10>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_args(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_args()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this);
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_args() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x18>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_callContext(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_callContext()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_callContext() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_argTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x28>(this, std::forward<::ArrayW<::System::Type*,::Array<::System::Type*>*>>(value));
}
constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_argTypes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x28>(this);
}
constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_argTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x28>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_bArgsPrimitive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x30>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_bArgsPrimitive()  {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_bArgsPrimitive() const {
return ::cordl_internals::getInstanceField<bool, 0x30>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_messageEnum(::System::Runtime::Serialization::Formatters::Binary::MessageEnum  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::MessageEnum, 0x34>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::MessageEnum>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_messageEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::MessageEnum, 0x34>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_messageEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::MessageEnum, 0x34>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__set_returnType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x38>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_returnType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::__get_returnType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x38>(this);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::setStaticF_instanceOfVoid(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "instanceOfVoid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::getStaticF_instanceOfVoid()  {
return ::cordl_internals::getStaticField<::System::Object*, "instanceOfVoid", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get>();
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn* System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*  sout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Dump()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*>::get(),
                            "Dump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
