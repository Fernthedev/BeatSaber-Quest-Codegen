#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__DynamicPropertyCollection_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__IMessage_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicProperty_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__DynamicPropertyCollection_def.hpp"
#include "System/Runtime/Remoting/Contexts/zzzz__IDynamicMessageSink_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::*)()>(&::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249eefc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__set_Property(::System::Runtime::Remoting::Contexts::IDynamicProperty*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Contexts::IDynamicProperty*, 0x10>(this, std::forward<::System::Runtime::Remoting::Contexts::IDynamicProperty*>(value));
}
constexpr ::System::Runtime::Remoting::Contexts::IDynamicProperty* System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__get_Property()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Contexts::IDynamicProperty*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::IDynamicProperty*> System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__get_Property() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Contexts::IDynamicProperty*, 0x10>(this);
}
constexpr void System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__set_Sink(::System::Runtime::Remoting::Contexts::IDynamicMessageSink*  value)  {
::cordl_internals::setInstanceField<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*, 0x18>(this, std::forward<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*>(value));
}
constexpr ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__get_Sink()  {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*> System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::__get_Sink() const {
return ::cordl_internals::getInstanceField<::System::Runtime::Remoting::Contexts::IDynamicMessageSink*, 0x18>(this);
}
inline ::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg* System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg*>());
}
inline void System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::__DynamicPropertyCollection__DynamicPropertyReg*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.get_HasProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)()>(&::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::get_HasProperties)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x249c7ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            "get_HasProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.RegisterDynamicProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::System::Runtime::Remoting::Contexts::IDynamicProperty*)>(&::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::RegisterDynamicProperty)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x249ca38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            "RegisterDynamicProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::IDynamicProperty*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.UnregisterDynamicProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::StringW)>(&::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::UnregisterDynamicProperty)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x249cd9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            "UnregisterDynamicProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.NotifyMessage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(bool, ::System::Runtime::Remoting::Messaging::IMessage*, bool, bool)>(&::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::NotifyMessage)> {
  constexpr static std::size_t size = 0x65c;
  constexpr static std::size_t addrs = 0x249d07c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            "NotifyMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection.FindProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)(::StringW)>(&::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::FindProperty)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x249ed98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            "FindProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::*)()>(&::System::Runtime::Remoting::Contexts::DynamicPropertyCollection::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x249cf14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Runtime::Remoting::Contexts::DynamicPropertyCollection::__set__properties(::System::Collections::ArrayList*  value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList*, 0x10>(this, std::forward<::System::Collections::ArrayList*>(value));
}
constexpr ::System::Collections::ArrayList* System::Runtime::Remoting::Contexts::DynamicPropertyCollection::__get__properties()  {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> System::Runtime::Remoting::Contexts::DynamicPropertyCollection::__get__properties() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList*, 0x10>(this);
}
inline bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::get_HasProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            "get_HasProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::RegisterDynamicProperty(::System::Runtime::Remoting::Contexts::IDynamicProperty*  prop)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            "RegisterDynamicProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Contexts::IDynamicProperty*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, prop);
}
inline bool System::Runtime::Remoting::Contexts::DynamicPropertyCollection::UnregisterDynamicProperty(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            "UnregisterDynamicProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, name);
}
inline void System::Runtime::Remoting::Contexts::DynamicPropertyCollection::NotifyMessage(bool  start, ::System::Runtime::Remoting::Messaging::IMessage*  msg, bool  client_site, bool  async)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            "NotifyMessage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Messaging::IMessage*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, start, msg, client_site, async);
}
inline int32_t System::Runtime::Remoting::Contexts::DynamicPropertyCollection::FindProperty(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            "FindProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, name);
}
inline ::System::Runtime::Remoting::Contexts::DynamicPropertyCollection* System::Runtime::Remoting::Contexts::DynamicPropertyCollection::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>());
}
inline void System::Runtime::Remoting::Contexts::DynamicPropertyCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Contexts::DynamicPropertyCollection*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
