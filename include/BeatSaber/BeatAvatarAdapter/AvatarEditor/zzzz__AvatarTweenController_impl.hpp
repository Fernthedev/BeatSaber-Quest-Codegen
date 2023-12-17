#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarTweenController_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__AvatarTweenController_def.hpp"
#include "Tweening/zzzz__TimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe153fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0._CreatePopTween_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::*)(float_t)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::_CreatePopTween_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe16090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*>::get(),
                            "<CreatePopTween>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__set_partTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x10>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__get_partTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__get_partTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x10>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__set_originalScale(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__get_originalScale()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this);
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::__get_originalScale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*>());
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0::_CreatePopTween_b__0(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController____c__DisplayClass54_0*>::get(),
                            "<CreatePopTween>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)(int32_t)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe15404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe160c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::MoveNext)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xe160cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe162d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe162e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe16320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__set___4__this(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*, 0x20>(this, std::forward<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(value));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___4__this()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*> BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get___4__this() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*, 0x20>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__set__waitYieldInstruction_5__2(::UnityEngine::WaitForSeconds*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::WaitForSeconds*, 0x28>(this, std::forward<::UnityEngine::WaitForSeconds*>(value));
}
constexpr ::UnityEngine::WaitForSeconds* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get__waitYieldInstruction_5__2()  {
return ::cordl_internals::getInstanceField<::UnityEngine::WaitForSeconds*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::WaitForSeconds*> BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::__get__waitYieldInstruction_5__2() const {
return ::cordl_internals::getInstanceField<::UnityEngine::WaitForSeconds*, 0x28>(this);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>(__1__state));
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___AppearAnimation_d__55*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)(int32_t)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe15efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe16328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::MoveNext)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xe1632c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe165a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe165b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe165f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__set___4__this(::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*  value)  {
::cordl_internals::setInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*, 0x20>(this, std::forward<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>(value));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___4__this()  {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*> BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::__get___4__this() const {
return ::cordl_internals::getInstanceField<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*, 0x20>(this);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>(__1__state));
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::__AvatarTweenController___DisappearAnimation_d__60*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe14f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe14fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xe1505c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PresentAvatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PresentAvatar)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe12a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PresentAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.HideAvatar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::HideAvatar)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe131e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "HideAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopAll)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe15130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe152bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHands
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe152c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopHands",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopClothes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe152cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopClothes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(float_t)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe1515c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopHands
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(float_t)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xe1521c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopHands",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.PopClothes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(float_t)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xe151bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopClothes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.CreatePopTween
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Tweening::Tween_1<float_t>* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Transform*, float_t)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::CreatePopTween)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xe152d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "CreatePopTween",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearAnimation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe15060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "AppearAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearBody
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearBody)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xe1542c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "AppearBody",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearHead
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearHead)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xe156dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "AppearHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearLeftHand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearLeftHand)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xe1598c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "AppearLeftHand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.AppearRightHand
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearRightHand)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xe15c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "AppearRightHand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.DisappearAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::DisappearAnimation)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe150c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "DisappearAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController.StopAll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::StopAll)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xe14fc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "StopAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)()>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe15f24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearBody_b__56_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe15f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearBody>b__56_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearBody_b__56_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe15f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearBody>b__56_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearHead_b__57_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe15fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearHead>b__57_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearHead_b__57_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe15fcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearHead>b__57_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearLeftHand_b__58_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe15fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearLeftHand>b__58_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearLeftHand_b__58_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe16004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearLeftHand>b__58_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearRightHand_b__59_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe16020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearRightHand>b__59_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._AppearRightHand_b__59_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe1603c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearRightHand>b__59_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._DisappearAnimation_b__60_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe16058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<DisappearAnimation>b__60_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController._DisappearAnimation_b__60_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::*)(::UnityEngine::Vector3)>(&::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xe16074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<DisappearAnimation>b__60_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__avatarTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x18>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x18>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__headParent(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x20>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headParent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headParent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x20>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__leftHandTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__leftHandTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__leftHandTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__rightHandTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x30>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__rightHandTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__rightHandTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x30>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__bodyTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x38>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__bodyTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__bodyTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x38>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__headInnerTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x40>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headInnerTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headInnerTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x40>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__leftHandInnerTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x48>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__leftHandInnerTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__leftHandInnerTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x48>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__rightHandInnerTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x50>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__rightHandInnerTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__rightHandInnerTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x50>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__bodyInnerTransform(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x58>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__bodyInnerTransform()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__bodyInnerTransform() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x58>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popEaseType(::GlobalNamespace::EaseType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EaseType, 0x64>(this, std::forward<::GlobalNamespace::EaseType>(value));
}
constexpr ::GlobalNamespace::EaseType& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popEaseType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x64>(this);
}
constexpr ::GlobalNamespace::EaseType const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popEaseType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x64>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__headPopAmount(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headPopAmount()  {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__headPopAmount() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__handsPopAmount(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x6c>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__handsPopAmount()  {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__handsPopAmount() const {
return ::cordl_internals::getInstanceField<float_t, 0x6c>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__clothesPopAmount(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__clothesPopAmount()  {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__clothesPopAmount() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__allPopAmount(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x74>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__allPopAmount()  {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__allPopAmount() const {
return ::cordl_internals::getInstanceField<float_t, 0x74>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x78>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x78>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearSpacing(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x7c>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearSpacing()  {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x7c>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x80>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x80>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__squashFactor(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x84>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__squashFactor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x84>(this);
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__squashFactor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x84>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x90>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x90>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x94>(this, std::forward<float_t>(value));
}
constexpr float_t& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this);
}
constexpr float_t const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x94>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearSquash(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x98>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearSquash()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x98>(this);
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearSquash() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x98>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearScaleEase(::GlobalNamespace::EaseType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EaseType, 0xa4>(this, std::forward<::GlobalNamespace::EaseType>(value));
}
constexpr ::GlobalNamespace::EaseType& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearScaleEase()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0xa4>(this);
}
constexpr ::GlobalNamespace::EaseType const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearScaleEase() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0xa4>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearPositionEase(::GlobalNamespace::EaseType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EaseType, 0xa8>(this, std::forward<::GlobalNamespace::EaseType>(value));
}
constexpr ::GlobalNamespace::EaseType& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearPositionEase()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0xa8>(this);
}
constexpr ::GlobalNamespace::EaseType const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearPositionEase() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0xa8>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__tweeningManager(::Tweening::TimeTweeningManager*  value)  {
::cordl_internals::setInstanceField<::Tweening::TimeTweeningManager*, 0xb0>(this, std::forward<::Tweening::TimeTweeningManager*>(value));
}
constexpr ::Tweening::TimeTweeningManager* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__tweeningManager()  {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0xb0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<::Tweening::TimeTweeningManager*, 0xb0>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__sharedCoroutineStarter(::GlobalNamespace::ICoroutineStarter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ICoroutineStarter*, 0xb8>(this, std::forward<::GlobalNamespace::ICoroutineStarter*>(value));
}
constexpr ::GlobalNamespace::ICoroutineStarter* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__sharedCoroutineStarter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ICoroutineStarter*, 0xb8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__sharedCoroutineStarter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ICoroutineStarter*, 0xb8>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popHeadTween(::Tweening::Tween_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<float_t>*, 0xc0>(this, std::forward<::Tweening::Tween_1<float_t>*>(value));
}
constexpr ::Tweening::Tween_1<float_t>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popHeadTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<float_t>*, 0xc0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popHeadTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<float_t>*, 0xc0>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popLeftHandTween(::Tweening::Tween_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<float_t>*, 0xc8>(this, std::forward<::Tweening::Tween_1<float_t>*>(value));
}
constexpr ::Tweening::Tween_1<float_t>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popLeftHandTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<float_t>*, 0xc8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popLeftHandTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<float_t>*, 0xc8>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popRightHandTween(::Tweening::Tween_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<float_t>*, 0xd0>(this, std::forward<::Tweening::Tween_1<float_t>*>(value));
}
constexpr ::Tweening::Tween_1<float_t>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popRightHandTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<float_t>*, 0xd0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popRightHandTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<float_t>*, 0xd0>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__popClothesTween(::Tweening::Tween_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<float_t>*, 0xd8>(this, std::forward<::Tweening::Tween_1<float_t>*>(value));
}
constexpr ::Tweening::Tween_1<float_t>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popClothesTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<float_t>*, 0xd8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<float_t>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__popClothesTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<float_t>*, 0xd8>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearHeadPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xe0>(this, std::forward<::Tweening::Tween_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeadPositionTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xe0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeadPositionTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xe0>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearHeadScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xe8>(this, std::forward<::Tweening::Tween_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeadScaleTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xe8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearHeadScaleTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xe8>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearBodyPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xf0>(this, std::forward<::Tweening::Tween_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearBodyPositionTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xf0>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearBodyPositionTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xf0>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearBodyScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xf8>(this, std::forward<::Tweening::Tween_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearBodyScaleTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xf8>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearBodyScaleTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0xf8>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearRightHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x100>(this, std::forward<::Tweening::Tween_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearRightHandPositionTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearRightHandPositionTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x100>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearRightHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x108>(this, std::forward<::Tweening::Tween_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearRightHandScaleTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearRightHandScaleTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x108>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearLeftHandPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x110>(this, std::forward<::Tweening::Tween_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearLeftHandPositionTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearLeftHandPositionTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x110>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__appearLeftHandScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x118>(this, std::forward<::Tweening::Tween_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearLeftHandScaleTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__appearLeftHandScaleTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x118>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearScaleTween(::Tweening::Tween_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x120>(this, std::forward<::Tweening::Tween_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearScaleTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearScaleTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x120>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__disappearPositionTween(::Tweening::Tween_1<::UnityEngine::Vector3>*  value)  {
::cordl_internals::setInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x128>(this, std::forward<::Tweening::Tween_1<::UnityEngine::Vector3>*>(value));
}
constexpr ::Tweening::Tween_1<::UnityEngine::Vector3>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearPositionTween()  {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x128>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::Tween_1<::UnityEngine::Vector3>*> BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__disappearPositionTween() const {
return ::cordl_internals::getInstanceField<::Tweening::Tween_1<::UnityEngine::Vector3>*, 0x128>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__avatarLocalPosition(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x130>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarLocalPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x130>(this);
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarLocalPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x130>(this);
}
constexpr void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__set__avatarLocalScale(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x13c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarLocalScale()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x13c>(this);
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::__get__avatarLocalScale() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x13c>(this);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PresentAvatar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PresentAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::HideAvatar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "HideAvatar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopHands",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopClothes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHead(float_t  popAmount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, popAmount);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopHands(float_t  popAmount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopHands",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, popAmount);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::PopClothes(float_t  popAmount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "PopClothes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, popAmount);
}
inline ::Tweening::Tween_1<float_t>* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::CreatePopTween(::UnityEngine::Transform*  partTransform, float_t  popAmount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "CreatePopTween",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Tweening::Tween_1<float_t>*, false>(*this, ___internal_method, partTransform, popAmount);
}
inline ::System::Collections::IEnumerator* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "AppearAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearBody()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "AppearBody",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearHead()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "AppearHead",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearLeftHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "AppearLeftHand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::AppearRightHand()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "AppearRightHand",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::DisappearAnimation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "DisappearAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::StopAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "StopAll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController* BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>());
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_0(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearBody>b__56_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearBody_b__56_1(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearBody>b__56_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_0(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearHead>b__57_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearHead_b__57_1(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearHead>b__57_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_0(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearLeftHand>b__58_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearLeftHand_b__58_1(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearLeftHand>b__58_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_0(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearRightHand>b__59_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_AppearRightHand_b__59_1(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<AppearRightHand>b__59_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_0(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<DisappearAnimation>b__60_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
inline void BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController::_DisappearAnimation_b__60_1(::UnityEngine::Vector3  val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::AvatarEditor::AvatarTweenController*>::get(),
                            "<DisappearAnimation>b__60_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, val);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
