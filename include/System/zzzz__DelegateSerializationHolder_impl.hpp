#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DelegateSerializationHolder_def.hpp"
#include "System/zzzz__DelegateSerializationHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: ::System::__DelegateSerializationHolder__DelegateEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__DelegateSerializationHolder__DelegateEntry::*)(::System::Delegate*, ::StringW)>(&::System::__DelegateSerializationHolder__DelegateEntry::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x25f9f50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DelegateSerializationHolder__DelegateEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__DelegateSerializationHolder__DelegateEntry.DeserializeDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Delegate* (::System::__DelegateSerializationHolder__DelegateEntry::*)(::System::Runtime::Serialization::SerializationInfo*, int32_t)>(&::System::__DelegateSerializationHolder__DelegateEntry::DeserializeDelegate)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x25f9cd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DelegateSerializationHolder__DelegateEntry*>::get(),
                            "DeserializeDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__set_type(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::__DelegateSerializationHolder__DelegateEntry::__get_type()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::__DelegateSerializationHolder__DelegateEntry::__get_type() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__set_assembly(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::__DelegateSerializationHolder__DelegateEntry::__get_assembly()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::__DelegateSerializationHolder__DelegateEntry::__get_assembly() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__set_target(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::__DelegateSerializationHolder__DelegateEntry::__get_target()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::__DelegateSerializationHolder__DelegateEntry::__get_target() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__set_targetTypeAssembly(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::__DelegateSerializationHolder__DelegateEntry::__get_targetTypeAssembly()  {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr ::StringW const& System::__DelegateSerializationHolder__DelegateEntry::__get_targetTypeAssembly() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this);
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__set_targetTypeName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::__DelegateSerializationHolder__DelegateEntry::__get_targetTypeName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr ::StringW const& System::__DelegateSerializationHolder__DelegateEntry::__get_targetTypeName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this);
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__set_methodName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::__DelegateSerializationHolder__DelegateEntry::__get_methodName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& System::__DelegateSerializationHolder__DelegateEntry::__get_methodName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void System::__DelegateSerializationHolder__DelegateEntry::__set_delegateEntry(::System::__DelegateSerializationHolder__DelegateEntry*  value)  {
::cordl_internals::setInstanceField<::System::__DelegateSerializationHolder__DelegateEntry*, 0x40>(this, std::forward<::System::__DelegateSerializationHolder__DelegateEntry*>(value));
}
constexpr ::System::__DelegateSerializationHolder__DelegateEntry* System::__DelegateSerializationHolder__DelegateEntry::__get_delegateEntry()  {
return ::cordl_internals::getInstanceField<::System::__DelegateSerializationHolder__DelegateEntry*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::__DelegateSerializationHolder__DelegateEntry*> System::__DelegateSerializationHolder__DelegateEntry::__get_delegateEntry() const {
return ::cordl_internals::getInstanceField<::System::__DelegateSerializationHolder__DelegateEntry*, 0x40>(this);
}
inline ::System::__DelegateSerializationHolder__DelegateEntry* System::__DelegateSerializationHolder__DelegateEntry::New_ctor(::System::Delegate*  del, ::StringW  targetLabel)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::__DelegateSerializationHolder__DelegateEntry*>(del, targetLabel));
}
inline void System::__DelegateSerializationHolder__DelegateEntry::_ctor(::System::Delegate*  del, ::StringW  targetLabel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DelegateSerializationHolder__DelegateEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, del, targetLabel);
}
inline ::System::Delegate* System::__DelegateSerializationHolder__DelegateEntry::DeserializeDelegate(::System::Runtime::Serialization::SerializationInfo*  info, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__DelegateSerializationHolder__DelegateEntry*>::get(),
                            "DeserializeDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*, false>(*this, ___internal_method, info, index);
}
//  Writing Method size for method: ::System::DelegateSerializationHolder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DelegateSerializationHolder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::DelegateSerializationHolder::_ctor)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x25f9ad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DelegateSerializationHolder.GetDelegateData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Delegate*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::DelegateSerializationHolder::GetDelegateData)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x25f96b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(),
                            "GetDelegateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DelegateSerializationHolder.GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::DelegateSerializationHolder::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::DelegateSerializationHolder::GetObjectData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x25fa06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DelegateSerializationHolder.GetRealObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::DelegateSerializationHolder::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::DelegateSerializationHolder::GetRealObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x25fa0ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(),
                            "GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::DelegateSerializationHolder::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr  System::DelegateSerializationHolder::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
constexpr void System::DelegateSerializationHolder::__set__delegate(::System::Delegate*  value)  {
::cordl_internals::setInstanceField<::System::Delegate*, 0x10>(this, std::forward<::System::Delegate*>(value));
}
constexpr ::System::Delegate* System::DelegateSerializationHolder::__get__delegate()  {
return ::cordl_internals::getInstanceField<::System::Delegate*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Delegate*> System::DelegateSerializationHolder::__get__delegate() const {
return ::cordl_internals::getInstanceField<::System::Delegate*, 0x10>(this);
}
inline ::System::DelegateSerializationHolder* System::DelegateSerializationHolder::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  ctx)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::DelegateSerializationHolder*>(info, ctx));
}
inline void System::DelegateSerializationHolder::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, ctx);
}
inline void System::DelegateSerializationHolder::GetDelegateData(::System::Delegate*  instance, ::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  ctx)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(),
                            "GetDelegateData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Delegate*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instance, info, ctx);
}
inline void System::DelegateSerializationHolder::GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(),
                            "GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline ::System::Object* System::DelegateSerializationHolder::GetRealObject(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::DelegateSerializationHolder*>::get(),
                            "GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
