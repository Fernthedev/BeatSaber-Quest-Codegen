#pragma once
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__LocalizedTextAsset_def.hpp"
#include "HMUI/zzzz__TextPageScrollView_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
constexpr void GlobalNamespace::__EulaViewController__ButtonType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__EulaViewController__ButtonType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& GlobalNamespace::__EulaViewController__ButtonType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__EulaViewController__ButtonType::__EulaViewController__ButtonType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::GlobalNamespace::__EulaViewController__ButtonType  GlobalNamespace::__EulaViewController__ButtonType::Agree{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__EulaViewController__ButtonType  GlobalNamespace::__EulaViewController__ButtonType::DoNotAgree{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EulaViewController__InitData::*)(bool)>(&::GlobalNamespace::__EulaViewController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22b059c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__EulaViewController__InitData::__set_showDoNotAgreeButton(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__EulaViewController__InitData::__get_showDoNotAgreeButton()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__EulaViewController__InitData::__get_showDoNotAgreeButton() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::GlobalNamespace::__EulaViewController__InitData* GlobalNamespace::__EulaViewController__InitData::New_ctor(bool  showDoNotAgreeButton)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EulaViewController__InitData*>(showDoNotAgreeButton));
}
inline void GlobalNamespace::__EulaViewController__InitData::_ctor(bool  showDoNotAgreeButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, showDoNotAgreeButton);
}
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)(int32_t)>(&::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22b0504;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)()>(&::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22b05c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)()>(&::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x22b05c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)()>(&::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b0744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)()>(&::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22b074c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::*)()>(&::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22b078c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set___4__this(::GlobalNamespace::EulaViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EulaViewController*, 0x20>(this, std::forward<::GlobalNamespace::EulaViewController*>(value));
}
constexpr ::GlobalNamespace::EulaViewController* GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EulaViewController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EulaViewController*> GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EulaViewController*, 0x20>(this);
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set_delay(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get_delay()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get_delay() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set__startProgressBarWidth_5__2(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get__startProgressBarWidth_5__2()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get__startProgressBarWidth_5__2() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__set__elapsedTime_5__3(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get__elapsedTime_5__3()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::__get__elapsedTime_5__3() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
inline ::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21* GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>(__1__state));
}
inline void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EulaViewController___EnableButtonsCoroutine_d__21*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.add_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*)>(&::GlobalNamespace::EulaViewController::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22aff24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.remove_didFinishEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*)>(&::GlobalNamespace::EulaViewController::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22affd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.DidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)(bool, bool, bool)>(&::GlobalNamespace::EulaViewController::DidActivate)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x22b0084;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.DidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)(bool, bool)>(&::GlobalNamespace::EulaViewController::DidDeactivate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x22b0430;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)(bool, bool)>(&::GlobalNamespace::EulaViewController::Init)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22b04f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController.EnableButtonsCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::EulaViewController::*)(float_t)>(&::GlobalNamespace::EulaViewController::EnableButtonsCoroutine)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22b03b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "EnableButtonsCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)()>(&::GlobalNamespace::EulaViewController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22b052c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController._DidActivate_b__18_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)()>(&::GlobalNamespace::EulaViewController::_DidActivate_b__18_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22b053c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "<DidActivate>b__18_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController._DidActivate_b__18_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)()>(&::GlobalNamespace::EulaViewController::_DidActivate_b__18_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22b055c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "<DidActivate>b__18_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EulaViewController._DidActivate_b__18_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EulaViewController::*)()>(&::GlobalNamespace::EulaViewController::_DidActivate_b__18_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22b057c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "<DidActivate>b__18_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EulaViewController::__set__agreeButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x70>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::EulaViewController::__get__agreeButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::EulaViewController::__get__agreeButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x70>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__doNotAgreeButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x78>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::EulaViewController::__get__doNotAgreeButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::EulaViewController::__get__doNotAgreeButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x78>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__continueButton(::UnityEngine::UI::Button*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Button*, 0x80>(this, std::forward<::UnityEngine::UI::Button*>(value));
}
constexpr ::UnityEngine::UI::Button* GlobalNamespace::EulaViewController::__get__continueButton()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Button*> GlobalNamespace::EulaViewController::__get__continueButton() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Button*, 0x80>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__disableButtonsProgress(::UnityEngine::UI::Image*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Image*, 0x88>(this, std::forward<::UnityEngine::UI::Image*>(value));
}
constexpr ::UnityEngine::UI::Image* GlobalNamespace::EulaViewController::__get__disableButtonsProgress()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x88>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> GlobalNamespace::EulaViewController::__get__disableButtonsProgress() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Image*, 0x88>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__disabledButtonDelay(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::EulaViewController::__get__disabledButtonDelay()  {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr float_t const& GlobalNamespace::EulaViewController::__get__disabledButtonDelay() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__textPageScrollView(::HMUI::TextPageScrollView*  value)  {
::cordl_internals::setInstanceField<::HMUI::TextPageScrollView*, 0x98>(this, std::forward<::HMUI::TextPageScrollView*>(value));
}
constexpr ::HMUI::TextPageScrollView* GlobalNamespace::EulaViewController::__get__textPageScrollView()  {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView*, 0x98>(this);
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::TextPageScrollView*> GlobalNamespace::EulaViewController::__get__textPageScrollView() const {
return ::cordl_internals::getInstanceField<::HMUI::TextPageScrollView*, 0x98>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__eulaLocalizedTextAsset(::GlobalNamespace::LocalizedTextAsset*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LocalizedTextAsset*, 0xa0>(this, std::forward<::GlobalNamespace::LocalizedTextAsset*>(value));
}
constexpr ::GlobalNamespace::LocalizedTextAsset* GlobalNamespace::EulaViewController::__get__eulaLocalizedTextAsset()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalizedTextAsset*, 0xa0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalizedTextAsset*> GlobalNamespace::EulaViewController::__get__eulaLocalizedTextAsset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalizedTextAsset*, 0xa0>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__updateNoticeLocalizationKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0xa8>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::EulaViewController::__get__updateNoticeLocalizationKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this);
}
constexpr ::StringW const& GlobalNamespace::EulaViewController::__get__updateNoticeLocalizationKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0xa8>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__initData(::GlobalNamespace::__EulaViewController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__EulaViewController__InitData*, 0xb0>(this, std::forward<::GlobalNamespace::__EulaViewController__InitData*>(value));
}
constexpr ::GlobalNamespace::__EulaViewController__InitData* GlobalNamespace::EulaViewController::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EulaViewController__InitData*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EulaViewController__InitData*> GlobalNamespace::EulaViewController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__EulaViewController__InitData*, 0xb0>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__coroutineStarter(::GlobalNamespace::ICoroutineStarter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ICoroutineStarter*, 0xb8>(this, std::forward<::GlobalNamespace::ICoroutineStarter*>(value));
}
constexpr ::GlobalNamespace::ICoroutineStarter* GlobalNamespace::EulaViewController::__get__coroutineStarter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ICoroutineStarter*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> GlobalNamespace::EulaViewController::__get__coroutineStarter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ICoroutineStarter*, 0xb8>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*  value)  {
::cordl_internals::setInstanceField<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*, 0xc0>(this, std::forward<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*>(value));
}
constexpr ::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>* GlobalNamespace::EulaViewController::__get_didFinishEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*> GlobalNamespace::EulaViewController::__get_didFinishEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*, 0xc0>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__showUpdate(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::EulaViewController::__get__showUpdate()  {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr bool const& GlobalNamespace::EulaViewController::__get__showUpdate() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__showOnlyContinueButton(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xc9>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::EulaViewController::__get__showOnlyContinueButton()  {
return ::cordl_internals::getInstanceField<bool, 0xc9>(this);
}
constexpr bool const& GlobalNamespace::EulaViewController::__get__showOnlyContinueButton() const {
return ::cordl_internals::getInstanceField<bool, 0xc9>(this);
}
constexpr void GlobalNamespace::EulaViewController::__set__buttonsCoroutine(::UnityEngine::Coroutine*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Coroutine*, 0xd0>(this, std::forward<::UnityEngine::Coroutine*>(value));
}
constexpr ::UnityEngine::Coroutine* GlobalNamespace::EulaViewController::__get__buttonsCoroutine()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> GlobalNamespace::EulaViewController::__get__buttonsCoroutine() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Coroutine*, 0xd0>(this);
}
inline void GlobalNamespace::EulaViewController::add_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "add_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::EulaViewController::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "remove_didFinishEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::__EulaViewController__ButtonType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::EulaViewController::DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "DidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::EulaViewController::DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "DidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::EulaViewController::Init(bool  showUpdate, bool  showOnlyContinueButton)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, showUpdate, showOnlyContinueButton);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::EulaViewController::EnableButtonsCoroutine(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "EnableButtonsCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method, delay);
}
inline ::GlobalNamespace::EulaViewController* GlobalNamespace::EulaViewController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::EulaViewController*>());
}
inline void GlobalNamespace::EulaViewController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::EulaViewController::_DidActivate_b__18_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "<DidActivate>b__18_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::EulaViewController::_DidActivate_b__18_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "<DidActivate>b__18_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::EulaViewController::_DidActivate_b__18_2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EulaViewController*>::get(),
                            "<DidActivate>b__18_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
