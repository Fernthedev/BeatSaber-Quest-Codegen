#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingUIController_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "GlobalNamespace/zzzz__RecordingUIController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RecordingUIController__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RecordingUIController__InitData::*)(bool)>(&::GlobalNamespace::__RecordingUIController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23c2334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingUIController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__RecordingUIController__InitData::__set_recordingEnabled(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__RecordingUIController__InitData::__get_recordingEnabled()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& GlobalNamespace::__RecordingUIController__InitData::__get_recordingEnabled() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
inline ::GlobalNamespace::__RecordingUIController__InitData* GlobalNamespace::__RecordingUIController__InitData::New_ctor(bool  recordingEnabled)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__RecordingUIController__InitData*>(recordingEnabled));
}
inline void GlobalNamespace::__RecordingUIController__InitData::_ctor(bool  recordingEnabled)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RecordingUIController__InitData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, recordingEnabled);
}
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::Init)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x23c2238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::Update)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x23c22b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingUIController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingUIController::*)()>(&::GlobalNamespace::RecordingUIController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23c2324;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RecordingUIController::__set__circle(::UnityEngine::GameObject*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::GameObject*, 0x18>(this, std::forward<::UnityEngine::GameObject*>(value));
}
constexpr ::UnityEngine::GameObject* GlobalNamespace::RecordingUIController::__get__circle()  {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> GlobalNamespace::RecordingUIController::__get__circle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::GameObject*, 0x18>(this);
}
constexpr void GlobalNamespace::RecordingUIController::__set__updateTimeSpan(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RecordingUIController::__get__updateTimeSpan()  {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr float_t const& GlobalNamespace::RecordingUIController::__get__updateTimeSpan() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this);
}
constexpr void GlobalNamespace::RecordingUIController::__set__initData(::GlobalNamespace::__RecordingUIController__InitData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RecordingUIController__InitData*, 0x28>(this, std::forward<::GlobalNamespace::__RecordingUIController__InitData*>(value));
}
constexpr ::GlobalNamespace::__RecordingUIController__InitData* GlobalNamespace::RecordingUIController::__get__initData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RecordingUIController__InitData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__RecordingUIController__InitData*> GlobalNamespace::RecordingUIController::__get__initData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RecordingUIController__InitData*, 0x28>(this);
}
constexpr void GlobalNamespace::RecordingUIController::__set__lastUpdateTime(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::RecordingUIController::__get__lastUpdateTime()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::RecordingUIController::__get__lastUpdateTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
inline void GlobalNamespace::RecordingUIController::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::RecordingUIController::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::RecordingUIController* GlobalNamespace::RecordingUIController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingUIController*>());
}
inline void GlobalNamespace::RecordingUIController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingUIController*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
