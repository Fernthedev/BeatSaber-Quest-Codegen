#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderIntensityEffect_def.hpp"
#include "GlobalNamespace/zzzz__AudioTimeSyncController_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "GlobalNamespace/zzzz__SliderIntensityEffect_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect__InitData::*)(::GlobalNamespace::ArcVisibilityType, bool)>(&::GlobalNamespace::__SliderIntensityEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23933c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SliderIntensityEffect__InitData::__set_sliderColorIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SliderIntensityEffect__InitData::__get_sliderColorIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect__InitData::__get_sliderColorIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect__InitData::__set_hapticFeedback(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SliderIntensityEffect__InitData::__get_hapticFeedback()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect__InitData::__get_hapticFeedback() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
inline ::GlobalNamespace::__SliderIntensityEffect__InitData* GlobalNamespace::__SliderIntensityEffect__InitData::New_ctor(::GlobalNamespace::ArcVisibilityType  arcVisibilityType, bool  hapticFeedbackEnabled)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SliderIntensityEffect__InitData*>(arcVisibilityType, hapticFeedbackEnabled));
}
inline void GlobalNamespace::__SliderIntensityEffect__InitData::_ctor(::GlobalNamespace::ArcVisibilityType  arcVisibilityType, bool  hapticFeedbackEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ArcVisibilityType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, arcVisibilityType, hapticFeedbackEnabled);
}
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__FadeElement._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect__FadeElement::*)(::GlobalNamespace::EaseType, float_t, float_t, ::System::Action*)>(&::GlobalNamespace::__SliderIntensityEffect__FadeElement::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2393260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__SliderIntensityEffect__FadeElement::__set_duration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SliderIntensityEffect__FadeElement::__get_duration()  {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect__FadeElement::__get_duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect__FadeElement::__set_startIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SliderIntensityEffect__FadeElement::__get_startIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect__FadeElement::__get_startIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect__FadeElement::__set_endIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SliderIntensityEffect__FadeElement::__get_endIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect__FadeElement::__get_endIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect__FadeElement::__set_easeType(::GlobalNamespace::EaseType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EaseType, 0x1c>(this, std::forward<::GlobalNamespace::EaseType>(value));
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::__SliderIntensityEffect__FadeElement::__get_easeType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x1c>(this);
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::__SliderIntensityEffect__FadeElement::__get_easeType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EaseType, 0x1c>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect__FadeElement::__set_startCallback(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x20>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::__SliderIntensityEffect__FadeElement::__get_startCallback()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::__SliderIntensityEffect__FadeElement::__get_startCallback() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x20>(this);
}
/// @param startCallback: ::System::Action* (default: csnull)
inline ::GlobalNamespace::__SliderIntensityEffect__FadeElement* GlobalNamespace::__SliderIntensityEffect__FadeElement::New_ctor(::GlobalNamespace::EaseType  easeType, float_t  startIntensity, float_t  endIntensity, ::System::Action*  startCallback)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>(easeType, startIntensity, endIntensity, startCallback));
}
/// @param startCallback: ::System::Action* (default: csnull)
inline void GlobalNamespace::__SliderIntensityEffect__FadeElement::_ctor(::GlobalNamespace::EaseType  easeType, float_t  startIntensity, float_t  endIntensity, ::System::Action*  startCallback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, easeType, startIntensity, endIntensity, startCallback);
}
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::*)(::System::Object*, ::cordl_internals::intptr_t)>(&::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2393434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate.Invoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::*)(float_t, float_t)>(&::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23934f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate.BeginInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::*)(float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x239350c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate.EndInvoke
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::*)(::System::IAsyncResult*)>(&::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23935a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate* GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>(object, method));
}
inline void GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, object, method);
}
inline float_t GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::Invoke(float_t  timeSinceLastSection, float_t  timeSinceHeadNoteJump)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                            "Invoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, timeSinceLastSection, timeSinceHeadNoteJump);
}
inline ::System::IAsyncResult* GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::BeginInvoke(float_t  timeSinceLastSection, float_t  timeSinceHeadNoteJump, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                            "BeginInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(*this, ___internal_method, timeSinceLastSection, timeSinceHeadNoteJump, callback, object);
}
inline float_t GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate::EndInvoke(::System::IAsyncResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>::get(),
                            "EndInvoke",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, result);
}
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)(int32_t)>(&::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2393318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(&::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23935cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(&::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x23935e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(&::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2393974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(&::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2393a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(&::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2393a2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::*)()>(&::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2393a6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__set_fadeElements(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*, 0x20>(this, std::forward<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get_fadeElements()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get_fadeElements() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*, 0x20>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__set___4__this(::GlobalNamespace::SliderIntensityEffect*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SliderIntensityEffect*, 0x28>(this, std::forward<::GlobalNamespace::SliderIntensityEffect*>(value));
}
constexpr ::GlobalNamespace::SliderIntensityEffect* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderIntensityEffect*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderIntensityEffect*> GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SliderIntensityEffect*, 0x28>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*, 0x30>(this, std::forward<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>(value));
}
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get___7__wrap1()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*, 0x30>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__set__fadeElement_5__3(::GlobalNamespace::__SliderIntensityEffect__FadeElement*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, 0x38>(this, std::forward<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>(value));
}
constexpr ::GlobalNamespace::__SliderIntensityEffect__FadeElement* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get__fadeElement_5__3()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderIntensityEffect__FadeElement*> GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get__fadeElement_5__3() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SliderIntensityEffect__FadeElement*, 0x38>(this);
}
constexpr void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__set__startTime_5__4(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get__startTime_5__4()  {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
constexpr float_t const& GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__get__startTime_5__4() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this);
}
inline ::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>(__1__state));
}
inline void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__SliderIntensityEffect___ProcessEffectCoroutine_d__32*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.add_fadeInDidStartEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)(::System::Action*)>(&::GlobalNamespace::SliderIntensityEffect::add_fadeInDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2391074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "add_fadeInDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.remove_fadeInDidStartEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)(::System::Action*)>(&::GlobalNamespace::SliderIntensityEffect::remove_fadeInDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x239158c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "remove_fadeInDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.get_intensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::get_intensity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x238faec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.get_colorIntensity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::get_colorIntensity)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2392f10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "get_colorIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::Awake)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2392f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)(float_t, float_t, bool)>(&::GlobalNamespace::SliderIntensityEffect::Init)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2390028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.ManualUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)(float_t)>(&::GlobalNamespace::SliderIntensityEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2391904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.ProcessEffectCoroutine
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::SliderIntensityEffect::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*)>(&::GlobalNamespace::SliderIntensityEffect::ProcessEffectCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23932a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "ProcessEffectCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.StartIntensityDipEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::StartIntensityDipEffect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x239230c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "StartIntensityDipEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.StartIntensityFadeInEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::StartIntensityFadeInEffect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23920b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "StartIntensityFadeInEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect.StartFlashEffect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::StartFlashEffect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2393340;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "StartFlashEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2393370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect._Awake_b__29_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::_Awake_b__29_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2393390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "<Awake>b__29_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderIntensityEffect._Awake_b__29_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderIntensityEffect::*)()>(&::GlobalNamespace::SliderIntensityEffect::_Awake_b__29_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x23933ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "<Awake>b__29_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SliderIntensityEffect::__set__longSliderHeadIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__longSliderHeadIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__longSliderHeadIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__shortSliderHeadIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__shortSliderHeadIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__shortSliderHeadIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__tailIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__tailIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__tailIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__fadeOutDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__fadeOutDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__fadeOutDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__stayOffDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__stayOffDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__stayOffDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__flashBoost(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__flashBoost()  {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__flashBoost() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__flashInDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__flashInDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__flashInDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__flashOutDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__flashOutDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__flashOutDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__audioTimeSyncController(::GlobalNamespace::AudioTimeSyncController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x38>(this, std::forward<::GlobalNamespace::AudioTimeSyncController*>(value));
}
constexpr ::GlobalNamespace::AudioTimeSyncController* GlobalNamespace::SliderIntensityEffect::__get__audioTimeSyncController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioTimeSyncController*> GlobalNamespace::SliderIntensityEffect::__get__audioTimeSyncController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AudioTimeSyncController*, 0x38>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__initData(::GlobalNamespace::__SliderIntensityEffect__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SliderIntensityEffect__InitData*, 0x40>(this, std::forward<::GlobalNamespace::__SliderIntensityEffect__InitData*>(value));
}
constexpr ::GlobalNamespace::__SliderIntensityEffect__InitData* GlobalNamespace::SliderIntensityEffect::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SliderIntensityEffect__InitData*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderIntensityEffect__InitData*> GlobalNamespace::SliderIntensityEffect::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SliderIntensityEffect__InitData*, 0x40>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set_fadeInDidStartEvent(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x48>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* GlobalNamespace::SliderIntensityEffect::__get_fadeInDidStartEvent()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> GlobalNamespace::SliderIntensityEffect::__get_fadeInDidStartEvent() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x48>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__coreIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__coreIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__coreIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__effectIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__effectIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__effectIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__halfJumpDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__halfJumpDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__halfJumpDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__sliderDuration(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get__sliderDuration()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get__sliderDuration() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set_headIntensity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::SliderIntensityEffect::__get_headIntensity()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& GlobalNamespace::SliderIntensityEffect::__get_headIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__intensityCalculationDelegate(::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*, 0x68>(this, std::forward<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*>(value));
}
constexpr ::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate* GlobalNamespace::SliderIntensityEffect::__get__intensityCalculationDelegate()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*, 0x68>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*> GlobalNamespace::SliderIntensityEffect::__get__intensityCalculationDelegate() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__SliderIntensityEffect__IntensityCalculationDelegate*, 0x68>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__dipEffectFadeElements(::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>, 0x70>(this, std::forward<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>& GlobalNamespace::SliderIntensityEffect::__get__dipEffectFadeElements()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>, 0x70>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const& GlobalNamespace::SliderIntensityEffect::__get__dipEffectFadeElements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>, 0x70>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__flashEffectFadeElements(::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>, 0x78>(this, std::forward<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>& GlobalNamespace::SliderIntensityEffect::__get__flashEffectFadeElements()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>, 0x78>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const& GlobalNamespace::SliderIntensityEffect::__get__flashEffectFadeElements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>, 0x78>(this);
}
constexpr void GlobalNamespace::SliderIntensityEffect::__set__fadeInEffectFadeElements(::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>, 0x80>(this, std::forward<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>& GlobalNamespace::SliderIntensityEffect::__get__fadeInEffectFadeElements()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>, 0x80>(this);
}
constexpr ::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*> const& GlobalNamespace::SliderIntensityEffect::__get__fadeInEffectFadeElements() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::__SliderIntensityEffect__FadeElement*,::Array<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>, 0x80>(this);
}
inline void GlobalNamespace::SliderIntensityEffect::add_fadeInDidStartEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "add_fadeInDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void GlobalNamespace::SliderIntensityEffect::remove_fadeInDidStartEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "remove_fadeInDidStartEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t GlobalNamespace::SliderIntensityEffect::get_intensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "get_intensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t GlobalNamespace::SliderIntensityEffect::get_colorIntensity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "get_colorIntensity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::Init(float_t  sliderDuration, float_t  halfJumpDuration, bool  startVisible)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderDuration, halfJumpDuration, startVisible);
}
inline void GlobalNamespace::SliderIntensityEffect::ManualUpdate(float_t  timeSinceHeadNoteJump)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "ManualUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, timeSinceHeadNoteJump);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::SliderIntensityEffect::ProcessEffectCoroutine(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*  fadeElements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "ProcessEffectCoroutine",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__SliderIntensityEffect__FadeElement*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method, fadeElements);
}
inline void GlobalNamespace::SliderIntensityEffect::StartIntensityDipEffect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "StartIntensityDipEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::StartIntensityFadeInEffect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "StartIntensityFadeInEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::StartFlashEffect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "StartFlashEffect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::SliderIntensityEffect* GlobalNamespace::SliderIntensityEffect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SliderIntensityEffect*>());
}
inline void GlobalNamespace::SliderIntensityEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::_Awake_b__29_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "<Awake>b__29_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::SliderIntensityEffect::_Awake_b__29_1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderIntensityEffect*>::get(),
                            "<Awake>b__29_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
