#pragma once
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_impl.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADMethodReturnMessage_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__CADArgHolder_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMethodReturnMessage_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* (*)(::System::Runtime::Remoting::Messaging::IMessage*)>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x24aa504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*)>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::_ctor)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x24aa594;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetArguments
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArguments)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x24aa910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "GetArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*,::Array<::System::Object*>*> (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArgs)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24aaa50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "GetArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetReturnValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetReturnValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x24aaa60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "GetReturnValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.GetException
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)(::System::Collections::ArrayList*)>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetException)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x24aaa70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "GetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage.get_PropertiesCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::*)()>(&::System::Runtime::Remoting::Messaging::CADMethodReturnMessage::get_PropertiesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24aab14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "get_PropertiesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__set__returnValue(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x38>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__get__returnValue()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__get__returnValue() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x38>(this);
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__set__exception(::System::Runtime::Remoting::Messaging::CADArgHolder*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Messaging::CADArgHolder*, 0x40>(this, std::forward<::System::Runtime::Remoting::Messaging::CADArgHolder*>(value));
}
constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__get__exception()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::CADArgHolder*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CADArgHolder*> System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__get__exception() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Messaging::CADArgHolder*, 0x40>(this);
}
constexpr void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__set__sig(::ArrayW<::System::Type*,::Array<::System::Type*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x48>(this, std::forward<::ArrayW<::System::Type*,::Array<::System::Type*>*>>(value));
}
constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*>& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__get__sig()  {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x48>(this);
}
constexpr ::ArrayW<::System::Type*,::Array<::System::Type*>*> const& System::Runtime::Remoting::Messaging::CADMethodReturnMessage::__get__sig() const {
return ::cordl_internals::getInstanceField<::ArrayW<::System::Type*,::Array<::System::Type*>*>, 0x48>(this);
}
inline ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::Create(::System::Runtime::Remoting::Messaging::IMessage*  callMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*, false>(nullptr, ___internal_method, callMsg);
}
inline ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::New_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*  retMsg)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>(retMsg));
}
inline void System::Runtime::Remoting::Messaging::CADMethodReturnMessage::_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage*  retMsg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMethodReturnMessage*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, retMsg);
}
inline ::System::Collections::ArrayList* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArguments()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "GetArguments",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*, false>(*this, ___internal_method);
}
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetArgs(::System::Collections::ArrayList*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "GetArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*,::Array<::System::Object*>*>, false>(*this, ___internal_method, args);
}
inline ::System::Object* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetReturnValue(::System::Collections::ArrayList*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "GetReturnValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method, args);
}
inline ::System::Exception* System::Runtime::Remoting::Messaging::CADMethodReturnMessage::GetException(::System::Collections::ArrayList*  args)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "GetException",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*, false>(*this, ___internal_method, args);
}
inline int32_t System::Runtime::Remoting::Messaging::CADMethodReturnMessage::get_PropertiesCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*>::get(),
                            "get_PropertiesCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
