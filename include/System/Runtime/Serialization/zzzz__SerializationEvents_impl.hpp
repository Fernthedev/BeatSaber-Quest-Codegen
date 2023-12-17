#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEvents_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationEventHandler_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(::System::Type*)>(&::System::Runtime::Serialization::SerializationEvents::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x24b4f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.GetMethodsWithAttribute
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* (::System::Runtime::Serialization::SerializationEvents::*)(::System::Type*, ::System::Type*)>(&::System::Runtime::Serialization::SerializationEvents::GetMethodsWithAttribute)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x24b50b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "GetMethodsWithAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.get_HasOnSerializingEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::SerializationEvents::*)()>(&::System::Runtime::Serialization::SerializationEvents::get_HasOnSerializingEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24b52f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "get_HasOnSerializingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnSerializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SerializationEvents::InvokeOnSerializing)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24b5314;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "InvokeOnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnDeserializing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SerializationEvents::InvokeOnDeserializing)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24b53b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "InvokeOnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::SerializationEvents::InvokeOnDeserialized)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x24b540c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "InvokeOnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.AddOnSerialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEventHandler* (::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*)>(&::System::Runtime::Serialization::SerializationEvents::AddOnSerialized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24b5460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "AddOnSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.AddOnDeserialized
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEventHandler* (::System::Runtime::Serialization::SerializationEvents::*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*)>(&::System::Runtime::Serialization::SerializationEvents::AddOnDeserialized)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x24b56b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "AddOnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.InvokeOnDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Runtime::Serialization::StreamingContext, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*)>(&::System::Runtime::Serialization::SerializationEvents::InvokeOnDelegate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x24b5368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "InvokeOnDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationEvents.AddOnDelegate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationEventHandler* (*)(::System::Object*, ::System::Runtime::Serialization::SerializationEventHandler*, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*)>(&::System::Runtime::Serialization::SerializationEvents::AddOnDelegate)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x24b5474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "AddOnDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Serialization::SerializationEvents::__set__onSerializingMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* System::Runtime::Serialization::SerializationEvents::__get__onSerializingMethods()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> System::Runtime::Serialization::SerializationEvents::__get__onSerializingMethods() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x10>(this);
}
constexpr void System::Runtime::Serialization::SerializationEvents::__set__onSerializedMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* System::Runtime::Serialization::SerializationEvents::__get__onSerializedMethods()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> System::Runtime::Serialization::SerializationEvents::__get__onSerializedMethods() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x18>(this);
}
constexpr void System::Runtime::Serialization::SerializationEvents::__set__onDeserializingMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x20>(this, std::forward<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* System::Runtime::Serialization::SerializationEvents::__get__onDeserializingMethods()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> System::Runtime::Serialization::SerializationEvents::__get__onDeserializingMethods() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x20>(this);
}
constexpr void System::Runtime::Serialization::SerializationEvents::__set__onDeserializedMethods(::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x28>(this, std::forward<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* System::Runtime::Serialization::SerializationEvents::__get__onDeserializedMethods()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*> System::Runtime::Serialization::SerializationEvents::__get__onDeserializedMethods() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, 0x28>(this);
}
inline ::System::Runtime::Serialization::SerializationEvents* System::Runtime::Serialization::SerializationEvents::New_ctor(::System::Type*  t)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::SerializationEvents*>(t));
}
inline void System::Runtime::Serialization::SerializationEvents::_ctor(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, t);
}
inline ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>* System::Runtime::Serialization::SerializationEvents::GetMethodsWithAttribute(::System::Type*  attribute, ::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "GetMethodsWithAttribute",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*, false>(*this, ___internal_method, attribute, t);
}
inline bool System::Runtime::Serialization::SerializationEvents::get_HasOnSerializingEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "get_HasOnSerializingEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnSerializing(::System::Object*  obj, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "InvokeOnSerializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj, context);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnDeserializing(::System::Object*  obj, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "InvokeOnDeserializing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj, context);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnDeserialized(::System::Object*  obj, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "InvokeOnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, obj, context);
}
inline ::System::Runtime::Serialization::SerializationEventHandler* System::Runtime::Serialization::SerializationEvents::AddOnSerialized(::System::Object*  obj, ::System::Runtime::Serialization::SerializationEventHandler*  handler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "AddOnSerialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEventHandler*, false>(*this, ___internal_method, obj, handler);
}
inline ::System::Runtime::Serialization::SerializationEventHandler* System::Runtime::Serialization::SerializationEvents::AddOnDeserialized(::System::Object*  obj, ::System::Runtime::Serialization::SerializationEventHandler*  handler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "AddOnDeserialized",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEventHandler*, false>(*this, ___internal_method, obj, handler);
}
inline void System::Runtime::Serialization::SerializationEvents::InvokeOnDelegate(::System::Object*  obj, ::System::Runtime::Serialization::StreamingContext  context, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*  methods)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "InvokeOnDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj, context, methods);
}
inline ::System::Runtime::Serialization::SerializationEventHandler* System::Runtime::Serialization::SerializationEvents::AddOnDelegate(::System::Object*  obj, ::System::Runtime::Serialization::SerializationEventHandler*  handler, ::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*  methods)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::SerializationEvents*>::get(),
                            "AddOnDelegate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationEventHandler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Reflection::MethodInfo*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationEventHandler*, false>(nullptr, ___internal_method, obj, handler, methods);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
