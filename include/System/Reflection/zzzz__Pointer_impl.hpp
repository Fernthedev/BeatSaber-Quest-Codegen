#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__Pointer_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: ::System::Reflection::Pointer._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::Pointer::*)(::cordl_internals::Ptr<void>, ::System::Type*)>(&::System::Reflection::Pointer::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24e9808;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Pointer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Pointer.Box
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::cordl_internals::Ptr<void>, ::System::Type*)>(&::System::Reflection::Pointer::Box)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x24e9834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Pointer*>::get(),
                            "Box",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Pointer.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::Pointer::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::Pointer::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x24e99bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Pointer*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Reflection::Pointer::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr void System::Reflection::Pointer::__set__ptr(::cordl_internals::Ptr<void>  value)  {
::cordl_internals::setInstanceField<::cordl_internals::Ptr<void>, 0x10>(this, std::forward<::cordl_internals::Ptr<void>>(value));
}
constexpr ::cordl_internals::Ptr<void>& System::Reflection::Pointer::__get__ptr()  {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<void>, 0x10>(this);
}
constexpr ::cordl_internals::Ptr<void> const& System::Reflection::Pointer::__get__ptr() const {
return ::cordl_internals::getInstanceField<::cordl_internals::Ptr<void>, 0x10>(this);
}
constexpr void System::Reflection::Pointer::__set__ptrType(::System::Type*  value)  {
::cordl_internals::setInstanceField<::System::Type*, 0x18>(this, std::forward<::System::Type*>(value));
}
constexpr ::System::Type* System::Reflection::Pointer::__get__ptrType()  {
return ::cordl_internals::getInstanceField<::System::Type*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> System::Reflection::Pointer::__get__ptrType() const {
return ::cordl_internals::getInstanceField<::System::Type*, 0x18>(this);
}
inline ::System::Reflection::Pointer* System::Reflection::Pointer::New_ctor(::cordl_internals::Ptr<void>  ptr, ::System::Type*  ptrType)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::Pointer*>(ptr, ptrType));
}
inline void System::Reflection::Pointer::_ctor(::cordl_internals::Ptr<void>  ptr, ::System::Type*  ptrType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Pointer*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ptr, ptrType);
}
inline ::System::Object* System::Reflection::Pointer::Box(::cordl_internals::Ptr<void>  ptr, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Pointer*>::get(),
                            "Box",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, ptr, type);
}
inline void System::Reflection::Pointer::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::Pointer*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
