#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CountdownController_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "GlobalNamespace/zzzz__CountdownElementController_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "GlobalNamespace/zzzz__ITimeProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CountdownController.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::Awake)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x22a2f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::Update)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x22a2f6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.StartCountdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)(int64_t)>(&::GlobalNamespace::CountdownController::StartCountdown)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22a31ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            "StartCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.UpdateCountdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)(int64_t)>(&::GlobalNamespace::CountdownController::UpdateCountdown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x22a32c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            "UpdateCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController.StopCountdown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::StopCountdown)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x22a332c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            "StopCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CountdownController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CountdownController::*)()>(&::GlobalNamespace::CountdownController::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x22a33a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::CountdownController::__set__audioSource(::UnityEngine::AudioSource*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::AudioSource*, 0x18>(this, std::forward<::UnityEngine::AudioSource*>(value));
}
constexpr ::UnityEngine::AudioSource* GlobalNamespace::CountdownController::__get__audioSource()  {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioSource*> GlobalNamespace::CountdownController::__get__audioSource() const {
return ::cordl_internals::getInstanceField<::UnityEngine::AudioSource*, 0x18>(this);
}
constexpr void GlobalNamespace::CountdownController::__set__countdownElementControllers(::ArrayW<::GlobalNamespace::CountdownElementController*,::Array<::GlobalNamespace::CountdownElementController*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::CountdownElementController*,::Array<::GlobalNamespace::CountdownElementController*>*>, 0x20>(this, std::forward<::ArrayW<::GlobalNamespace::CountdownElementController*,::Array<::GlobalNamespace::CountdownElementController*>*>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::CountdownElementController*,::Array<::GlobalNamespace::CountdownElementController*>*>& GlobalNamespace::CountdownController::__get__countdownElementControllers()  {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::CountdownElementController*,::Array<::GlobalNamespace::CountdownElementController*>*>, 0x20>(this);
}
constexpr ::ArrayW<::GlobalNamespace::CountdownElementController*,::Array<::GlobalNamespace::CountdownElementController*>*> const& GlobalNamespace::CountdownController::__get__countdownElementControllers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::CountdownElementController*,::Array<::GlobalNamespace::CountdownElementController*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::CountdownController::__set__timeProvider(::GlobalNamespace::ITimeProvider*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ITimeProvider*, 0x28>(this, std::forward<::GlobalNamespace::ITimeProvider*>(value));
}
constexpr ::GlobalNamespace::ITimeProvider* GlobalNamespace::CountdownController::__get__timeProvider()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ITimeProvider*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ITimeProvider*> GlobalNamespace::CountdownController::__get__timeProvider() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ITimeProvider*, 0x28>(this);
}
constexpr void GlobalNamespace::CountdownController::__set__countdownEndTime(int64_t  value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this, std::forward<int64_t>(value));
}
constexpr int64_t& GlobalNamespace::CountdownController::__get__countdownEndTime()  {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this);
}
constexpr int64_t const& GlobalNamespace::CountdownController::__get__countdownEndTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this);
}
constexpr void GlobalNamespace::CountdownController::__set__currentRemainingSecond(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this, std::forward<int32_t>(value));
}
constexpr int32_t& GlobalNamespace::CountdownController::__get__currentRemainingSecond()  {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr int32_t const& GlobalNamespace::CountdownController::__get__currentRemainingSecond() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this);
}
constexpr void GlobalNamespace::CountdownController::__set__gongSounded(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3c>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::CountdownController::__get__gongSounded()  {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr bool const& GlobalNamespace::CountdownController::__get__gongSounded() const {
return ::cordl_internals::getInstanceField<bool, 0x3c>(this);
}
constexpr void GlobalNamespace::CountdownController::__set__countdownRunning(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x3d>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::CountdownController::__get__countdownRunning()  {
return ::cordl_internals::getInstanceField<bool, 0x3d>(this);
}
constexpr bool const& GlobalNamespace::CountdownController::__get__countdownRunning() const {
return ::cordl_internals::getInstanceField<bool, 0x3d>(this);
}
constexpr void GlobalNamespace::CountdownController::__set__countdownElementControllerQueue(::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>*, 0x40>(this, std::forward<::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>*>(value));
}
constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>* GlobalNamespace::CountdownController::__get__countdownElementControllerQueue()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>*> GlobalNamespace::CountdownController::__get__countdownElementControllerQueue() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Queue_1<::GlobalNamespace::CountdownElementController*>*, 0x40>(this);
}
inline void GlobalNamespace::CountdownController::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::CountdownController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::CountdownController::StartCountdown(int64_t  countdownEndTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            "StartCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, countdownEndTime);
}
inline void GlobalNamespace::CountdownController::UpdateCountdown(int64_t  countdownEndTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            "UpdateCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, countdownEndTime);
}
inline void GlobalNamespace::CountdownController::StopCountdown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            "StopCountdown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::CountdownController* GlobalNamespace::CountdownController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CountdownController*>());
}
inline void GlobalNamespace::CountdownController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CountdownController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
