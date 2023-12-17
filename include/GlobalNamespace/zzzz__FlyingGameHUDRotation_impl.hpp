#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingGameHUDRotation_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentSpawnRotation_def.hpp"
#include "GlobalNamespace/zzzz__BeatLineManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingGameHUDRotation.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingGameHUDRotation::*)()>(&::GlobalNamespace::FlyingGameHUDRotation::Start)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x23b4684;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingGameHUDRotation.FixedUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingGameHUDRotation::*)()>(&::GlobalNamespace::FlyingGameHUDRotation::FixedUpdate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x23b4760;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingGameHUDRotation.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingGameHUDRotation::*)()>(&::GlobalNamespace::FlyingGameHUDRotation::LateUpdate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x23b48d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingGameHUDRotation._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingGameHUDRotation::*)()>(&::GlobalNamespace::FlyingGameHUDRotation::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x23b4960;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::FlyingGameHUDRotation::__set__smooth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x18>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingGameHUDRotation::__get__smooth()  {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr float_t const& GlobalNamespace::FlyingGameHUDRotation::__get__smooth() const {
return ::cordl_internals::getInstanceField<float_t, 0x18>(this);
}
constexpr void GlobalNamespace::FlyingGameHUDRotation::__set__beatLineManager(::GlobalNamespace::BeatLineManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatLineManager*, 0x20>(this, std::forward<::GlobalNamespace::BeatLineManager*>(value));
}
constexpr ::GlobalNamespace::BeatLineManager* GlobalNamespace::FlyingGameHUDRotation::__get__beatLineManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatLineManager*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatLineManager*> GlobalNamespace::FlyingGameHUDRotation::__get__beatLineManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatLineManager*, 0x20>(this);
}
constexpr void GlobalNamespace::FlyingGameHUDRotation::__set__environmentSpawnRotation(::GlobalNamespace::EnvironmentSpawnRotation*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnvironmentSpawnRotation*, 0x28>(this, std::forward<::GlobalNamespace::EnvironmentSpawnRotation*>(value));
}
constexpr ::GlobalNamespace::EnvironmentSpawnRotation* GlobalNamespace::FlyingGameHUDRotation::__get__environmentSpawnRotation()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentSpawnRotation*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSpawnRotation*> GlobalNamespace::FlyingGameHUDRotation::__get__environmentSpawnRotation() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnvironmentSpawnRotation*, 0x28>(this);
}
constexpr void GlobalNamespace::FlyingGameHUDRotation::__set__prevYAngle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingGameHUDRotation::__get__prevYAngle()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::FlyingGameHUDRotation::__get__prevYAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::FlyingGameHUDRotation::__set__yAngle(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::FlyingGameHUDRotation::__get__yAngle()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& GlobalNamespace::FlyingGameHUDRotation::__get__yAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
inline void GlobalNamespace::FlyingGameHUDRotation::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FlyingGameHUDRotation::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(),
                            "FixedUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::FlyingGameHUDRotation::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::FlyingGameHUDRotation* GlobalNamespace::FlyingGameHUDRotation::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FlyingGameHUDRotation*>());
}
inline void GlobalNamespace::FlyingGameHUDRotation::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingGameHUDRotation*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
