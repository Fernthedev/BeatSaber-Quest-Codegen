#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__NativeInputRuntime_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__NativeInputRuntime_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
#include "UnityEngine/zzzz__ScreenOrientation_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateDelegate_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputUpdateType_def.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputEventBuffer_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0::*)()>(&::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af122c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0._set_onUpdate_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0::*)(::UnityEngineInternal::Input::NativeInputUpdateType, ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer>)>(&::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0::_set_onUpdate_b__0)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2af1968;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0*>::get(),
                            "<set_onUpdate>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0::__set_value(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*, 0x10>(this, std::forward<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0::__get_value()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*> UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0::__get_value() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*, 0x10>(this);
}
inline ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0* UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0*>());
}
inline void UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0::_set_onUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType  updateType, ::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer>  eventBufferPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass7_0*>::get(),
                            "<set_onUpdate>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngineInternal::Input::NativeInputEventBuffer>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, updateType, eventBufferPtr);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0::*)()>(&::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af134c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0._set_onBeforeUpdate_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0::*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0::_set_onBeforeUpdate_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2af1b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0*>::get(),
                            "<set_onBeforeUpdate>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0::__set_value(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*, 0x10>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0::__get_value()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*> UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0::__get_value() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*, 0x10>(this);
}
inline ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0* UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0*>());
}
inline void UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0::_set_onBeforeUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType  updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass10_0*>::get(),
                            "<set_onBeforeUpdate>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, updateType);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0::*)()>(&::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af146c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0._set_onShouldRunUpdate_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0::*)(::UnityEngineInternal::Input::NativeInputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0::_set_onShouldRunUpdate_b__0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2af1b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0*>::get(),
                            "<set_onShouldRunUpdate>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0::__set_value(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*, 0x10>(this, std::forward<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*>(value));
}
constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>* UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0::__get_value()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*> UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0::__get_value() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*, 0x10>(this);
}
inline ::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0* UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0*>());
}
inline void UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0::_set_onShouldRunUpdate_b__0(::UnityEngineInternal::Input::NativeInputUpdateType  updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__NativeInputRuntime____c__DisplayClass13_0*>::get(),
                            "<set_onShouldRunUpdate>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::Input::NativeInputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, updateType);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.AllocateDeviceId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::AllocateDeviceId)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2af0f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "AllocateDeviceId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2af0f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.QueueEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::QueueEvent)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2af0fdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "QueueEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.DeviceCommand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(int32_t, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::DeviceCommand)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2af1048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "DeviceCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af1114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2af111c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onBeforeUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af1234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onBeforeUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2af123c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onShouldRunUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>* (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onShouldRunUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af1354;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onShouldRunUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onShouldRunUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onShouldRunUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2af135c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onShouldRunUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onDeviceDiscovered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_2<int32_t,::StringW>* (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2af1474;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onDeviceDiscovered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onDeviceDiscovered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::System::Action_2<int32_t,::StringW>*)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onDeviceDiscovered)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2af14c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onDeviceDiscovered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t,::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onShutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onShutdown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af151c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onShutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::System::Action*)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onShutdown)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2af1524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_onPlayerFocusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action_1<bool>* (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onPlayerFocusChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af15f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onPlayerFocusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_onPlayerFocusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::System::Action_1<bool>*)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onPlayerFocusChanged)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2af15fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onPlayerFocusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_isPlayerFocused
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_isPlayerFocused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af16cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_isPlayerFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_pollingFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_pollingFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af16d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_pollingFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.set_pollingFrequency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(float_t)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_pollingFrequency)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2af16dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_pollingFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_currentTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2af1744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_currentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_currentTimeForFixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTimeForFixedUpdate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2af1794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_currentTimeForFixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_currentTimeOffsetToRealtimeSinceStartup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTimeOffsetToRealtimeSinceStartup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2af17c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_currentTimeOffsetToRealtimeSinceStartup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_unscaledGameTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_unscaledGameTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af1810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_unscaledGameTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_runInBackground
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_runInBackground)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af1818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_runInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.OnShutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnShutdown)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2af1820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "OnShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.OnWantsToShutdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnWantsToShutdown)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2af1844;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "OnWantsToShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.OnFocusChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(bool)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnFocusChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2af1884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "OnFocusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_screenSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_screenSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2af18ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_screenSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_screenOrientation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ScreenOrientation (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_screenOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af18d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_screenOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.get_isInBatchMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_isInBatchMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2af18dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_isInBatchMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.RegisterAnalyticsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::StringW, int32_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::RegisterAnalyticsEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af18e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "RegisterAnalyticsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime.SendAnalyticsEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)(::StringW, ::System::Object*)>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::SendAnalyticsEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2af18e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "SendAnalyticsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::*)()>(&::UnityEngine::InputSystem::LowLevel::NativeInputRuntime::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2af18ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputRuntime"
constexpr  UnityEngine::InputSystem::LowLevel::NativeInputRuntime::operator ::UnityEngine::InputSystem::LowLevel::IInputRuntime*() noexcept {
return static_cast<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(static_cast<void*>(this));
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::setStaticF_instance(::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get>(std::forward<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>(value));
}
inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*, "instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get>();
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__set_m_ShutdownMethod(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x10>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_ShutdownMethod()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_ShutdownMethod() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x10>(this);
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__set_m_OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*, 0x18>(this, std::forward<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_OnUpdate()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*> UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_OnUpdate() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*, 0x18>(this);
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__set_m_OnBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*, 0x20>(this, std::forward<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*>(value));
}
constexpr ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_OnBeforeUpdate()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*> UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_OnBeforeUpdate() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*, 0x20>(this);
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__set_m_OnShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*  value)  {
::cordl_internals::setInstanceField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*, 0x28>(this, std::forward<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*>(value));
}
constexpr ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_OnShouldRunUpdate()  {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*> UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_OnShouldRunUpdate() const {
return ::cordl_internals::getInstanceField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*, 0x28>(this);
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__set_m_PollingFrequency(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_PollingFrequency()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_PollingFrequency() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__set_m_DidCallOnShutdown(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x34>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_DidCallOnShutdown()  {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr bool const& UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_DidCallOnShutdown() const {
return ::cordl_internals::getInstanceField<bool, 0x34>(this);
}
constexpr void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__set_m_FocusChangedMethod(::System::Action_1<bool>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<bool>*, 0x38>(this, std::forward<::System::Action_1<bool>*>(value));
}
constexpr ::System::Action_1<bool>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_FocusChangedMethod()  {
return ::cordl_internals::getInstanceField<::System::Action_1<bool>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<bool>*> UnityEngine::InputSystem::LowLevel::NativeInputRuntime::__get_m_FocusChangedMethod() const {
return ::cordl_internals::getInstanceField<::System::Action_1<bool>*, 0x38>(this);
}
inline int32_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::AllocateDeviceId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "AllocateDeviceId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType  updateType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::QueueEvent(::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>  ptr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "QueueEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputEvent>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, ptr);
}
inline int64_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::DeviceCommand(int32_t  deviceId, ::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>  commandPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "DeviceCommand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int64_t, false>(*this, ___internal_method, deviceId, commandPtr);
}
inline ::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateDelegate*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onBeforeUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onBeforeUpdate(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onBeforeUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputUpdateType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onShouldRunUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onShouldRunUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onShouldRunUpdate(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onShouldRunUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputUpdateType,bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Action_2<int32_t,::StringW>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onDeviceDiscovered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onDeviceDiscovered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_2<int32_t,::StringW>*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onDeviceDiscovered(::System::Action_2<int32_t,::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onDeviceDiscovered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<int32_t,::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Action* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onShutdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onShutdown(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::System::Action_1<bool>* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_onPlayerFocusChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_onPlayerFocusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Action_1<bool>*, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_onPlayerFocusChanged(::System::Action_1<bool>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_onPlayerFocusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_isPlayerFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_isPlayerFocused",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_pollingFrequency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_pollingFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::set_pollingFrequency(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "set_pollingFrequency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline double_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_currentTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTimeForFixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_currentTimeForFixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline double_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_currentTimeOffsetToRealtimeSinceStartup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_currentTimeOffsetToRealtimeSinceStartup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_unscaledGameTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_unscaledGameTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_runInBackground()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_runInBackground",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnShutdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "OnShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnWantsToShutdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "OnWantsToShutdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::OnFocusChanged(bool  focus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "OnFocusChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, focus);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_screenSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_screenSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline ::UnityEngine::ScreenOrientation UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_screenOrientation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_screenOrientation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScreenOrientation, false>(*this, ___internal_method);
}
inline bool UnityEngine::InputSystem::LowLevel::NativeInputRuntime::get_isInBatchMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "get_isInBatchMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::RegisterAnalyticsEvent(::StringW  name, int32_t  maxPerHour, int32_t  maxPropertiesPerEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "RegisterAnalyticsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, maxPerHour, maxPropertiesPerEvent);
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::SendAnalyticsEvent(::StringW  name, ::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            "SendAnalyticsEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, name, data);
}
inline ::UnityEngine::InputSystem::LowLevel::NativeInputRuntime* UnityEngine::InputSystem::LowLevel::NativeInputRuntime::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>());
}
inline void UnityEngine::InputSystem::LowLevel::NativeInputRuntime::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::NativeInputRuntime*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
