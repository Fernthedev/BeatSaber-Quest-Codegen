#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureAfterDelay_def.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureAfterDelay_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "GlobalNamespace/zzzz__MainEffectController_def.hpp"
#include "GlobalNamespace/zzzz__ScreenCaptureCache_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScreenCaptureAfterDelay__InitData::*)(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, float_t, int32_t, int32_t)>(&::GlobalNamespace::__ScreenCaptureAfterDelay__InitData::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x280b91c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__set_screenshotType(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, 0x10>(this, std::forward<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType>(value));
}
constexpr ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType& GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__get_screenshotType()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, 0x10>(this);
}
constexpr ::GlobalNamespace::__ScreenCaptureCache__ScreenshotType const& GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__get_screenshotType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType, 0x10>(this);
}
constexpr void GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__set_screenCaptureTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__get_screenCaptureTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr float_t const& GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__get_screenCaptureTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this);
}
constexpr void GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__set_pixelsWidth(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__get_pixelsWidth()  {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr int32_t const& GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__get_pixelsWidth() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this);
}
constexpr void GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__set_pixelsHeight(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x1c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__get_pixelsHeight()  {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
constexpr int32_t const& GlobalNamespace::__ScreenCaptureAfterDelay__InitData::__get_pixelsHeight() const {
return ::cordl_internals::getInstanceField<int32_t, 0x1c>(this);
}
inline ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData* GlobalNamespace::__ScreenCaptureAfterDelay__InitData::New_ctor(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType  screenshotType, float_t  screenCaptureTime, int32_t  pixelsWidth, int32_t  pixelsHeight)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*>(screenshotType, screenCaptureTime, pixelsWidth, pixelsHeight));
}
inline void GlobalNamespace::__ScreenCaptureAfterDelay__InitData::_ctor(::GlobalNamespace::__ScreenCaptureCache__ScreenshotType  screenshotType, float_t  screenCaptureTime, int32_t  pixelsWidth, int32_t  pixelsHeight)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ScreenCaptureCache__ScreenshotType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, screenshotType, screenCaptureTime, pixelsWidth, pixelsHeight);
}
//  Writing Method size for method: ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::*)(int32_t)>(&::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x280b550;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::*)()>(&::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x280b97c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::*)()>(&::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::MoveNext)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x280b980;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::*)()>(&::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280bb5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::*)()>(&::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x280bb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::*)()>(&::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280bba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::__set___1__state(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::__get___1__state()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::__set___2__current(::System::Object*  value)  {
::cordl_internals::setInstanceField<::System::Object*, 0x18>(this, std::forward<::System::Object*>(value));
}
constexpr ::System::Object* GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::__get___2__current()  {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::__get___2__current() const {
return ::cordl_internals::getInstanceField<::System::Object*, 0x18>(this);
}
constexpr void GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::__set___4__this(::GlobalNamespace::ScreenCaptureAfterDelay*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScreenCaptureAfterDelay*, 0x20>(this, std::forward<::GlobalNamespace::ScreenCaptureAfterDelay*>(value));
}
constexpr ::GlobalNamespace::ScreenCaptureAfterDelay* GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScreenCaptureAfterDelay*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScreenCaptureAfterDelay*> GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScreenCaptureAfterDelay*, 0x20>(this);
}
inline ::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6* GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>(__1__state));
}
inline void GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__ScreenCaptureAfterDelay___Start_d__6*>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::ScreenCaptureAfterDelay::*)()>(&::GlobalNamespace::ScreenCaptureAfterDelay::Start)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x280b4e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureAfterDelay::*)()>(&::GlobalNamespace::ScreenCaptureAfterDelay::OnDestroy)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x280b578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay.HandleMainEffectControllerAfterImageEffectEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureAfterDelay::*)(::UnityEngine::RenderTexture*)>(&::GlobalNamespace::ScreenCaptureAfterDelay::HandleMainEffectControllerAfterImageEffectEvent)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x280b658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(),
                            "HandleMainEffectControllerAfterImageEffectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenCaptureAfterDelay._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ScreenCaptureAfterDelay::*)()>(&::GlobalNamespace::ScreenCaptureAfterDelay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280b914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ScreenCaptureAfterDelay::__set__mainEffectController(::GlobalNamespace::MainEffectController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MainEffectController*, 0x18>(this, std::forward<::GlobalNamespace::MainEffectController*>(value));
}
constexpr ::GlobalNamespace::MainEffectController* GlobalNamespace::ScreenCaptureAfterDelay::__get__mainEffectController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainEffectController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainEffectController*> GlobalNamespace::ScreenCaptureAfterDelay::__get__mainEffectController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MainEffectController*, 0x18>(this);
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay::__set__screenCaptureCache(::GlobalNamespace::ScreenCaptureCache*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScreenCaptureCache*, 0x20>(this, std::forward<::GlobalNamespace::ScreenCaptureCache*>(value));
}
constexpr ::GlobalNamespace::ScreenCaptureCache* GlobalNamespace::ScreenCaptureAfterDelay::__get__screenCaptureCache()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScreenCaptureCache*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScreenCaptureCache*> GlobalNamespace::ScreenCaptureAfterDelay::__get__screenCaptureCache() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScreenCaptureCache*, 0x20>(this);
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay::__set__initData(::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*, 0x28>(this, std::forward<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*>(value));
}
constexpr ::GlobalNamespace::__ScreenCaptureAfterDelay__InitData* GlobalNamespace::ScreenCaptureAfterDelay::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*> GlobalNamespace::ScreenCaptureAfterDelay::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__ScreenCaptureAfterDelay__InitData*, 0x28>(this);
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay::__set__captureTexture(::UnityEngine::Texture2D*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Texture2D*, 0x30>(this, std::forward<::UnityEngine::Texture2D*>(value));
}
constexpr ::UnityEngine::Texture2D* GlobalNamespace::ScreenCaptureAfterDelay::__get__captureTexture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> GlobalNamespace::ScreenCaptureAfterDelay::__get__captureTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Texture2D*, 0x30>(this);
}
constexpr void GlobalNamespace::ScreenCaptureAfterDelay::__set__captureRenderTexture(::UnityEngine::RenderTexture*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RenderTexture*, 0x38>(this, std::forward<::UnityEngine::RenderTexture*>(value));
}
constexpr ::UnityEngine::RenderTexture* GlobalNamespace::ScreenCaptureAfterDelay::__get__captureRenderTexture()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> GlobalNamespace::ScreenCaptureAfterDelay::__get__captureRenderTexture() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RenderTexture*, 0x38>(this);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::ScreenCaptureAfterDelay::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScreenCaptureAfterDelay::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ScreenCaptureAfterDelay::HandleMainEffectControllerAfterImageEffectEvent(::UnityEngine::RenderTexture*  renderTexture)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(),
                            "HandleMainEffectControllerAfterImageEffectEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RenderTexture*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, renderTexture);
}
inline ::GlobalNamespace::ScreenCaptureAfterDelay* GlobalNamespace::ScreenCaptureAfterDelay::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ScreenCaptureAfterDelay*>());
}
inline void GlobalNamespace::ScreenCaptureAfterDelay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ScreenCaptureAfterDelay*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
