#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__BinaryMethodCall_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz____BinaryWriter_def.hpp"
#include "System/Runtime/Serialization/Formatters/Binary/zzzz__MessageEnum_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall.Write
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Write)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x24c1fac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall.Dump
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)()>(&::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Dump)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24c20f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(),
                            "Dump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::*)()>(&::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24c20f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_methodName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_methodName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_methodName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_typeName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_typeName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_typeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_args(::ArrayW<::System::Object*,::Array<::System::Object*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x20>(this, std::forward<::ArrayW<::System::Object*,::Array<::System::Object*>*>>(value));
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*>& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_args()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x20>(this);
}
constexpr ::ArrayW<::System::Object*,::Array<::System::Object*>*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_args() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Object*,::Array<::System::Object*>*>, 0x20>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_callContext(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x28>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_callContext()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_callContext() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x28>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_argTypes(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x30>(this, std::forward<::ArrayW<::System::Type*,::Array<::System::Type*>*>>(value));
}
constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_argTypes()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x30>(this);
}
constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_argTypes() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x30>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_bArgsPrimitive(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_bArgsPrimitive()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_bArgsPrimitive() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__set_messageEnum(::System::Runtime::Serialization::Formatters::Binary::MessageEnum  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::Formatters::Binary::MessageEnum, 0x3c>(this, std::forward<::System::Runtime::Serialization::Formatters::Binary::MessageEnum>(value));
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_messageEnum()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::MessageEnum, 0x3c>(this);
}
constexpr ::System::Runtime::Serialization::Formatters::Binary::MessageEnum const& System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::__get_messageEnum() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::Formatters::Binary::MessageEnum, 0x3c>(this);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*  sout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(),
                            "Write",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sout);
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::Dump()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(),
                            "Dump",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall* System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>());
}
inline void System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::Formatters::Binary::BinaryMethodCall*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
