#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationManager_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__EventHandler_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Runtime/Serialization/zzzz__IObjectReference_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__SafeSerializationEventArgs_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)()>(&::System::Runtime::Serialization::SafeSerializationManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24bce54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::_ctor)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x24bce5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.get_IsActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::SafeSerializationManager::*)()>(&::System::Runtime::Serialization::SafeSerializationManager::get_IsActive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24bd35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "get_IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.CompleteSerialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Object*, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::CompleteSerialization)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x24bd36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "CompleteSerialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.CompleteDeserialization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Object*)>(&::System::Runtime::Serialization::SafeSerializationManager::CompleteDeserialization)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x24bd69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "CompleteDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x24bda3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.System_Runtime_Serialization_IObjectReference_GetRealObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_IObjectReference_GetRealObject)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x24bdaec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "System.Runtime.Serialization.IObjectReference.GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SafeSerializationManager.OnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SafeSerializationManager::*)(::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SafeSerializationManager::OnDeserialized)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24bddac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
constexpr  System::Runtime::Serialization::SafeSerializationManager::operator ::System::Runtime::Serialization::IObjectReference*() noexcept {
return static_cast<::System::Runtime::Serialization::IObjectReference*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  System::Runtime::Serialization::SafeSerializationManager::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr void System::Runtime::Serialization::SafeSerializationManager::__set_m_serializedStates(::System::Collections::Generic::IList_1<::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IList_1<::System::Object*>*, 0x10>(this, std::forward<::System::Collections::Generic::IList_1<::System::Object*>*>(value));
}
constexpr ::System::Collections::Generic::IList_1<::System::Object*>* System::Runtime::Serialization::SafeSerializationManager::__get_m_serializedStates()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::System::Object*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IList_1<::System::Object*>*> System::Runtime::Serialization::SafeSerializationManager::__get_m_serializedStates() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IList_1<::System::Object*>*, 0x10>(this);
}
constexpr void System::Runtime::Serialization::SafeSerializationManager::__set_m_savedSerializationInfo(::System::Runtime::Serialization::SerializationInfo*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x18>(this, std::forward<::System::Runtime::Serialization::SerializationInfo*>(value));
}
constexpr ::System::Runtime::Serialization::SerializationInfo* System::Runtime::Serialization::SafeSerializationManager::__get_m_savedSerializationInfo()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Serialization::SerializationInfo*> System::Runtime::Serialization::SafeSerializationManager::__get_m_savedSerializationInfo() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Serialization::SerializationInfo*, 0x18>(this);
}
constexpr void System::Runtime::Serialization::SafeSerializationManager::__set_m_realObject(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x20>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Serialization::SafeSerializationManager::__get_m_realObject()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Serialization::SafeSerializationManager::__get_m_realObject() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x20>(this);
}
constexpr void System::Runtime::Serialization::SafeSerializationManager::__set_m_realType(::System::RuntimeType*  value)  {
::cordl_internals::setInstanceField<::System::RuntimeType*, 0x28>(this, std::forward<::System::RuntimeType*>(value));
}
constexpr ::System::RuntimeType* System::Runtime::Serialization::SafeSerializationManager::__get_m_realType()  {
return ::cordl_internals::getInstanceField<::System::RuntimeType*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::RuntimeType*> System::Runtime::Serialization::SafeSerializationManager::__get_m_realType() const {
return ::cordl_internals::getInstanceField<::System::RuntimeType*, 0x28>(this);
}
constexpr void System::Runtime::Serialization::SafeSerializationManager::__set_SerializeObjectState(::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*  value)  {
::cordl_internals::setInstanceField<::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*, 0x30>(this, std::forward<::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*>(value));
}
constexpr ::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>* System::Runtime::Serialization::SafeSerializationManager::__get_SerializeObjectState()  {
return ::cordl_internals::getInstanceField<::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*> System::Runtime::Serialization::SafeSerializationManager::__get_SerializeObjectState() const {
return ::cordl_internals::getInstanceField<::System::EventHandler_1<::System::Runtime::Serialization::SafeSerializationEventArgs*>*, 0x30>(this);
}
inline ::System::Runtime::Serialization::SafeSerializationManager* System::Runtime::Serialization::SafeSerializationManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::SafeSerializationManager*>());
}
inline void System::Runtime::Serialization::SafeSerializationManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Runtime::Serialization::SafeSerializationManager* System::Runtime::Serialization::SafeSerializationManager::New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::SafeSerializationManager*>(info, context));
}
inline void System::Runtime::Serialization::SafeSerializationManager::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline bool System::Runtime::Serialization::SafeSerializationManager::get_IsActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "get_IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Runtime::Serialization::SafeSerializationManager::CompleteSerialization(::System::Object*  serializedObject, ::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "CompleteSerialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, serializedObject, info, context);
}
inline void System::Runtime::Serialization::SafeSerializationManager::CompleteDeserialization(::System::Object*  deserializedObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "CompleteDeserialization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, deserializedObject);
}
inline void System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "System.Runtime.Serialization.ISerializable.GetObjectData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, info, context);
}
inline ::System::Object* System::Runtime::Serialization::SafeSerializationManager::System_Runtime_Serialization_IObjectReference_GetRealObject(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "System.Runtime.Serialization.IObjectReference.GetRealObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, context);
}
inline void System::Runtime::Serialization::SafeSerializationManager::OnDeserialized(::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SafeSerializationManager*>::get(),
                            "OnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, context);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
